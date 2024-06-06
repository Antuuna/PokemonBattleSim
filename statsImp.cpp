#include "stats.h"
#include <iostream>
using namespace std;

stats::stats() {
  hp = 0;
  atk = 0;
  def = 0;
  spatk = 0;
  spdef = 0;
  speed = 0;
}

stats::stats(int h, int a, int d, int spa, int spd, int s) {
  hp = h;
  atk = a;
  def = d;
  spatk = spa;
  spdef = spd;
  speed = s;
}

void stats::sethp(int h) {
  hp = h;
}

void stats::setatk(int a) {
  atk = a;
}

void stats::setdef(int d) {
  def = d;
}

void stats::setspatk(int s) {
  spatk = s;
}

void stats::setspdef(int s) {
  spdef = s;
}

void stats::setspeed(int s) {
  speed = s;
}

void stats::setstats(int h, int a, int d, int spa, int spd, int s) {
  hp = h;
  atk = a;
  def = d;
  spatk = spa;
  spdef = spd;
  speed = s;   
}

int stats::gethp() {
  return hp;
}

int stats::getatk() {
  return atk;
}

int stats::getdef() {
  return def;
}

int stats::getspatk() {
  return spatk;
}

int stats::getspdef() {
  return spdef;
}

int stats::getspeed() {
  return speed;
}

void stats::print() {
  cout << setw(6) << hp;
  cout << setw(6) << atk;
  cout << setw(6) << def;
  cout << setw(6) << spatk;
  cout << setw(6) << spdef;
  cout << setw(6) << speed;
}

stats::~stats() {
  
}