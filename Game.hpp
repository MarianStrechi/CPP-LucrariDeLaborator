#pragma once

/// \file Game.hpp
/// \brief Declarațiile funcțiilor și variabilelor globale utilizate în joc.
/// \author [Strechi Marian]
/// \date 2024
/// \details Conține definițiile variabilelor globale și prototipurile funcțiilor pentru logica jocului.

/// \brief Lățimea hărții de joc.
const int WIDTH = 20;

/// \brief Înălțimea hărții de joc.
const int HEIGHT = 10;

/// \brief Matrice care reprezintă harta jocului.
extern int map[HEIGHT][WIDTH];

/// \brief Coordonata X a lui Pacman.
extern int pacmanX;

/// \brief Coordonata Y a lui Pacman.
extern int pacmanY;

/// \brief Scorul curent al jocului.
extern int score;

/**
 * \brief Șterge ecranul terminalului pentru a pregăti afișarea următoarei stări a jocului.
 */
void ClearScreen();

/**
 * \brief Desenează harta și afișează starea curentă a jocului.
 */
void Draw();

/**
 * \brief Procesează intrările utilizatorului pentru a controla jocul.
 */
void Input();

/**
 * \brief Gestionează logica principală a jocului, inclusiv mișcarea și scorul.
 */
void Logic();
