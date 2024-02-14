#include "pokemon.h"
#include "stats.h"

using namespace std;

int main() {
  pokemon Charmeleon("Charmeleon", Fire);
  Charmeleon.base.setstats(58, 64, 58, 80, 65, 80);
  Charmeleon.randomizerIV();
  Charmeleon.print();

  return 0;
}