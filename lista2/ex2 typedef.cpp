#include <iostream>
#include <string>

using namespace std;

#define tam 10

struct Animal{
    string nome;
    string especie;
    int idade;
    float peso;
};

int main(){
    setlocale(LC_ALL,"Portuguese");
    Animal animais[tam];

    for(int i=0;i<tam;i++){
        cout<<"Animal "<<i+1<<":"<<endl;
        cout<<"Nome: ";
        getline(cin,animais[i].nome);
        cout<<"Especie: ";
        getline(cin,animais[i].especie);
        cout<<"Idade: ";
        cin>>animais[i].idade;
        cout<<"Peso: ";
        cin>>animais[i].peso;
        cin.ignore();
    }

    cout<<endl<<"Dados dos animais:"<<endl;
    for(int i=0;i<tam;i++){
        cout<<"Animal "<<i+1<<":"<<endl;
        cout<<"Nome: "<<animais[i].nome<<endl;
        cout<<"Especie: "<<animais[i].especie<<endl;
        cout<<"Idade: "<<animais[i].idade<<" anos"<<endl;
        cout<<"Peso: "<<animais[i].peso<<" kg"<<endl<<endl;
    }

    return 0;
}
