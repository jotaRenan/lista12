#include <iostream>
using namespace std;

main() {
  float massa;
  int m, s, h, total;
  cout << "Insira massa inicial(g): ";
  cin >> massa;
  for (total=0; massa > 0.5; total+=50, massa/=2.0) {}
  cout << total << endl;
  m=total/60;
  s=total%60;
  h=m/60;
  m=m%60;
  cout << h << "horas, " << m << "minutos, " << s << " segundos.";
}
