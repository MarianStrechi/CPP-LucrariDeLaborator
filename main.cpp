/// \file main.cpp
/// \brief Punctul de pornire al jocului Pac-Man.
/// \author [Strechi Marian]
/// \date 2024
/// \details Conține funcția `main` care rulează bucla principală a jocului, incluzând logica de desenare, input și actualizare a jocului.

#include "Game.hpp"
#include <windows.h>

/**
 * \brief Funcția principală a jocului.
 * \details Inițializează harta cu câteva puncte colectabile și pornește bucla principală a jocului.
 * \return Returnează 0 la terminarea programului.
 */
int main() {
    map[1][2] = 2;  ///< Punct colectabil pe hartă.
    map[1][3] = 2;
    map[2][7] = 2;
    map[5][5] = 2;

    while (true) {
        Draw();     ///< Desenează harta și starea curentă a jocului.
        Input();    ///< Gestionează input-ul utilizatorului.
        Logic();    ///< Actualizează logica jocului.
        Sleep(100); ///< Așteaptă 100 ms între cadre.
    }

    return 0;
}
