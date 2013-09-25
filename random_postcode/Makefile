CC=gcc
CFLAGS=-O3

main: random_string.o
	@$(CC) -o random_string random_string.o $(CFLAGS)

clean:
	rm ./random_string

test: main
        ./test.sh
