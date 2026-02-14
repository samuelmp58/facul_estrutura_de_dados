#include <iomanip>
#include <iostream>
#include <limits>

int main() {
  float salario{0.0f};

  std::cout << "Digite o salario do funcionario: ";
  while (!(std::cin >> salario) || salario <= 0) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Digite um valor valido: ";
  }

  salario += salario < 1000    ? salario * 0.15
             : salario <= 1500 ? salario * 0.10
                               : salario * 0.05;

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "Novo salario: R$ " << salario << std::endl;

  return 0;
}
