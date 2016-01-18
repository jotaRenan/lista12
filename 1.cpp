#include <iostream>
using namespace std;

main() {
  int idade, total=0, entradas=0;
  do {
    cout << "Digite idade: ";
    cin >> idade;
    total+=idade;
    entradas++;
  } while (idade);
  cout << "Media de idades: " << float (total/(entradas-1));
}
