#include <iostream>

int main() {
  float nota{0.0f};

  std::cout << "Digite a nota (0 a 10): ";
  if (!(std::cin >> nota) || nota < 0 || nota > 10) {
    std::cout << "Entrada inválida! Digite um número entre 0 e 10."
              << std::endl;
    return 1;
  }

  std::cout << "Status: ";
  if (nota >= 6.0) {
    std::cout << "\033[32mAprovado\033[33m" << std::endl;
  } else if (nota >= 4.0) {
    std::cout << "\033[33mRecuperacao\033[33m" << std::endl;
  } else {
    std::cout << "\033[31mReprovado\033[33m" << std::endl;
  }

  return 0;
}
