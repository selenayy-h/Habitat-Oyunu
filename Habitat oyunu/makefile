hepsi: derle calistir

derle: Canli.o Bocek.o Bitki.o Pire.o Sinek.o Habitat.o		

Canli.o:
	gcc -I include/ -o ./lib/Canli.o -c ./src/Canli.c

Bocek.o:
	gcc -I include/ -o ./lib/Bocek.o -c ./src/Bocek.c

Bitki.o:
	gcc -I include/ -o ./lib/Bitki.o -c ./src/Bitki.c

Pire.o:
	gcc -I include/ -o ./lib/Pire.o -c ./src/Pire.c

Sinek.o:
	gcc -I include/ -o ./lib/Sinek.o -c ./src/Sinek.c

Habitat.o:
	gcc -I include/ -o ./lib/Habitat.o -c ./src/Habitat.c

link:
	gcc -o ./bin/Test ./lib/Canli.o ./lib/Bocek.o ./lib/Bitki.o ./lib/Pire.o ./lib/Sinek.o ./lib/Habitat.o ./src/Test.c -I./include/

calistir: link
	./bin/Test
