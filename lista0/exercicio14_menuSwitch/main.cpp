#include <iostream>

enum Opcoes { JOGAR = 1, CONFIGURACOES, SAIR };

int main() {
  int escolha{0};

  const std::string CIANO = "\033[1;36m";
  const std::string VERMELHO = "\033[1;31m";
  const std::string VERDE = "\033[1;32m";
  const std::string RESET = "\033[0m";

  do {
    std::cout << "\n=== MENU PRINCIPAL ===\n";
    std::cout << (escolha == JOGAR ? " -> " : "    ") << "1. Jogar\n";
    std::cout << (escolha == CONFIGURACOES ? " -> " : "    ")
              << "2. Configuracoes\n";
    std::cout << (escolha == SAIR ? " -> " : "    ") << "3. Sair\n";
    std::cout << "Escolha uma opcao: ";

    if (!(std::cin >> escolha)) {
      std::cout << VERMELHO << "Entrada invalida!" << RESET << std::endl;
      std::cin.clear();
      std::cin.ignore(1000, '\n');
      continue;
    }

    switch (static_cast<Opcoes>(escolha)) {
    case JOGAR:
      std::cout << VERDE << "Iniciando o jogo..." << RESET << std::endl;
      break;
    case CONFIGURACOES:
      std::cout << CIANO << "Abrindo configuracoes..." << RESET << std::endl;
      break;
    case SAIR:
      std::cout << VERMELHO << "Saindo do programa." << RESET << std::endl;
      break;
    default:
      std::cout << "Opcao invalida.." << std::endl;
      escolha = 0;
      break;
    }

  } while (escolha != SAIR);

  return 0;
}
