#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //NELEMENTS nem létezik -> N_ELEMENTS viszont igen
    std::cout << '1-100 ertekek duplazasa' // Rossz aposztróf használata és nincsen lezárva a sor ;-vel
    for (int i = 0;) // Befejezetlen for ciklus -> hiányzik a feltétel és az iteráció
    {
        b[i] = i * 2; // Értékadásnál (i+1) kell, hogy ne a 0-99, hanem az 1-100 intervallumot kapjuk
    }
    for (int i = 0; i; i++) // Befejezetlen for ciklus -> hiányos a megállási feltétel
    {
        std::cout << "Ertek:" // A sor nincsen lezárva ;-vel. Hiányzik az érték kiírása
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // Nincsen kezdőérték -> nem lehet növelni az értékét (memória szemét)
    for (int i = 0; i < N_ELEMENTS, i++) // , használata ; helyett
    {
        atlag += b[i] // A sor nincsen lezárva ;-vel
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    // A mutató nincsen törölve a program kilépése előtt -> MEMÓRIASZIVÁRGÁS
    return 0;
}
