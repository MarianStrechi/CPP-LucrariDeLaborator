# Proiect: Pacman 

## Descrierea proiectului
Pacman Modernizat este o reimaginare a jocului clasic Pacman, implementat folosind C++ și un mediu de consolă. Scopul proiectului este de a oferi o versiune simplificată, dar captivantă, care să permită utilizatorilor să navigheze printr-un labirint, colectând puncte și evitând obstacole. Jocul este o demonstrație de programare orientată pe obiect și algoritmi de bază.

## Reguli ale jocului
1. **Obiectivul**: Ghidează Pacman pentru a colecta punctele din labirint.
2. Mișcări:
   - Apasă `W` pentru a te deplasa în sus.
   - Apasă `S` pentru a te deplasa în jos.
   - Apasă `A` pentru a te deplasa în stânga.
   - Apasă `D` pentru a te deplasa în dreapta.
3. Obstacole: Pereții (#) nu pot fi traversați.
4. Scor:
   - Fiecare punct colectat adaugă 10 puncte la scorul tău.
5. Finalul jocului: Jocul se încheie atunci când toate punctele sunt colectate sau utilizatorul decide să își oprească jocul.

## Dependențe ale proiectului
- Mediu de dezvoltare: Visual Studio, Code::Blocks sau orice alt IDE compatibil cu C++.
- Compilator: MinGW sau MSVC (Microsoft Visual C++).
- Biblioteci utilizate:
  - `<iostream>` pentru operațiuni de intrare/ieșire.
  - `<conio.h>` pentru detectarea tastelor.
  - `<windows.h>` pentru manipularea consolei.
  - `<string>`, `<vector>` și `<memory>` pentru gestionarea datelor.

## Instrucțiuni de construire a aplicației
1. Clonare repository:
   ```bash
   git clone https://github.com/username/PacmanModernizat.git
   cd PacmanModernizat
   ```
2. Deschidere proiect: Deschide fișierul proiectului (`.sln` pentru Visual Studio sau proiectul din IDE-ul preferat).
3. Compilare:
   - Asigură-te că toate dependențele sunt incluse și configurate corect.
   - Rulează comanda de build sau utilizează opțiunea de compilare a IDE-ului.
4. Rulare:
   - Execută fișierul generat (`PacmanModernizat.exe`).
   - Urmează instrucțiunile afișate în consolă pentru a juca.


## Documentatia:
Poate fi accesata prin deschiderea file-ului "DOCUMENTATION" în mapa principală a proiectului.



##Teste:
Am creat un proiect nou special pentru teste cu referința la proiectul principal, în mapa "PACMAN TEST". Testul a mers cu succes, nu s-a dat nici o eroare în compilator la build.

