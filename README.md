Acest proiect demonstrează o structură simplă pentru gestionarea datelor unui joc, utilizând două fișiere C++: GameData.hpp și GameData.cpp. 
Aceste fișiere definesc și implementează o clasă GameData pentru a reprezenta informațiile de bază despre jucător (nume și scor) și include operatori și metode pentru manipularea acestor date:

 1. GameData.hpp Fișierul GameData.hpp este un header file care conține declarațiile pentru clasa GameData și metodele asociate. Principalele caracteristici ale acestui fișier includ: 
Constructor implicit: Inițializează obiectul GameData cu valori prestabilite (nume jucător necunoscut și scor 0). 
Constructor de copiere: Creează o copie a unui obiect GameData existent. 
Constructor cu parametri: Permite inițializarea unui obiect GameData cu un nume de jucător și un scor personalizat. 
Operator de copiere (=): Suprascrie operatorul de copiere pentru a gestiona atribuirea corectă între obiecte GameData. 
Operator de comparație (==): Verifică dacă două obiecte GameData au aceleași valori pentru nume și scor. 
Operatori de intrare/ieșire (>>, <<): Permite citirea și afișarea obiectelor GameData folosind fluxuri de intrare/ieșire standard (de exemplu, pentru citirea de la tastatură și afișarea pe ecran). 


2. GameData.cpp Fișierul GameData.cpp este un source file care conține implementările funcțiilor declarate în GameData.hpp. 
Caracteristicile implementate sunt: Constructor implicit: Inițializează un obiect cu nume "Unknown" și scor 0. 
Constructor de copiere: Copiază numele și scorul dintr-un alt obiect GameData. 
Constructor cu parametri: Permite inițializarea unui obiect GameData cu valori specifice pentru numele jucătorului și scor. 
Operator de copiere: Suprascrierea operatorului = pentru a evita auto-atribuirea și pentru a copia valorile relevante din alt obiect GameData. 
Operator de comparație: Verifică egalitatea între două obiecte GameData bazată pe valorile atributelor playerName și score. 
Operatori de citire/afișare: Operatorul de citire (>>) permite citirea numelui jucătorului și a scorului de la utilizator. 
Operatorul de afișare (<<) permite afișarea scorului într-un format potrivit.