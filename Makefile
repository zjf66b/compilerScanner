CC = gcc
CFLAGS = -g -Wall
TARGET = scanner
OBJ = p1.o scanner.o testScanner.o

%.o: %.c
        $(CC) $(CFLAGS) -c $<
$(TARGET): $(OBJ)
        $(CC) $(CFLAGS) -o $@ $^

p1.o: p1.c testScanner.h scanner.h
testScanner.o: testScanner.c scanner.h token.h testScanner.h
scanner.o: scanner.c token.h character.h scanner.h

clean:
        rm -f $(TARGET) $(OBJ)
