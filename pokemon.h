#ifndef POKEMON_H
#define POKEMON_H
#include "stats.h"
#include <iostream>
#include <string>
using namespace std;

enum elements {Normal, Fire, Water, Grass};

class pokemon {
private:
  string name;
  elements typing;
  stats base;
  stats IV;
  stats EV;

public:
  pokemon();
  pokemon(string n, elements t);
  void print();
};

#endif