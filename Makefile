#Makefile for CS368

CC=g++
CFLAGS=-c -Wall -std=c++11
LDFLAGS=
SOURCES=main.cpp a2.cpp trim.cpp
DEPS=a2.hpp trim.hpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main

all: $(SOURCES) $(DEPS)  $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS)  -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean: 
	rm *o $(EXECUTABLE)