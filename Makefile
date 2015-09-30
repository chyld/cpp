CC=g++
CFLAGS=-c -g -O0 -Wall -std=c++14

all: awesome

awesome: clean main.o foo.o primitives
	$(CC) main.o foo.o primitives.o -o awesome

main.o:
	$(CC) $(CFLAGS) main.cpp

foo.o:
	$(CC) $(CFLAGS) foo.cpp

primitives:
	$(CC) $(CFLAGS) ./libraries/primitives.cpp

clean:
	rm -rf *.o awesome
