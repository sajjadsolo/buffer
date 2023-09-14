CC = gcc
CFLAGS = -Wall
DEPS = test.h

all: final

test.o:test.c $(DEPS)
	$(CC) $(CFLAGS) -c test.c

final:test.o
	$(CC) $(CFLAGS) test.o -o application

clean:
	rm main.o application
