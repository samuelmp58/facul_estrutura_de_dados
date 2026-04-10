#include <iostream>
#include <string>

using namespace std;

int main(){
    string prato;
    int qtd;
    float precoUnitario,precoTotal;

    while(true){
        cout<<"Preco do prato (digite 0 para encerrar):"<<endl;
        cin>>precoUnitario;

        if(precoUnitario<=0) break;

        cout<<"Nome do prato:"<<endl;
        cin>>prato;
        cout<<"Quantidade:"<<endl;
        cin>>qtd;

        precoTotal=qtd*precoUnitario;
        cout<<"Pedido: "<<prato<<" | Total: "<<precoTotal<<endl;
    }

    return 0;
}
