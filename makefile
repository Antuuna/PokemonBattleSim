# Make file.

OBJS	= pokemonMain.o simulatorImp.o pokemonImp.o statsImp.o
CC		= g++
CCFLAGS	= -Wall -Wextra -pedantic -std=c++11 -g

DEPS	= simulator.h pokemon.h stats.h 

all: pokemonMain

pokemonMain: $(OBJS)
	$(CC) $(CCFLAGS) -o pokemonMain $(OBJS)

pokemonMain.o:	pokemonMain.cpp $(DEPS)
	$(CC) $(CCFLAGS) -c pokemonMain.cpp

simulatorImp.o: simulatorImp.cpp $(DEPS)
	$(CC) $(CCFLAGS) -c simulatorImp.cpp

pokemonImp.o: pokemonImp.cpp $(DEPS)
	$(CC) $(CCFLAGS) -c pokemonImp.cpp

statsImp.o: statsImp.cpp $(DEPS)
	$(CC) $(CCFLAGS) -c statsImp.cpp


# -----
# clean by removing object files.

clean:
	rm $(OBJS) pokemonMain
