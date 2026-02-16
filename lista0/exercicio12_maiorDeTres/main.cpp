#include <iostream>

int main() {
  int maior{0};

  for (int i = 0, n; i < 3; ++i) {
    std::cout << "Numero " << i + 1 << ": ";
    if (!(std::cin >> n))
      break;

    if (i == 0 || n > maior)
      maior = n;
  }

  std::cout << "O maior eh " << maior << std::endl;
}
