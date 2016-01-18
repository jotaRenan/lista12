#include <iostream>
using namespace std;

float converte(float fare) {
  float celcius;
  celcius = ((fare-32)*5)/9;
  return celcius;
}

main() {
  for (float i=50; i<=150; i++) {
    cout << i << " F = " << converte(i) << " Celcius\n";
  }
}
