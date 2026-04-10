#include <iostream>

int main()
{
    int idade{0};
    bool doencas, fumante;
    float renda{0.0f}, valorPlano{0.0f};
    
    std::cout << "Idade: ";
    std::cin >> idade;
    
    char input;
    std::cout << "Possui doenças? (s/n): ";
    std::cin >> input;
    doencas = (input == 's' || input == 'S');

    std::cout << "É fumante? (s/n): ";
    std::cin >> input;
    fumante = (input == 's' || input == 'S');

    std::cout << "Renda mensal: ";
    std::cin >> renda;
    
    // Regras
    if(idade <= 18){
        valorPlano = 100;
    }else if(idade <= 40){
        valorPlano = 180;
    }else if(idade <= 60){
        valorPlano = 300;
    }else{
        valorPlano = 500;
    }
    
    if(doencas){
        if( idade <= 40){
            valorPlano += valorPlano*0.3;

        }
        else{
            valorPlano += valorPlano*0.5;

        }
    }
    
    if(fumante){
        if(idade <= 50){
            valorPlano += valorPlano*0.2;
        }
        else{
        valorPlano += valorPlano*0.4;

        }
    }
    
    if(renda < 2000){
        valorPlano -= valorPlano*0.2;
    }else if(renda < 5000){
        valorPlano -= valorPlano*0.1;
    }
    
    std::cout << "Valor final do plano: " << valorPlano;
    return 0;
}

