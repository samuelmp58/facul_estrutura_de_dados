#include <iostream>
#include <limits>

int main() {
  float peso{0.0f};
  float altura{0.0f};

  auto checkarIMC = [](float peso, float altura) -> std::string {
    auto imc = peso / (altura * altura);
    if (imc < 20.0f)
      return "Abaixo do peso";
    else if (imc < 25.0f)
      return "Peso normal";
    else
      return "Acima do peso";
  };

  std::cout << "Digite seu peso (kg): ";
  while (!(std::cin >> peso) || peso <= 0) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Peso inválido! Digite um número maior que zero: ";
  }

  std::cout << "Digite sua altura (m): ";
  while (!(std::cin >> altura) || altura <= 0) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Altura inválida! Digite um número maior que zero: ";
  }

  std::cout << checkarIMC(peso, altura) << std::endl;
  return 0;
}
// test
