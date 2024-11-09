GameData.hpp
În GameData.hpp, am creat clasa GameData, care gestionează informațiile de bază despre un jucător în joc. Această clasă include două atribute esențiale:

playerName, de tip std::string, care reține numele jucătorului.

score, de tip int, care reprezintă scorul acestuia.


Pentru flexibilitate, am adăugat mai multe tipuri de constructori:
Constructor implicit: setează valorile implicite pentru playerName (numele fiind "Unknown") și score (scorul fiind 0).

Constructor de copiere: permite crearea unui obiect GameData prin copierea datelor din alt obiect.

Constructor parametrizat: oferă posibilitatea de a inițializa un GameData cu un nume și un scor specificat.




Am definit și operatorii de bază pentru manipularea obiectelor GameData:
Operatorul de atribuire (operator=): permite atribuirea valorilor între două obiecte GameData în mod sigur, verificând auto-atribuirea.

Operatorul de egalitate (operator==): compară două obiecte GameData pentru a verifica dacă acestea au același nume și scor.

În plus, am suprascris operatorii de intrare și ieșire (operator>> și operator<<) ca funcții prietene. 
Aceștia permit citirea și afișarea datelor despre un jucător direct prin fluxuri de intrare/ieșire (std::istream și std::ostream), 
facilitând interacțiunea directă cu utilizatorul.


GameData.cpp:
În GameData.cpp, am implementat toate funcțiile și operatorii declarați în GameData.hpp:
Constructorul implicit: setează playerName ca "Unknown" și score ca 0, pentru a oferi valori implicite rezonabile.

Constructorul de copiere: copiază playerName și score de la un alt obiect GameData.

Constructorul parametrizat: permite inițializarea unui obiect GameData cu un nume și un scor specificat.

Am implementat operatorul de atribuire pentru a copia atributele playerName și score de la un alt obiect, 
cu verificarea pentru auto-atribuire. Operatorul de egalitate permite compararea obiectelor GameData pentru a vedea dacă au aceleași valori la playerName și score.



De asemenea, am suprascris operatorii de intrare și ieșire:
operator>>: permite citirea numelui și scorului unui jucător din fluxul de intrare (std::istream), astfel încât utilizatorul să poată introduce aceste date de la tastatură.

operator<<: permite afișarea unui GameData într-un flux de ieșire (std::ostream), astfel încât să pot afișa informațiile despre jucător într-un format simplu.





Ce s-a modificat:
Operatori prieteni pentru intrare și ieșire:
Am folosit friend pentru operator>> și operator<<, permițând manipularea obiectelor GameData direct prin fluxuri de intrare și ieșire (std::istream și std::ostream).
Folosirea std::string în locul șirurilor de caractere:

Am evitat utilizarea șirurilor de caractere clasice (char[]) și am folosit doar std::string, conform specificațiilor.



Implementarea STL:
Am adăugat un std::vector<std::shared_ptr<GameData>> pentru a gestiona lista de jucători, permițând stocarea dinamică a acestora.

Smart pointers: am utilizat std::shared_ptr pentru a gestiona memoria obiectelor GameData din vector, evitând problemele de alocare și eliberare manuală.

Am adăugat funcții noi, cum ar fi addPlayer, findPlayer, sortPlayersByScore și displayAllPlayers, 
utilizând algoritmi STL pentru căutare și sortare (std::find_if și std::sort).