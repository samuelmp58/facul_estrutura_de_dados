#include <iomanip>
#include <iostream>
#include <vector>

int main() {
  const int DIAS_ANO = 365;
  std::vector<double> temps(DIAS_ANO);

  std::cout << "Digite as " << DIAS_ANO << " temperaturas medias do ano:\n";
  for (int i = 0; i < DIAS_ANO; i++) {
    std::cin >> temps[i];
  }

  double menor = temps[0];
  for (double t : temps) {
    if (t < menor)
      menor = t;
  }

  double maior = temps[0];
  for (double t : temps) {
    if (t > maior)
      maior = t;
  }

  double soma = 0;
  for (double t : temps) {
    soma += t;
  }
  double media = soma / DIAS_ANO;

  int dias_abaixo = 0;
  for (double t : temps) {
    if (t < media)
      dias_abaixo++;
  }

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "\na) Menor temperatura: " << menor << "°C\n";
  std::cout << "b) Maior temperatura: " << maior << "°C\n";
  std::cout << "c) Media anual: " << media << "°C\n";
  std::cout << "d) Dias abaixo da media: " << dias_abaixo << std::endl;

  return 0;
}
