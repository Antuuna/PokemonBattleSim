#include "simulator.h"

simulator::simulator() {
  pokemon Servine("Servine", Grass);
  Servine.base.setstats(60, 60, 75, 60, 75, 83);
  Servine.IV.setstats(15, 15, 15, 15, 15, 15);

  pokemon Dewott("Dewott", Water);
  Dewott.base.setstats(75, 75, 60, 83, 60, 60);
  Dewott.IV.setstats(15, 15, 15, 15, 15, 15);

  pokemon Pignite("Pignite", Fire);
  Pignite.base.setstats(90, 93, 55, 70, 55, 55);
  Pignite.IV.setstats(15, 15, 15, 15, 15, 15);

  PC["Servine"] = Servine;
  PC["Dewott"] = Dewott;
  PC["Pignite"] = Pignite;
}

pokemon simulator::accessPC(string name) {
  return PC[name];
}