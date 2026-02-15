#include <iomanip>
#include <iostream>

int main() {
  int voto{0};
  int totalVotos{0};
  int cand1{0}, cand2{0}, nulos{0}, brancos{0};

  std::cout << "--- Sistema de Votacao ---\n";
  std::cout << "1, 2: Candidatos | 3: Nulo | 4: Branco | 0: Encerrar\n";

  while (true) {
    std::cout << "Informe o voto: ";
    std::cin >> voto;

    if (voto == 0)
      break;

    switch (voto) {
    case 1:
      cand1++;
      break;
    case 2:
      cand2++;
      break;
    case 3:
      nulos++;
      break;
    case 4:
      brancos++;
      break;
    default:
      std::cout << "Codigo invalido! Voto nao computado.\n";
      continue;
    }
    totalVotos++;
  }

  if (totalVotos > 0) {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n--- Resultado Final ---\n";
    std::cout << "Total de votos: " << totalVotos << "\n";
    std::cout << "Candidato 1: " << (cand1 * 100.0 / totalVotos) << "%\n";
    std::cout << "Candidato 2: " << (cand2 * 100.0 / totalVotos) << "%\n";
    std::cout << "Votos Nulos: " << (nulos * 100.0 / totalVotos) << "%\n";
    std::cout << "Votos Branco: " << (brancos * 100.0 / totalVotos) << "%\n";
  } else {
    std::cout << "\nNenhum voto foi registrado.\n";
  }

  return 0;
}
