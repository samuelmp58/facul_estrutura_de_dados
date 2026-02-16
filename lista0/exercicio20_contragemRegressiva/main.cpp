#include <iostream>

int main() {
  int n{0};
  std::cout << "Digite um numero inteiro: ";
  std::cin >> n;

  for (int i = n; i >= 0; --i) {
    std::cout << i << (i == 0 ? "." : ", ");
  }

  return 0;
}
