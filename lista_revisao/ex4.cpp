#include <iostream>
#include <vector>
#include <iomanip>

enum Opcoes{
    Deposito = 1,
    Saque = 2,
    Consulta = 3,
    Relatório_parcial = 4,
    Encerrar_sistema = 0
};



int main() {
    int opt;
    Opcoes opcao;
    float saldo = 1000f;
    
    void deposito = [&saldo](){
        float val;
        std::cout << "Digite o valor: ";
        if(val < 0){
            std::cout << "Valor inválido!";
            return;
        }
        saldo += val;
    }
    void saque = [](){
        
    }
    
    while(true){
        std::cout << "";
        std::cin >> opt;
        opcao = static_cast<Opcoes>(opt);
        
        switch(opt){
            case Encerrar_sistema: std::cout << "Encerrando..."; return 0; break;
            case Deposito: deposito(); break;
        }
    }
    return 0;
}
