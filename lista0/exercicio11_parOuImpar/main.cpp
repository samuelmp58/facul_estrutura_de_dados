#include <iostream>
#include <limits>

int main() {
  int n{0};
  std::cout << "Insira um numero inteiro: ";
  while (!(std::cin >> n)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "\nInvalido. Insira um numero inteiro: ";
  }
  std::cout << n << ((n & 1) == 0 ? " eh par" : " eh impar");

  return 0;
}
