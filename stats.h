#ifndef STATS_H
#define STATS_H
#include <iostream>
#include <iomanip>
using namespace std;

class stats {
private:
  int hp;
  int atk;
  int def;
  int spatk;
  int spdef;
  int speed;

public:
  stats();
  stats(int h, int a, int d, int spa, int spd, int s);
  void sethp(int h);
  void setatk(int a);
  void setdef(int d);
  void setspatk(int s);
  void setspdef(int s);
  void setspeed(int s);
  void setstats(int h, int a, int d, int spa, int spd, int s);
  int gethp();
  int getatk();
  int getdef();
  int getspatk();
  int getspdef();
  int getspeed();
  void print();
};


#endif