#include <iomanip>
#include <iostream>

int main() {
  double precoEtiqueta{0.0};
  int codigoPagamento{0};

  std::cout << "Digite o preco do produto: ";
  std::cin >> precoEtiqueta;

  std::cout << "Escolha a condicao de pagamento:\n"
            << "1 - A vista (Dinheiro/Cheque): 10% desconto\n"
            << "2 - A vista (Cartao): 5% desconto\n"
            << "3 - Em 2x: Preco normal\n"
            << "4 - Em 3x: 10% de juros\n"
            << "Opcao: ";
  std::cin >> codigoPagamento;

  double valorFinal{precoEtiqueta};

  switch (codigoPagamento) {
  case 1:
    valorFinal -= precoEtiqueta * 0.10;
    break;
  case 2:
    valorFinal -= precoEtiqueta * 0.05;
    break;
  case 3:
    break;
  case 4:
    valorFinal += precoEtiqueta * 0.10;
    break;
  default:
    std::cout << "Codigo invalido! Usando preco normal.\n";
    break;
  }

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "\nValor final a pagar: R$ " << valorFinal << std::endl;

  return 0;
}
