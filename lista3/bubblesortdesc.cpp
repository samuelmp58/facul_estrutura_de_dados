#include <iostream>

using namespace std;

#define tam 5

void imprimeVetor(int vetor[]){
    cout<<endl;
    for(int i=0;i<tam;i++){
        cout<<" | "<<vetor[i]<<" | ";
    }
    cout<<endl;
}

void bubbleSort3(int x[]){
    int n=1;
    int troca=1;
    int aux=0;
    while(n<=tam&&troca==1){
        troca=0;
        for(int i=0;i<=3;i++){
            if(x[i]<x[i+1]){
                troca=1;
                aux=x[i];
                x[i]=x[i+1];
                x[i+1]=aux;
            }
        }
        n++;
    }
}

int main(){
    int x[tam];

    for(int i=0;i<tam;i++){
        cout<<"Digite o numero:"<<endl;
        cin>>x[i];
    }

    imprimeVetor(x);
    bubbleSort3(x);
    imprimeVetor(x);

    return 0;
}
