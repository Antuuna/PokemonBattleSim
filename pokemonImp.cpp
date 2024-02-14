#include "pokemon.h"
#include "stats.h"
#include <iostream>

pokemon::pokemon() {
  name = "";
  typing = Normal;
  base.setstats(0, 0, 0, 0, 0, 0);
  IV.setstats(0, 0, 0, 0, 0, 0);
  EV.setstats(0, 0, 0, 0, 0, 0);
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