#include <iostream>
#include <string>

using namespace std;

struct Endereco{
    string rua;
    string cidade;
    string CEP;
};

int main(){
    setlocale(LC_ALL,"Portuguese");
    Endereco endereco;

    cout<<"Digite o nome da rua:"<<endl;
    getline(cin,endereco.rua);

    cout<<"Digite o nome da cidade:"<<endl;
    getline(cin,endereco.cidade);

    cout<<"Digite o CEP:"<<endl;
    getline(cin,endereco.CEP);

    cout<<endl<<"Informacoes do Endereco:"<<endl;
    cout<<"Rua: "<<endereco.rua<<endl;
    cout<<"Cidade: "<<endereco.cidade<<endl;
    cout<<"CEP: "<<endereco.CEP<<endl;

    return 0;
}
