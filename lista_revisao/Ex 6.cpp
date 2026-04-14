#include <iostream>
#include <string>

using namespace std;

#define limite 50

struct Funcionario{
    int id;
    string nome;
    float salario;
    int idade;
    int tempoEmpresa;
};

void exibirFunc(Funcionario f){
    cout<<"ID: "<<f.id<<" | Nome: "<<f.nome<<" | Salario: "<<f.salario<<" | Idade: "<<f.idade<<" | Tempo: "<<f.tempoEmpresa<<endl;
}

int main(){
    int n;
    float somaSalario=0,mediaSalario,maiorS,menorS;
    int acimaM=0,idosos=0,experientes=0;
    Funcionario lista[limite];

    do{
        cout<<"Quantidade de funcionarios (5-50):"<<endl;
        cin>>n;
    }while(n<5||n>50);

    for(int i=0;i<n;i++){
        cout<<"ID:"<<endl; cin>>lista[i].id;
        cin.ignore();
        cout<<"Nome:"<<endl; getline(cin,lista[i].nome);
        cout<<"Salario:"<<endl; cin>>lista[i].salario;
        cout<<"Idade:"<<endl; cin>>lista[i].idade;
        cout<<"Tempo Empresa (anos):"<<endl; cin>>lista[i].tempoEmpresa;
        somaSalario+=lista[i].salario;
        if(i==0){maiorS=menorS=lista[i].salario;}
        if(lista[i].salario>maiorS) maiorS=lista[i].salario;
        if(lista[i].salario<menorS) menorS=lista[i].salario;
    }

    mediaSalario=somaSalario/n;
    for(int i=0;i<n;i++){
        if(lista[i].salario>mediaSalario) acimaM++;
        if(lista[i].idade>50) idosos++;
        if(lista[i].tempoEmpresa>10) experientes++;
    }

    cout<<endl<<"--- ANALISE GERAL ---"<<endl;
    cout<<"Media Salarial: "<<mediaSalario<<endl;
    cout<<"Maior: "<<maiorS<<" | Menor: "<<menorS<<endl;
    cout<<"Acima da media: "<<acimaM<<" | Idade > 50: "<<idosos<<" | Tempo > 10a: "<<experientes<<endl;

    cout<<endl<<"--- LISTA COM REAJUSTE ---"<<endl;
    for(int i=0;i<n;i++){
        float aumento=0;
        if(lista[i].tempoEmpresa<3) aumento+=0.05;
        else if(lista[i].tempoEmpresa<=10) aumento+=0.10;
        else aumento+=0.20;

        if(lista[i].idade>50) aumento+=0.05;
        if(lista[i].salario<mediaSalario) aumento+=0.05;

        lista[i].salario*=(1+aumento);
        exibirFunc(lista[i]);
    }

    return 0;
}
