#ifndef MOVES_H
#define MOVES_H
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

enum moveElement {N, F, W, G};
enum categories {Special, Physical, Status};

class moves {
private:
  string name;
  moveElement typing;
  categories typeOfAttack;
  int power;
  int powerPoint;
  int accuracy;

public:
  moves();
  moves(string n, moveElement typing, categories typeOfAttack, int p,
       int pp, double accuracy);
  string getName();
  moveElement getTyping();
  categories getTypeOfAttack();
  int getPower();
  int getPowerPoint();
  double getAccuracy();
  moves& operator=(const moves &rhs);
  void print();
  ~moves();

};

#endif