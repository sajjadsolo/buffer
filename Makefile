CC = gcc
CFLAGS = -Wall 
DEPS = ring.h
OBJ = ring.o

all:final


%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $@ $<

final:$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o application

.PHONY: clean
clean:
	rm ring.o application
