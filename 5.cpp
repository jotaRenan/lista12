#include <iostream>
using namespace std;

main() {

  float popA=90000000, tcA=1.03, popB=200000000, tcB=1.015;
  int anos=0;
  for ( ; popB > popA ; popB*=tcB, popA*=tcA, anos++) {}
  cout << anos;
}
