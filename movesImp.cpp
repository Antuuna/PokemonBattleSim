#include "moves.h"

moves::moves() {
  name = "Empty";
  typing = N;
  typeOfAttack = Status;
  power = 0;
  powerPoint = 0;
  accuracy = 0;
}

moves::moves(string n, moveElement typing, categories typeOfAttack, int p,
       int pp, double accuracy) {
  name = n;
  this->typing = typing;
  this->typeOfAttack = typeOfAttack;
  power = p;
  powerPoint = pp;
  this->accuracy = accuracy;
}

string moves::getName() {
  return name;
}

moveElement moves::getTyping() {
  return typing;
}

categories moves::getTypeOfAttack() {
  return typeOfAttack;
}

int moves::getPower() {
  return power;
}

int moves::getPowerPoint() {
  return powerPoint;
}

double moves::getAccuracy() {
  return accuracy;
}

moves& moves::operator=(const moves &rhs) {
  this->name = rhs.name;
  this->typing = rhs.typing;
  this->typeOfAttack = rhs.typeOfAttack;
  this->power = rhs.power;
  this->powerPoint = rhs.powerPoint;
  this->accuracy = rhs.accuracy;
  return *this;
}

void moves::print() {
  cout << "Move: " << name << endl;

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

  cout << "Category: ";
  switch(typing) {
    case 0:
      cout << "Special" << endl;
      break;
    case 1:
      cout << "Physical" << endl;
      break;
    case 2:
      cout << "Status" << endl;
      break;
    default:
      break;
  }

  cout << "Power: " << power << endl;
  cout << "PP: " << powerPoint << endl;
  cout << "Accuracy: " << accuracy << endl;
}


moves::~moves() {

}