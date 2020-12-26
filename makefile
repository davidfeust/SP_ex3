all: isort txtfind

isort.o: isort.c
	gcc -Wall -c isort.c

txtfind.o:
	gcc -Wall -c txtfind.c

clean:
	rm -f *.o

.PHONY: clean all
