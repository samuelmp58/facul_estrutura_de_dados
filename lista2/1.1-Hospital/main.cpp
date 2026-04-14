#include <ios>
#include<iostream>
#include <limits>
#include<string>
#include<limits.h>

using namespace std;

struct Paciente{
    string nome;
    string sintoma;
    int idade;
};

struct Hospital{
    struct Paciente pacientes[100];
    int index=0;
    void inserir(){
        Paciente paciente;
        cout<<"Insira o nome do paciente:"<<endl;
        getline(cin, paciente.nome);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Insira a idade do paciente:"<<endl;
        cin>>paciente.idade;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Insira o sintoma do paciente:"<<endl;
        getline(cin, paciente.sintoma);
        pacientes[index++]=paciente;
    }
};

int main(){

    Hospital hospital;

    while (true){
        int opcao =0;
        cout<<"Digite 1 para inserir novo paciente e 2 para sair"<<endl;
        cin>>opcao;
        if (opcao==1){
            hospital.inserir();
        }
        else{
            break;
        }
    }


}
