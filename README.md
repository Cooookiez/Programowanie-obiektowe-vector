# Programowanie obiektowe – vector

* [ ] **Zadanie 1.** Proszę dokończyć implementację klasy Wektor. Przypominam, że powinna ona posiadać:
  * [ ] konstruktor bezargumentowy
  * [ ] konstruktor kopiujący
  * [ ] konstruktor przenoszący
  * [x] konstruktor jednaoargumentowy, z argumentem określającym rozmiar wektora
  * [ ] destruktor
  * [x] operator= kopiujący
  * [ ] operator= przenoszący
  * [x] swap
  * [x] operator+ dla dwóch obiektów klasy Wektor [Przydać się też mogą składowe:]
    * [ ] int& operator[] (size_t n)
    * [ ] int operator[] const (size_t n)
    * [ ] size() const
* [ ] **Zadanie 2.** A teraz proszę na podstawie powyższej klasy stworzyć analogiczną klasę Wektor98, mającą dokładnie tę samą implementację co klasa Wektor, ale bez operacji przenoszących (a zwłaszcza bez konstruktora przenoszącego).
* [ ] **Zadanie 3.** W kolejnym punkcie proszę zbadać względną wydajność obu implementacji 
  * [ ] Do katalogu głównego swojego projektu pobierz bibliotekę Celero (https://github.com/DigitalInBlue/Celero). Skoro jest ona w publicznym repozytorium GitHuba, ze ściągnięciem jej nie powinno być kłopotu (przypominam: git clone …).
  * [ ] W katalogu głównym projektu utwórz podkatalog cmake. 
  * [ ] Utwórz pusty plik benchmark.cpp (np. komendą touch benchmark.cpp). Katalog główny projektu powinien teraz wyglądać mniej więcej tak. [zdjecie w pdf]
  * [ ] Wejdź do katalogu Celero i skompiluj jego zawartość (zwróć uwagę, że zawiera on plik CMakeLists.txt, co powinno dać Ci wystarczającą wskazówkę odnośnie podstawowego sposobu kompilacji.
  * [ ] Wróć do katalogu głównego. Do katalogu cmake wgraj załączony plik FindCelero.cmake
  * [ ] Musisz jeszcze zaktualizować plik CMakeLists.txt tak, aby za jego pomocą można było kompilować nie tylko plik main.cpp, ale i benchmark.cpp jako dwa niezależne programy. Dla ułatwienia załączam mój plik CMakeLists.txt, który u mnie działa i robi to, co powinien. 
  * [ ] W pliku benchmark.cpp umieść jakiś prosty przykład benchmarku w systemie Celero, np. ten z dokumentacji biblioteki, htps://github.com/DigitalInBlue/Celero#using-the-code, rozdział Using the Code
  * [ ] Skompiluj program(y). Sprawdź, że działa zarówno main.cpp, jak i benchmark.cpp
  * [ ] Na podstawie programu przykładowego zmień treść pliku benchmark.cpp na taką, by program ten testował względną prędkość obu twoich klas, Wektor i Wektor98. Oto fragment mojego rozwiązania:
    ```cpp
    const int N = 1000000;
    Wektor98 w98(N);
    Wektor w(N);
    CELERO_MAIN
    BASELINE(MoveSemantics, CPP_11, 5, 10)
    {
    Wektor v = w + w + w + w;
    celero::DoNotOptimizeAway(v);
    }
    ```
    [+  zrzut ekranu z mojego komputera w pdf]
