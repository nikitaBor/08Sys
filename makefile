all: statistics.c
	gcc -o homework statistics.c

clean:
	rm *.o
	rm *~

run: all
	./homework