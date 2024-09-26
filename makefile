all: PacmanGame

PacmanGame: Game.o main.o
	g++ -o PacmanGame.exe Game.o main.o

Game.o:
	g++ Game.cpp -o Game.o -c

main.o:
	g++ main.cpp -o main.o -c

clean:
	rm -f *.o *.exe
