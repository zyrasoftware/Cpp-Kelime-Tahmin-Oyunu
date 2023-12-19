# Kelime-Tahmin-Oyunu
Bu basit C++ programı, kullanıcının rastgele seçilen kelimeleri tahmin ettiği bir kelime tahmin oyununu gerçekleştirir. Oyunun amacı, kullanıcının doğru harfleri tahmin ederek gizli kelimeyi bulmasıdır.


## Nasıl Çalışır?

- Program başladığında, rastgele bir kelime seçilir ve kullanıcıya bu kelimenin harf sayısı kadar alt tire karakter içeren bir gösterim sunulur.
- Kullanıcı, her tahmininde bir harf girebilir.
- Doğru tahmin edilen harfler, gizli kelimenin doğru konumlarına yerleştirilir.
- Kullanıcı, kelimenin tamamını doğru tahmin ettiğinde oyun tamamlanır ve doğru kelime ekrana yazdırılır.
- Yanlış tahminlerde, kullanıcıya doğru harflerin yerine alt tire karakterleri içeren gösterim tekrar gösterilir.

# `WordGuess` Sınıfı Açıklaması:
- `WordGuess` sınıfı, kelime tahmin oyununu gerçekleştiren bir sınıftır. Oyun, rastgele seçilen bir kelimenin harflerini tahmin etmeye dayanır.
  - Constructor (`WordGuess` Kurucusu):
  - `const std::vector<std::string>& wordPool`: Oyun için kullanılacak kelimelerin bulunduğu bir kelime havuzunu alır.
  - Kelime havuzundan rastgele bir kelime seçer ve gizli kelimeyi oluşturur.
  - Gizli kelimenin harf sayısını gösteren alt tire karakterleri içeren `guessedLetters` vektörünü başlatır.
- `playGame` Fonksiyonu:
- Oyunu başlatan ve kullanıcıya tahmin yapma şansı veren bir fonksiyondur.
- Kullanıcı doğru tahminlerde bulunana kadar oyun devam eder.
- Oyun tamamlandığında doğru tahmin edilen kelimeyi ve tebrik mesajını gösterir.

# Diğer Yardımcı Fonksiyonlar:
- `selectRandomWord`: Kelime havuzundan rastgele bir kelime seçer.
- `initializeSecretWord`: Gizli kelimenin harf sayısı kadar alt tire karakter içeren vektörü başlatır.
- `displayProgress`: Kullanıcıya doğru tahmin edilen harfleri gösterir.
- `getGuess`: Kullanıcıdan bir harf tahmini alır.
- `checkGuess`: Kullanıcının tahmin ettiği harfi kontrol eder ve doğruysa gösterir.


# Önemli Notlar:
- `setlocale(LC_ALL, "Turkish");` fonksiyonu, Türkçe karakterleri doğru bir şekilde işlemek için kullanılır.

# `main` Fonksiyonu Açıklaması:
- `WordGuess` sınıfını kullanarak bir kelime tahmin oyunu başlatır.
- Oyunun kullanılacak kelime havuzunu belirler.
- `playGame` fonksiyonunu çağırarak oyunu başlatır.


# Ekran Resmi
![zyrasoftware](kodde7.PNG)

# Bilgilendirme
**---------------------------------------------------------**
| Herkese Açık | Geliştirilebilir | Zyra Software|
|---------|---------|---------|
| Açık | Geliştirilebilir |@zyrasoftware |
