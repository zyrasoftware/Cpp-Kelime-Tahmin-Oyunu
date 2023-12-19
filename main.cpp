
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

class WordGuess {
public:
    WordGuess(const std::vector<std::string>& wordPool) : wordPool(wordPool) {
        std::time_t currentTime = std::time(0);  // time_t türünde değişken kullan
        std::srand(static_cast<unsigned int>(currentTime));
        selectRandomWord();
        initializeSecretWord();
    }

    void playGame() {
        std::cout << "Hoş geldiniz! Kelimeyi tahmin edin." << std::endl;

        while (!isGameComplete()) {
            displayProgress();
            char guess = getGuess();
            checkGuess(guess);
        }

        std::cout << "Tebrikler! Kelimeyi doğru tahmin ettiniz. Kelime: " << secretWord << std::endl;
    }

private:
    std::vector<std::string> wordPool;
    std::string secretWord;
    std::vector<char> guessedLetters;

    void selectRandomWord() {
        int randomIndex = rand() % wordPool.size();
        secretWord = wordPool[randomIndex];
    }

    void initializeSecretWord() {
        for (char letter : secretWord) {
            if (std::isalpha(letter)) {
                guessedLetters.push_back('_');
            }
            else {
                guessedLetters.push_back(letter);
            }
        }
    }

    void displayProgress() const {
        std::cout << "Tahmin edilen kelime: ";
        for (char letter : guessedLetters) {
            std::cout << letter << " ";
        }
        std::cout << std::endl;
    }

    char getGuess() const {
        char guess;
        std::cout << "Bir harf tahmin edin: ";
        std::cin >> guess;
        return std::tolower(guess);
    }

    void checkGuess(char guess) {
        bool found = false;
        for (size_t i = 0; i < secretWord.size(); ++i) {
            if (std::tolower(secretWord[i]) == guess) {
                guessedLetters[i] = secretWord[i];
                found = true;
            }
        }

        if (!found) {
            std::cout << "Üzgünüm, yanlış tahmin. Tekrar deneyin." << std::endl;
        }
    }

    bool isGameComplete() const {
        return std::string(guessedLetters.begin(), guessedLetters.end()) == secretWord;
    }
};

int main() {
    setlocale(LC_ALL, "Turkish");
    std::vector<std::string> wordPool = { "programlama", "cplusplus", "zyrasoftware", "challenge", "awesome" };

    WordGuess game(wordPool);
    game.playGame();

    return 0;
}
