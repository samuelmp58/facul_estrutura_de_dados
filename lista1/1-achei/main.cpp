#include <iostream>

#define QNT 10

int main() {
  std::string nomes[10];

  for (auto i{0}; i < QNT; ++i) {
    std::cout << "Nome " << i + 1 << ": ";
    std::cin >> nomes[i];
  }

  auto procurarPessoa = [&nomes](std::string target) -> void {
    for (auto i{0}; i < QNT; ++i) {
      if (nomes[i] == target)
        std::cout << "ACHEI\n";
    }
  };

  std::string pessoa;
  std::cout << "Digite o nome de uma pessoa para ver se existe no array: ";
  std::cin >> pessoa;

  procurarPessoa(pessoa);
}
