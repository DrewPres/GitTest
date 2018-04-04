#File: Makefile
#Author:Drew Presson

#make for inventory

# Compiler Version
CC=g++

# Debugging flag -g
DEBUG=-g

# Target
TARGET=a.out

# Compile with all errors and warnings
CFLAGS=-c -Wall $(DEBUG)

all: $(TARGET)

$(TARGET): main.o  
	$(CC) main.o  -o $(TARGET)

main.o: main.cpp 
	$(CC) $(CFLAGS) main.cpp


clean:
	rm *.o *~ $(TARGET)