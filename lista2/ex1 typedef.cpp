#include <iostream>
#include <string>

using namespace std;

#define tam 5

struct Pessoa{
    string nome;
    string endereco;
    string CPF;
    int idade;
};

int main(){
    setlocale(LC_ALL,"Portuguese");
    Pessoa pessoas[tam];

    for(int i=0;i<tam;i++){
        cout<<"Digite o nome da pessoa "<<i+1<<":"<<endl;
        getline(cin,pessoas[i].nome);

        cout<<"Digite o endereco da pessoa "<<i+1<<":"<<endl;
        getline(cin,pessoas[i].endereco);

        cout<<"Digite o CPF da pessoa "<<i+1<<":"<<endl;
        cin>>pessoas[i].CPF;

        cout<<"Digite a idade da pessoa "<<i+1<<":"<<endl;
        cin>>pessoas[i].idade;

        cin.ignore();
    }

    cout<<endl<<"Informacoes das pessoas:"<<endl;
    for(int i=0;i<tam;i++){
        cout<<"Pessoa "<<i+1<<":"<<endl;
        cout<<"Nome: "<<pessoas[i].nome<<endl;
        cout<<"Endereco: "<<pessoas[i].endereco<<endl;
        cout<<"CPF: "<<pessoas[i].CPF<<endl;
        cout<<"Idade: "<<pessoas[i].idade<<" anos"<<endl<<endl;
    }

    return 0;
}
