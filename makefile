all: main.o statistics.o
	gcc -o homework main.o statistics.o
main.o: main.c statistics.h
	gcc -c main.c
statistics.o: statistics.c statistics.h
	gcc -c statistics.c
clean:
	rm *.o
	rm homework
run: all
	./homework
