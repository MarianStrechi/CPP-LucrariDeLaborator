Am organizat proiectul astfel incat sa utilizeze o biblioteca statica si am modificat doar Makefile pentru a automatiza procesul de compilare si creare a executabilului.

Structura Proiectului
Proiectul este organizat in urmatoarele directoare:

src/ - Contine fisierul principal main.cpp.
lib/ - Contine fisierele sursa pentru biblioteca (Game.cpp si GameData.cpp).
include/ - Contine fisierele header (Game.hpp si GameData.hpp).
bin/ - Contine executabilul final dupa compilare.
Modificarile aduse
Am creat un Makefile care face urmatoarele:

Compileaza fisierele din lib/ intr-o biblioteca statica (libgame.a).
Compileaza main.cpp din src/ si leaga biblioteca statica pentru a crea executabilul in bin/game.



Utilizare
Pentru a compila proiectul, se ruleaza comanda:
make


Dupa compilare, executabilul poate fi rulat cu:
./bin/game


