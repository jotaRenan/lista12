#include <iostream>
using namespace std;

main() {
  float maior=5, menor=100, mediaF, totalF=0, altura;
  int nHomens=0, nMulheres=0;
  char sexo;

  for (int i=3; i--; ) {
    cout << "Digite sexo(f/m): ";
    cin >> sexo;
    cout << "Digite altura(cm): ";
    cin >> altura;
    if (sexo == 'f') {
      nMulheres++;
      totalF+=altura;
    }
    else {
      nHomens++;
    }
    if (altura > maior) {
      maior=altura;
    }
    else if (altura < menor) {
      menor=altura;
    }
  }
  mediaF = totalF/nMulheres;

  cout << "Maior: " << maior << '\t' << "Menor: " << menor << endl
       << "Media altura fem.:" << mediaF << '\t' << "Homens: " << nHomens;
}
