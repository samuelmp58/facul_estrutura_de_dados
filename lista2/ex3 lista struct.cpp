#include <iostream>
#include <string>

using namespace std;

int main(){
    string nome;
    float enredo,atuacao,efeitos,media;
    char continuar;

    do{
        cout<<"Nome do filme:"<<endl;
        cin>>nome;
        cout<<"Nota enredo:"<<endl;
        cin>>enredo;
        cout<<"Nota atuacao:"<<endl;
        cin>>atuacao;
        cout<<"Nota efeitos:"<<endl;
        cin>>efeitos;

        media=(enredo+atuacao+efeitos)/3;
        cout<<"Media do filme "<<nome<<": "<<media<<endl;

        cout<<"Deseja avaliar outro? (s/n):"<<endl;
        cin>>continuar;
    }while(continuar=='s'||continuar=='S');

    return 0;
}
