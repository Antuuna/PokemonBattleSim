#ifndef SIMULATOR_H
#define SIMULATOR_H
#include "pokemon.h"
#include "unordered_map"
#include "stats.h"
#include "moves.h"
#include <time.h>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

class simulator {
private:
  unordered_map<string, pokemon> PC;
  unordered_map<string, moves> moveDatabase;
  vector<string> pokemonNames;

public:
  simulator();
  pokemon accessPC(string name);
  moves accessMoveDatabase(string name);
  pokemon pokemonSelection();
  pokemon randomPokemonSelector();
  void battle(pokemon user, pokemon opponent);
  int move(moves selectedMove);
  bool checkKey (unordered_map<string,pokemon> m, string key);
  void displayBattle(pokemon user, pokemon opponent);
  void displayUserPokemon(pokemon user);
  void displayOppoPokemon(pokemon opponent, int currHP);
  string healthBar(double currHP, double maxHP);
  // Add moves to database function
  // start simulator
  // stop simulator
  // fight
  // add pokemon
  // more
  ~simulator();


};

#endif