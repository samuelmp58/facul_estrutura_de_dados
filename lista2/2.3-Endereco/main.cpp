#include <iostream>
#include <string>

struct Endereco {
    std::string rua;
    std::string cidade;
    std::string cep;
};

typedef Endereco TipoEndereco;

int main() {
    TipoEndereco local;

    std::cout << "--- Cadastro de Endereco ---" << std::endl;

    std::cout << "Digite a rua: ";
    std::getline(std::cin >> std::ws, local.rua);

    std::cout << "Digite a cidade: ";
    std::getline(std::cin >> std::ws, local.cidade);

    std::cout << "Digite o CEP: ";
    std::getline(std::cin >> std::ws, local.cep);

    std::cout << "\n--- Endereco Registrado ---" << std::endl;
    std::cout << "Rua: " << local.rua << std::endl;
    std::cout << "Cidade: " << local.cidade << std::endl;
    std::cout << "CEP: " << local.cep << std::endl;

    return 0;
}
