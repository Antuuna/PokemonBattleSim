#include "simulator.h"
#include "pokemon.h"
#include "stats.h"
#include "unordered_map"
#include <iostream>

using namespace std;

int main() {
  simulator sim;
  
  sim.displayBattle(sim.accessPC("Dewott"), 
                    sim.accessPC("Pignite"), 
                    sim.accessPC("Dewott").calculatedHP(), 
                    sim.accessPC("Pignite").calculatedHP());

  return 0;
}