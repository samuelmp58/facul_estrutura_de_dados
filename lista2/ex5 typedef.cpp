#include <iostream>

using namespace std;

enum Cores{
    VERMELHO,
    VERDE,
    AZUL
};

typedef Cores TipoCor;

int main(){
    setlocale(LC_ALL,"Portuguese");
    TipoCor corEscolhida;
    int escolha;

    cout<<"Escolha uma cor (0-Vermelho, 1-Verde, 2-Azul):"<<endl;
    cin>>escolha;

    if(escolha==0){
        corEscolhida=VERMELHO;
    }else if(escolha==1){
        corEscolhida=VERDE;
    }else if(escolha==2){
        corEscolhida=AZUL;
    }else{
        cout<<"Escolha invalida!"<<endl;
        return 1;
    }

    cout<<"Cor escolhida: ";
    switch(corEscolhida){
        case VERMELHO:cout<<"Vermelho";break;
        case VERDE:cout<<"Verde";break;
        case AZUL:cout<<"Azul";break;
    }
    cout<<endl;

    return 0;
}
