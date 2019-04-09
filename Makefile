## Por João Vitor ##
############################# Makefile ##########################
CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=$(wildcard *.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=$(SOURCES:.cpp=)


##all:$(OBJECTS) $(EXECUTABLE)
##	g++ ARQ.cpp Enquadramento.cpp Serial.cpp main.cpp -o protocolo -std=c++11
all:$(OBJECTS)
	g++ ARQ.cpp Enquadramento.cpp Serial.cpp main.cpp -o protocolo -std=c++11
send:$(OBJECTS)
	g++ ARQ.cpp Enquadramento.cpp Serial.cpp send.cpp -o send -std=c++11
rec:$(OBJECTS)
	g++ ARQ.cpp Enquadramento.cpp Serial.cpp receptor.cpp -o rec -std=c++11
clean:
	rm -rf protocolo send rec *.o
mrproper: clean
	rm -rf teste 
exec:
	./protocolo
