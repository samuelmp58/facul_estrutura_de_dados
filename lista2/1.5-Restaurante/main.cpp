#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

struct Pedido {
    std::string nomePrato;
    int quantidade;
    float precoUnitario;
    float precoTotal;
};

int main() {
    std::vector<Pedido> listaPedidos;
    float precoEntrada;

    std::cout << "--- Sistema de Registro de Pedidos ---" << std::endl;
    std::cout << "(Para encerrar o programa, digite 0 no preco)" << std::endl;

    while (true) {
        std::cout << "\nInforme o preco unitario: ";
        std::cin >> precoEntrada;

        if (precoEntrada <= 0) {
            break;
        }

        Pedido p;
        p.precoUnitario = precoEntrada;

        std::cout << "Nome do prato: ";
        std::getline(std::cin >> std::ws, p.nomePrato);

        std::cout << "Quantidade: ";
        std::cin >> p.quantidade;

        p.precoTotal = p.precoUnitario * p.quantidade;

        listaPedidos.push_back(p);
    }

    if (listaPedidos.empty()) {
        std::cout << "\nNenhum pedido foi registrado." << std::endl;
    } else {
        float somaTotalGeral = 0;
        
        std::cout << "\n================ RESUMO DO PEDIDO ================" << std::endl;
        std::cout << std::left << std::setw(20) << "PRATO" 
                  << std::setw(10) << "QTD" 
                  << std::setw(15) << "TOTAL ITEM" << std::endl;
        std::cout << "--------------------------------------------------" << std::endl;

        for (const auto& item : listaPedidos) {
            std::cout << std::fixed << std::setprecision(2);
            std::cout << std::left << std::setw(20) << item.nomePrato 
                      << std::setw(10) << item.quantidade 
                      << "R$ " << item.precoTotal << std::endl;
            
            somaTotalGeral += item.precoTotal;
        }

        std::cout << "--------------------------------------------------" << std::endl;
        std::cout << "VALOR TOTAL DA CONTA: R$ " << somaTotalGeral << std::endl;
        std::cout << "==================================================" << std::endl;
    }

    return 0;
}
