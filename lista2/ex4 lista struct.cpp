#include <iostream>
#include <string>

using namespace std;

#define tam 100

int main(){
    string nomes[tam];
    float notas[tam];
    string status[tam];
    char continuar;
    int i=0;

    do{
        cout<<"Nome do estudante:"<<endl;
        cin>>nomes[i];
        cout<<"Nota final:"<<endl;
        cin>>notas[i];

        if(notas[i]>=6){
            status[i]="Aprovado";
        }else{
            status[i]="Reprovado";
        }

        i++;
        cout<<"Inserir outro estudante? (s/n):"<<endl;
        cin>>continuar;
    }while((continuar=='s'||continuar=='S')&&i<tam);

    for(int j=0;j<i;j++){
        cout<<"Estudante: "<<nomes[j]<<" | Nota: "<<notas[j]<<" | Status: "<<status[j]<<endl;
    }

    return 0;
}
