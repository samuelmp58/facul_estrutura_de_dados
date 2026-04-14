#include <iostream>
#include <string>
#include <vector>

typedef struct {
    std::string nome;
    std::string endereco;
    std::string cpf;
    int idade;
} Pessoa;

int main() {
    Pessoa grupo[5];

    std::cout << "--- Cadastro de 5 Pessoas ---" << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << "\nDados da pessoa " << i + 1 << ":" << std::endl;
        
        std::cout << "Nome: ";
        std::getline(std::cin >> std::ws, grupo[i].nome);

        std::cout << "Endereco: ";
        std::getline(std::cin >> std::ws, grupo[i].endereco);

        std::cout << "CPF: ";
        std::cin >> grupo[i].cpf;

        std::cout << "Idade: ";
        std::cin >> grupo[i].idade;
    }

    std::cout << "\n--- Relatorio de Cadastro ---" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Pessoa " << i + 1 << ": " << grupo[i].nome 
                  << " | CPF: " << grupo[i].cpf 
                  << " | Idade: " << grupo[i].idade << std::endl;
    }

    return 0;
}
