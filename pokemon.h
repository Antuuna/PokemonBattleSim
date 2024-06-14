#ifndef POKEMON_H
#define POKEMON_H
#include "stats.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include "moves.h"
using namespace std;

enum elements {Normal, Fire, Water, Grass};

class pokemon {
private:
  string name;
  elements typing;
  stats base;
  stats IV;
  stats EV;
  moves moveset[4];

public:
  pokemon();
  pokemon(string n, elements t);
  void randomizerIV();
  void print();
  stats getBaseStats();
  stats getIVStats();
  stats getEVStats();
  void setBase(int h, int a, int d, int spa, int spd, int s);
  void setIV(int h, int a, int d, int spa, int spd, int s);
  void setEV(int h, int a, int d, int spa, int spd, int s);
  void setMove(moves moveName, int moveSlot);
  moves getMove(int index);
  string getName();
  int calculatedHP();
  ~pokemon();
};

#endif