#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];    // HIBA: NELEMENTS nincs definiálva, helyesen N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'  // HIBA: string helyett karakter literál (' '), dupla idézőjel kell, hiányzó pontosvessző a sor végén
    for (int i = 0;)    // HIBA: hiányzik a ciklus feltétel és léptetés
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // HIBA: hibás ciklusfeltétel, i < N_ELEMENTS kellene
    {
        std::cout << "Ertek:"   // HIBA: hiányzik az érték kiírása és a pontosvessző
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;  // HIBA: az atlag nincs inicializálva (0-ra kellene)
    for (int i = 0; i < N_ELEMENTS, i++)    // HIBA: vessző szerepel pontosvessző helyett
    {
        atlag += b[i]   // HIBA: hiányzó pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}   // HIBA: dinamikus memória nincs felszabadítva (delete[] b)
