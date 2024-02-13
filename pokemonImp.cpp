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
  cout << setw(10) << "Hp";
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
}