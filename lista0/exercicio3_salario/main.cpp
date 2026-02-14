#include <iostream>
#include <iomanip> 

int main() {
    double horasTrabalhadas{0.0};
    double salarioMinimo{0.0};
    constexpr double TAXA_IMPOSTO{0.03};

    std::cout << "Digite o numero de horas trabalhadas: ";
    std::cin >> horasTrabalhadas;
    std::cout << "Digite o valor do salario minimo: ";
    std::cin >> salarioMinimo;

    double valorHora{salarioMinimo / 2.0};

    double salarioBruto{horasTrabalhadas * valorHora};

    double imposto{salarioBruto * TAXA_IMPOSTO};

    double salarioReceber{salarioBruto - imposto};

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n---------- Demonstrativo ----------" << std::endl;
    std::cout << "Valor da hora:    R$ " << valorHora << std::endl;
    std::cout << "Salario Bruto:    R$ " << salarioBruto << std::endl;
    std::cout << "\033[1;31mImposto (3%):     R$ " << imposto << "\033[0m" << std::endl;
    std::cout << "\033[1;32mSalario Liquido:  R$ " << salarioReceber << "\033[0m" << std::endl;
    std::cout << "-----------------------------------" << std::endl;

    return 0;
}
