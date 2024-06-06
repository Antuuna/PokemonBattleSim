#ifndef SIMULATOR_H
#define SIMULATOR_H
#include "pokemon.h"
#include "unordered_map"
#include "stats.h"
#include "moves.h"
using namespace std;

class simulator {
private:
  unordered_map<string, pokemon> PC;
  unordered_map<string, moves> moveDatabase;

public:
  simulator();
  pokemon accessPC(string name);
  // Add moves to database function
  // start simulator
  // stop simulator
  // fight
  // add pokemon
  // more
  ~simulator();


};

#endif