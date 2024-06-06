#include "simulator.h"
#include "pokemon.h"
#include "stats.h"
#include "unordered_map"
#include <iostream>

using namespace std;

int main() {
  simulator sim;
  // sim.accessPC("Dewott").print();
  // cout << endl;
  // sim.accessPC("Servine").print();
  // cout << endl;
  // sim.accessPC("Pignite").print();
  // cout << endl;

  // sim.accessPC("Pignite").getMove(0).print();
  // cout << endl;
  // sim.accessMoveDatabase("Flame Charge").print();

  //sim.battle(sim.pokemonSelection(), sim.randomPokemonSelector());
  sim.displayOppoPokemon(sim.accessPC("Pignite"));

  return 0;
}