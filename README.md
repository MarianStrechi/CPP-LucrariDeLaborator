Acesta este un joc simplu PacMan creat pe o aplicatie-consola. Personajul este reprezentat de simboul "G", peretii de simbolul "#", iar fantomele(inamicii) de simbolul "." Scopul jocului este de a prinde aceste fantome, miscand personajul spre ele, si pentru fiecare fantoma prinsa se da scorul +10.

Descrierea funcționalității programului:

1)Fișierul main.cpp: Constante: Definește constantele WIDTH și HEIGHT, care stabilesc dimensiunile hărții. Matricea map: Reprezintă layout-ul jocului. Aceasta este o matrice bidimensională de tip int, unde: 1 reprezintă pereții. 0 reprezintă spațiile libere. 2 reprezintă punctele colectabile de Pacman. Declarații de funcții: Sunt specificate funcțiile necesare pentru a rula jocul (initializeGame(), drawMap(), movePacman(), updateGame(), etc.). Variabile globale: Declară variabilele care controlează poziția lui Pacman și scorul (pacmanX, pacmanY, score, etc.).

2)Fișierul Game.cpp: Este fișierul de implementare care definește logica jocului. Conține codul care se efectueaza pentru fiecare funcție declarată în Game.hpp, și anume: Funcția initializeGame(): Inițializează poziția inițială a lui Pacman și setările de joc, cum ar fi scorul și layout-ul inițial al hărții.

Funcția drawMap(): Desenează harta în consolă, iterând prin matricea map. Fiecare valoare este desenată ca un perete, spațiu liber sau punct colectabil, în funcție de conținutul său (1, 0, 2).

Funcția movePacman(): Controlează mișcarea lui Pacman. Primește input de la tastatură (de exemplu, tastele săgeată) pentru a actualiza poziția lui Pacman și verifică coliziunile cu pereții (1), actualizează scorul dacă Pacman trece peste un punct (2).

Funcția updateGame(): Actualizează logica jocului după fiecare mișcare, verifică starea jocului (de exemplu, câte puncte mai sunt de colectat) și afișează scorul.

3)Fișierul main.cpp: Funcția acestui file este să inițializeze și să ruleze codul de bază a jocului. Funcționalul său: Se inițializează jocul apelând initializeGame(). Se rulează o buclă principală în care: Se desenează harta și starea curentă a jocului apelând drawMap(). Se gestionează mișcarea lui Pacman prin movePacman(). Se actualizează jocul cu updateGame(). Bucla continuă să ruleze până când o condiție specifică de final este îndeplinită (de exemplu, toate punctele au fost colectate sau jocul este oprit).

4)Cum merge interacțiunea între fișiere pentru rularea jocului: 1.Coordonare între fișiere: Game.hpp definește interfața și resursele jocului, Game.cpp implementează logica detaliată, iar main.cpp gestionează controlul principal al fluxului de joc. 2.Apeluri de funcții: main.cpp inițializează jocul și gestionează rularea sa continuă, apelând funcțiile din Game.cpp, care operează pe datele și constantele definite în Game.hpp.