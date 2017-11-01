all: statistics.c
	gcc -o homework statistics.c

clean:
	rm *.o
	rm *~
	rm homework

run: all
	./homework