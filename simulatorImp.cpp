#include "simulator.h"

simulator::simulator() {
  pokemon Servine("Servine", Grass);
  Servine.setBase(60, 60, 75, 60, 75, 83);
  Servine.setIV(15, 15, 15, 15, 15, 15);

  pokemon Dewott("Dewott", Water);
  Dewott.setBase(75, 75, 60, 83, 60, 60);
  Dewott.setIV(15, 15, 15, 15, 15, 15);

  pokemon Pignite("Pignite", Fire);
  Pignite.setBase(90, 93, 55, 70, 55, 55);
  Pignite.setIV(15, 15, 15, 15, 15, 15);

  PC["Servine"] = Servine;
  PC["Dewott"] = Dewott;
  PC["Pignite"] = Pignite;

  moves Tackle("Tackle", N, Physical, 40, 35, 100);
  moves Tail_Whip("Tail Whip", N, Status, 0, 30, 100);
  moves Water_Gun("Water Gun", W, Special, 40, 25, 100);
  moves Razor_Shell("Razor Shell", W, Physical, 75, 10, 95);
  moves Water_Pulse("Water Pulse", W, Special, 60, 20, 100);
  moves Leer("Leer", N, Status, 0, 30, 100);
  moves Vine_Whip("Vine Whip", G, Physical, 45, 25, 100);
  moves Ember("Ember", F, Special, 40, 25, 100);
  moves Defense_Curl("Defense Curl", N, Status, 0, 40, 100);
  moves Flame_Charge("Flame Charge", F, Physical, 50, 20, 100);
  moves Magical_Leaf("Magical Leaf", G, Physical, 50, 20, 100);

  moveDatabase["Tackle"] = Tackle;
  moveDatabase["Tail Whip"] = Tail_Whip;
  moveDatabase["Water Gun"] = Water_Gun;
  moveDatabase["Razor Shell"] = Razor_Shell;
  moveDatabase["Water Pulse"] = Water_Pulse;
  moveDatabase["Leer"] = Leer;
  moveDatabase["Vine Whip"] = Vine_Whip;
  moveDatabase["Ember"] = Ember;
  moveDatabase["Defense Curl"] = Defense_Curl;
  moveDatabase["Flame Charge"] = Flame_Charge;

  PC["Servine"].setMove(moveDatabase["Tackle"], 0);
  PC["Servine"].setMove(moveDatabase["Leer"], 1);
  PC["Servine"].setMove(moveDatabase["Vine Whip"], 2);
  PC["Servine"].setMove(moveDatabase["Magical_Leaf"], 3);

  PC["Dewott"].setMove(moveDatabase["Tackle"], 0);
  PC["Dewott"].setMove(moveDatabase["Tail Whip"], 1);
  PC["Dewott"].setMove(moveDatabase["Water Gun"], 2);
  PC["Dewott"].setMove(moveDatabase["Razor Shell"], 3);

  PC["Pignite"].setMove(moveDatabase["Tackle"], 0);
  PC["Pignite"].setMove(moveDatabase["Ember"], 1);
  PC["Pignite"].setMove(moveDatabase["Flame Charge"], 2);
  PC["Pignite"].setMove(moveDatabase["Tail Whip"], 3);
}

pokemon simulator::accessPC(string name) {
  return PC[name];
}

moves simulator::accessMoveDatabase(string name) {
  return moveDatabase[name];
}

simulator::~simulator() {

}