Pentru acest laborator s-a creat un file Makefile care creeaza fișierul executabil pentru program daca este pornit cu compilatorul g++. 
Acest file este utilizat pentru compilare, dar si pentru curațirea programului cand executarea sa e terminata 
La fel s-a creat .gitignore file pentru listarea fișierelor generate care trebuie excluse din repozitoriu

Daca se foloseste un compilator cu suportul g++, jocul se ruleaza în acest mod:
Se deschide un terminal în directorul proiectului.
Se rulează comanda de compilare:
make

Pentru rularea jocul se scrie comanda:
./PacmanGame.exe

Pentru a curăța fișierele obiect și executabilele generate se scrie comanda:
make clean

Am descris mai sus procesul creării file-ului executabil cu ajutorul folosirii file-ului makefile.

Am creat și un .gitignore file ce este utilizat pentru a specifica ce fișiere și directoare ar trebui să fie ignorate de Git, 
adică să nu fie urmărite sau incluse în commit-uri: 
*.o – Ignoră toate fișierele obiect (.o). 
Acestea sunt fișiere temporare generate de compilator în timpul procesului de compilare. 
Ele conțin codul mașină rezultat după compilarea unui fișier sursă C++ (de exemplu, Game.o).

*.exe – Ignoră toate fișierele executabile pentru Windows (.exe). 
Acestea sunt rezultatul final al procesului de compilare și nu sunt de obicei incluse în repository, deoarece fiecare utilizator poate compila propriul executabil.

*.out – Ignoră toate fișierele de ieșire (.out). 
În general, acestea sunt fișierele executabile generate pe sistemele Linux sau macOS în urma compilării, de exemplu, după rularea unui program prin comanda g++.


În acest proiect am inclus și însăși file-ul executabil care a fost creat la mine cand am rulat comenzile cu compilatorul cu suportul g++.