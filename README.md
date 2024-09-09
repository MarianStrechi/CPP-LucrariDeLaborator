Acesta este un joc simplu PacMan creat pe o aplicatie-consola. Personajul este reprezentat de simboul "G", peretii de simbolul "#", iar fantomele(inamicii) de simbolul "." Scopul jocului este de a prinde aceste fantome, miscand personajul spre ele, si pentru fiecare fantoma prinsa se da scorul +10. Mișcarea personajului se realizează cu tastele W,A,S,D.

Descrierea funcționalității programului:

1. Game.hpp
Acest fișier de antet definește constantele și funcțiile necesare pentru joc:

Constante:
WIDTH = 20 și HEIGHT = 10 stabilesc dimensiunea hărții jocului.
Variabile externe:
map[HEIGHT][WIDTH]: o matrice care reprezintă harta jocului.
pacmanX și pacmanY: coordonatele lui Pacman pe hartă.
score: scorul curent al jucătorului.
Funcții:
ClearScreen(): curăță ecranul.
Draw(): desenează harta și starea actuală a jocului.
Input(): citește și procesează input-ul de la jucător.
Logic(): gestionează logica jocului, inclusiv creșterea scorului.

2. Game.cpp
Acesta este fișierul principal al jocului care implementează funcțiile definite în Game.hpp:

Definirea hărții:
map[HEIGHT][WIDTH]: o matrice ce reprezintă harta jocului. Valorile 1 reprezintă pereții (#), 0 reprezintă spațiile libere ( ), iar 2 reprezintă punctele de scor (.).
Funcții:
ClearScreen(): folosește comanda system("cls") pentru a curăța ecranul.
Draw(): desenează harta pe ecran, reprezentând Pacman cu simbolul G, pereții cu #, spațiile libere cu , și punctele de scor(fantomele) cu "." . De asemenea, afișează scorul curent.
Input(): detectează apăsarea tastelor W,A,S,D pentru a mișca Pacman în sus, stânga, jos, și dreapta, dacă nu există un perete obstacol în direcția respectivă.
Logic(): verifică dacă Pacman se află pe un punct de scor (valoarea 2), adaugă 10 puncte la scor, și elimină punctul de pe hartă schimbând valoarea la 0.

3. main.cpp
Acest fișier conține funcția main() care gestionează bucla principală a jocului:

Setează câteva poziții de pe hartă cu valoarea 2 pentru a reprezenta punctele de scor.
Bucla principală:
Apeluri la funcțiile Draw(), Input(), și Logic() pentru a desena harta, a procesa input-ul jucătorului și a gestiona logica jocului.
Folosește Sleep(100) pentru a introduce o întârziere de 100 milisecunde între fiecare ciclu al buclei, astfel încât jocul să nu ruleze prea repede.
