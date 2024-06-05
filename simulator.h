#ifndef SIMULATOR_H
#define SIMULATOR_H
#include "pokemon.h"
#include "unordered_map"
#include "stats.h"
using namespace std;

class simulator {
private:
  unordered_map<string, pokemon> PC;

public:
  simulator();              // Constructs the 3 default pokemon
  pokemon accessPC(string name);
  // start simulator
  // stop simulator
  // fight
  // add pokemon
  // more

};

#endif