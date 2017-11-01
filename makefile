all: statistics.c
	gcc statistics.c

clean:
	rm *~
	rm homework

run: all
	./a.out