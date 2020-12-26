all: isort txtfind

isort.o: isort.c
	gcc -Wall -c isort.c

isort: isort.o
	gcc -Wall isort.o -o isort

txtfind.o: txtfind.c
	gcc -Wall -c txtfind.c

txtfind: txtfind.o
	gcc -Wall txtfind.o -o txtfind


clean:
	rm -f *.o txtfind isort

.PHONY: clean all
