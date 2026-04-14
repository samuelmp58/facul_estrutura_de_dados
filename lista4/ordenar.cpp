#include <iostream>

using namespace std;

#define tam 10

int main(){
    int x[tam];
    int aux=0;
    int menor,maior,contMenor=0,contMaior=0;

    for(int i=0;i<tam;i++){
        cout<<"Digite o numero "<<i+1<<":"<<endl;
        cin>>x[i];
    }

    for(int i=0;i<tam;i++){
        for(int j=0;j<tam-1;j++){
            if(x[j]>x[j+1]){
                aux=x[j];
                x[j]=x[j+1];
                x[j+1]=aux;
            }
        }
    }

    menor=x[0];
    maior=x[tam-1];

    for(int i=0;i<tam;i++){
        if(x[i]==menor) contMenor++;
        if(x[i]==maior) contMaior++;
    }

    cout<<"Menor numero: "<<menor<<" (aparece "<<contMenor<<" vezes)"<<endl;
    cout<<"Maior numero: "<<maior<<" (aparece "<<contMaior<<" vezes)"<<endl;

    return 0;
}
