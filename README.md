Pentru laboratorul 4 am schimbat file-urile create pentru laboratorul 3: GameData.cpp si GameData.hpp.


Ce s-a realizat:
GameData.hpp
În GameData.hpp, am creat clasa GameData, care gestionează informațiile de bază despre un jucător în joc. 
În această clasă, am definit două atribute principale: playerName (numele jucătorului) și score (scorul acestuia), 
ambele fiind de tipuri moderne și sigure (std::string pentru text și int pentru numere).

Am adăugat mai multe construcții pentru flexibilitate:
Constructor implicit: seteaza valorile implicite pentru playerName (numele fiind "Unknown") și score (scorul fiind 0).

Constructor de copiere: permite crearea unui obiect GameData prin copierea datelor din alt obiect, asigurând o copiere corecta a atributelor.

Constructor parametrizat: ofera posibilitatea de a inițializa un GameData cu un nume și un scor specificat.

Operatorul de atribuire (operator=): permite atribuirea valorilor între două obiecte GameData, asigurând că resursele sunt gestionate corect, 
și evitând auto-atribuirea.

Operatorul de egalitate (operator==): compara două obiecte GameData pentru a verifica dacă acestea au același nume și același scor.

De asemenea, am adăugat funcții prietene (friend functions) pentru a suprascrie 
operatorii de intrare și ieșire (operator>> și operator<<). 
Acestea ne permit să citim și să afișăm obiecte GameData direct prin fluxuri de intrare și ieșire, facilitând interacțiunea cu utilizatorul.



GameData.cpp
În GameData.cpp, am implementat funcționalitatea declarată în GameData.hpp.

Constructorul implicit: seteaza playerName ca "Unknown" și score ca 0. 
Astfel, un obiect GameData va avea valori implicite rezonabile dacă nu sunt oferite date inițiale.

Constructorul de copiere: copiază playerName și score de la un alt obiect GameData, pentru a crea o replică identică a acestuia.

Constructorul parametrizat: permite inițializarea unui obiect GameData cu un nume și un scor specificat de utilizator, 
ceea ce e util atunci când am deja aceste informații și vreau să le seteze direct.

Operatorul de atribuire (operator=): am implementat acest operator pentru a copia atributele playerName și score de la un alt obiect. 
Am adăugat o verificare pentru auto-atribuire (this != &other), astfel încât să evit suprascrierea accidentală în cazul atribuirii unui obiect lui însuși.

Operatorul de egalitate (operator==): compara două obiecte GameData, 
pentru a vedea dacă au exact aceleași valori la playerName și score.

Suprascrierea operatorilor de intrare și ieșire:

operator>>: permite citirea numelui și scorului unui jucător direct din fluxul de intrare (cum ar fi std::cin), 
astfel încât utilizatorul să poată introduce aceste date de la tastatură.
operator<<: permite afișarea directă a unui GameData într-un flux de ieșire (cum ar fi std::cout), 
astfel încât să afișez simplu informațiile despre jucător.









Ce s-a modificat:
GameData.hpp:
Operatori prieteni pentru intrare și ieșire:
Am folosit friend pentru operator>> și operator<<, pentru a permite manipularea obiectelor 
GameData direct prin fluxurile de intrare și ieșire (std::istream și std::ostream).



GameData.cpp:
În GameData.cpp, am făcut următoarele modificări:
Constructorii și operatorii de copiere:
Am păstrat constructorii de bază și operatorul de copiere. Aceștia copiază în siguranță playerName și score între obiecte de tip GameData fără a folosi pointeri.

Operatori de intrare și ieșire:
Am implementat operator>> și operator<< pentru a permite citirea și afișarea obiectelor GameData direct prin fluxuri. În loc să folosesc cin direct în cod, 
acum funcțiile prietene citesc/afișează atributul playerName și score prin intermediul fluxurilor (std::istream pentru operator>> și std::ostream pentru operator<<).

Evitarea șirurilor de caractere clasice:
Am folosit doar std::string în clasa GameData, conform specificațiilor, evitând șiruri de caractere clasice (char[]).