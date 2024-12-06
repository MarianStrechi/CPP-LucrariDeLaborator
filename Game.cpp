/// \file Game.cpp
/// \brief Implementarea funcțiilor principale ale jocului Pac-Man.
/// \author [Strechi Marian]
/// \date 2024
/// \details Acest fișier conține logica jocului, inclusiv gestionarea hărții, mișcarea jucătorului și sistemul de scor.

#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Game.hpp"

using namespace std;

/**
 * \brief Harta jocului reprezentată ca o matrice bidimensională.
 * \details Fiecare element din matrice reprezintă o celulă:
 * - 0: celulă goală
 * - 1: perete
 * - 2: punct colectabil
 */
int map[HEIGHT][WIDTH] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1},
    {1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1},
    {1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
    {1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1},
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
    {1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};

/**
 * \brief Coordonata X a personajului Pac-Man.
 */
int pacmanX = 1;

/**
 * \brief Coordonata Y a personajului Pac-Man.
 */
int pacmanY = 1;

/**
 * \brief Scorul curent al jucătorului.
 */
int score = 0;

/**
 * \brief Curăță ecranul consolei.
 * \details Folosește comanda `cls` pentru a șterge conținutul terminalului.
 */
void ClearScreen() {
    system("cls");
}

/**
 * \brief Desenează harta jocului în consolă.
 * \details Reprezintă harta cu simboluri:
 * - `G`: Pac-Man
 * - `#`: Perete
 * - `.`: Punct colectabil
 * - ` `: Celulă goală
 */
void Draw() {
    ClearScreen();
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (x == pacmanX && y == pacmanY) {
                cout << "G";  ///< Reprezintă Pac-Man
            }
            else if (map[y][x] == 1) {
                cout << "#";  ///< Reprezintă un perete
            }
            else if (map[y][x] == 0) {
                cout << " ";  ///< Reprezintă o celulă goală
            }
            else if (map[y][x] == 2) {
                cout << ".";  ///< Reprezintă un punct colectabil
            }
        }
        cout << endl;
    }
    cout << "Scor: " << score << endl;
}

/**
 * \brief Gestionează input-ul de la utilizator.
 * \details Detectează apăsarea tastelor pentru a mișca Pac-Man:
 * - `w`: sus
 * - `s`: jos
 * - `a`: stânga
 * - `d`: dreapta
 */
void Input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'w':
            if (map[pacmanY - 1][pacmanX] != 1) pacmanY--;
            break;
        case 's':
            if (map[pacmanY + 1][pacmanX] != 1) pacmanY++;
            break;
        case 'a':
            if (map[pacmanY][pacmanX - 1] != 1) pacmanX--;
            break;
        case 'd':
            if (map[pacmanY][pacmanX + 1] != 1) pacmanX++;
            break;
        }
    }
}

/**
 * \brief Gestionează logica jocului.
 * \details Verifică dacă Pac-Man colectează un punct și actualizează scorul.
 */
void Logic() {
    if (map[pacmanY][pacmanX] == 2) {
        score += 10; ///< Crește scorul cu 10 puncte
        map[pacmanY][pacmanX] = 0;  ///< Eliberează celula
    }
}
