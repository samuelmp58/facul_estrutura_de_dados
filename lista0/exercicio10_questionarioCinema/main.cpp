#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

enum Opcao { OTIMO = 1, BOM = 2, REGULAR = 3, RUIM = 4 };

int lerInteiro(std::string mensagem) {
  int valor{0};
  while (true) {
    std::cout << mensagem;
    if (std::cin >> valor) {
      return valor;
    } else {
      std::cout << "Erro: Por favor, digite apenas numeros inteiros."
                << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }
}

int main() {
  int totalPessoas{0};
  double somaIdades{0};
  int contadores[5] = {0};

  std::cout << "=== PESQUISA DE OPINIAO DO CINEMA ===" << std::endl;

  while (true) {
    int idade = lerInteiro("\nInforme a idade (negativa para encerrar): ");

    if (idade < 0) {
      std::cout << ">>> Idade inexistente informada. Finalizando..."
                << std::endl;
      break;
    }

    int escolha{lerInteiro("Opniao: [1]Otimo, [2]Bom, [3]Regular, [4]Ruim: ")};

    if (escolha >= OTIMO && escolha <= RUIM) {
      totalPessoas++;
      somaIdades += idade;
      contadores[escolha]++;
    } else {
      std::cout << "Opcao invalida! Esse registro nao sera contabilizado."
                << std::endl;
    }
  }

  if (totalPessoas > 0) {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n====================================" << std::endl;
    std::cout << "A. Total de pessoas: " << totalPessoas << std::endl;
    std::cout << "B. Media de idade: " << (somaIdades / totalPessoas) << " anos"
              << std::endl;
    std::cout << "C. Porcentagem de cada resposta:" << std::endl;

    std::string textos[]{"", "Otimo", "Bom", "Regular", "Ruim"};
    for (int i = 1; i <= 4; i++) {
      double porcentagem{(contadores[i] * 100.0) / totalPessoas};
      std::cout << "   - " << textos[i] << ": " << porcentagem << "%"
                << std::endl;
    }
    std::cout << "====================================" << std::endl;
  } else {
    std::cout << "\nNenhum dado valido foi inserido." << std::endl;
  }

  return 0;
}
