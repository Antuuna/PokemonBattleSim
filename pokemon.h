#ifndef POKEMON_H
#define POKEMON_H
#include "stats.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

enum elements {Normal, Fire, Water, Grass};

class pokemon {
private:
  string name;
  elements typing;

public:
  stats base;
  stats IV;
  stats EV;
  pokemon();
  pokemon(string n, elements t);
  void randomizerIV();
  void print();
};

#endif