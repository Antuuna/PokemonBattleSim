#include "pokemon.h"
#include "stats.h"
#include <iostream>

pokemon::pokemon() {
  name = "";
  typing = Normal;
  setBase(0, 0, 0, 0, 0, 0);
  setIV(0, 0, 0, 0, 0, 0);
  setEV(0, 0, 0, 0, 0, 0);
}

pokemon::pokemon(string n, elements t) {
  name = n;
  typing = t;
}

void pokemon::print() {
  cout << setw(10) << "HP";
  cout << setw(6) << "Atk";
  cout << setw(6) << "Def";
  cout << setw(6) << "SpAtk";
  cout << setw(6) << "SpDef";
  cout << setw(6) << "Speed";
  cout << endl;

  cout << "Base";
  base.print();
  cout << endl;

  cout << "IV  ";
  IV.print();
  cout << endl;
  
  cout << "EV  ";
  EV.print();
  cout << endl;

  cout << "Typing: ";
  switch(typing) {
    case 0:
      cout << "Normal" << endl;
      break;
    case 1:
      cout << "Fire" << endl;
      break;
    case 2:
      cout << "Water" << endl;
      break;
    case 3:
      cout << "Grass" << endl;
      break;
    default:
      break;
  }

  cout << "Pokemon: " << name << endl;
  cout << "Move 1: " << moveset[0].getName() << endl;
  cout << "Move 2: " << moveset[1].getName() << endl;
  cout << "Move 3: " << moveset[2].getName() << endl;
  cout << "Move 4: " << moveset[3].getName() << endl;
}

void pokemon::randomizerIV() {
  srand(time(NULL));

  int h = rand() % 32;
  int a = rand() % 32;
  int d = rand() % 32;
  int spa = rand() % 32;
  int spd = rand() % 32;
  int s = rand() % 32;

  IV.setstats(h, a, d, spa, spd, s);
}

stats pokemon::getBaseStats() {
  return base;
}

stats pokemon::getIVStats() {
  return IV;
}

stats pokemon::getEVStats() {
  return EV;
}

void pokemon::setBase(int h, int a, int d, int spa, int spd, int s) {
  base.setstats(h, a, d, spa, spd, s);
}

void pokemon::setIV(int h, int a, int d, int spa, int spd, int s) {
  IV.setstats(h, a, d, spa, spd, s);
}

void pokemon::setEV(int h, int a, int d, int spa, int spd, int s) {
  EV.setstats(h, a, d, spa, spd, s);
}

void pokemon::setMove(moves moveName, int moveSlot) {
  moveset[moveSlot] = moveName;
}

moves pokemon::getMove(int index) {
  return moveset[index];
}

string pokemon::getName() {
  return name;
}

int pokemon::calculatedHP() {
  return floor(0.01 * (2 * getBaseStats().gethp() + getIVStats().gethp() + floor(0.25 * getEVStats().gethp())) * 15) + 15 + 10;
}

pokemon::~pokemon() {

}