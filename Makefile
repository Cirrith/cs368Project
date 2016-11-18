#Makefile for CS368

CC=g++
CFLAGS=-c -Wall -std=c++11
LDFLAGS=
SOURCES=main.cpp
DEPS=board.hpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

all: $(SOURCES) $(DEPS)  $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS)  -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean: 
	rm *o $(EXECUTABLE)
