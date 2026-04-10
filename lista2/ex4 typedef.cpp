#include <iostream>

using namespace std;

#define tam 5

typedef int VetorInteiros[tam];

int main(){
    setlocale(LC_ALL,"Portuguese");
    VetorInteiros numeros;

    cout<<"Digite 5 numeros inteiros:"<<endl;
    for(int i=0;i<tam;i++){
        cin>>numeros[i];
    }

    cout<<endl<<"Valores do Vetor:"<<endl;
    for(int i=0;i<tam;i++){
        cout<<numeros[i]<<" ";
    }
    cout<<endl;

    return 0;
}
