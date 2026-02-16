#include <iostream>

int main() {
  int soma{0};
  while (true) {
    int n{0};
    std::cout << "Digite um numero inteiro: ";
    if (!(std::cin >> n) || n < 0)
      break;
    soma += n;
  }

  std::cout << "A soma eh " << soma << std::endl;
  return 0;
}
