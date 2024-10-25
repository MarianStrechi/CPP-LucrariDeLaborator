Acest proiect demonstrează o structură simplă pentru gestionarea datelor unui joc utilizând două fișiere C++: GameData.hpp și GameData.cpp. 
Aceste fișiere definesc și implementează clasa GameData, care reprezintă informațiile esențiale despre un jucător (nume și scor), 
incluzând operatori și metode pentru manipularea acestora.

1. GameData.hpp
GameData.hpp este fișierul header ce conține declarațiile pentru clasa GameData și metodele sale. Principalele caracteristici sunt:

Constructor implicit: Inițializează obiectul GameData cu valori prestabilite (nume "Unknown" și scor 0).
Constructor de copiere: Creează o copie a unui obiect GameData existent.
Constructor cu parametri: Permite inițializarea unui obiect GameData cu un nume de jucător și un scor specific.
Operator de atribuire (=): Suprascrie operatorul de atribuire pentru a permite copierea corectă între obiecte GameData.
Operator de comparație (==): Verifică dacă două obiecte GameData au aceleași valori pentru nume și scor.
Operatori de intrare/ieșire (>> și <<): Permit citirea și afișarea obiectelor GameData folosind fluxuri standard de intrare/ieșire.

2. GameData.cpp
GameData.cpp este fișierul sursă ce conține implementările funcțiilor declarate în GameData.hpp. Caracteristicile implementate includ:

Constructor implicit: Inițializează obiectul GameData cu numele "Unknown" și scorul 0.
Constructor de copiere: Copiază numele și scorul dintr-un alt obiect GameData.
Constructor cu parametri: Inițializează obiectul GameData cu numele jucătorului și scorul specificat.
Operator de atribuire: Suprascrierea operatorului de atribuire pentru a evita auto-atribuirea și a copia corect valorile din alt obiect GameData.
Operator de comparație: Verifică egalitatea între două obiecte GameData, pe baza atributelor playerName și score.
Operatori de citire/afișare: Operatorul de citire (>>) permite introducerea numelui jucătorului și a scorului de la utilizator, 
iar operatorul de afișare (<<) permite prezentarea acestora într-un format adecvat.
