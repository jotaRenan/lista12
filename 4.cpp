#include <iostream>
#include <string.h>
using namespace std;

main() {
  int menor=0, entre=0, maior=0;
  float totCompra=0, totVenda=0, precoC, precoV;
  string nome;

  do {
    cout << "Digite nome (- para cancelar): ";
    cin >> nome;
    if (nome == "-")
      continue;
    cout << "Preco de compra: ";
    cin >> precoC;
    totCompra+=precoC;
    cout << "Preco de venda: ";
    cin >> precoV;
    totVenda+=precoV;
    if ( precoV-precoC < 0.1*precoC)
      menor++;
    else if( precoV-precoC <= 0.2*precoC)
          entre++;
        else
          maior++;
  } while (nome!="-");
  cout << "\n\nLucro < 10%:            " << menor << " mercadorias.";
  cout << "\n10% <= lucro <= 20%:    " << entre << " mercadorias.";
  cout << "\nlucro > 20%:            " << maior << " mercadorias.";
  cout << "\n\nValor total de "<< endl
     << "\tcompra: R$" << totCompra
     << "\n\tvenda: R$" << totVenda
     << "\n\tlucro: R$:" << totVenda-totCompra;
}
