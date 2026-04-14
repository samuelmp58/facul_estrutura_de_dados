#include <iostream>

using namespace std;

void Dep(float &saldo,float &totalDep,int &qtdOp,float &maiorDep){
    float val;
    do{
        cout<<"Insira o valor a ser depositado:"<<endl;
        cin>>val;
    }while(val<0);
    saldo+=val;
    totalDep+=val;
    qtdOp++;
    if(val>maiorDep) maiorDep=val;
}

void Saq(float &saldo,float &totalSaq,int &qtdOp,float &maiorSaq){
    float val;
    do{
        cout<<"Insira o valor a ser sacado:"<<endl;
        cin>>val;
        if(val>saldo) cout<<"Saldo insuficiente"<<endl;
    }while(val<0||val>saldo);
    saldo-=val;
    totalSaq+=val;
    qtdOp++;
    if(val>maiorSaq) maiorSaq=val;
}

void Relatorio(float tDep,float tSaq,int nOp,float mDep,float mSaq,float saldo){
    cout<<"--- RELATORIO PARCIAL ---"<<endl;
    cout<<"Total depositado: "<<tDep<<endl;
    cout<<"Total sacado: "<<tSaq<<endl;
    cout<<"Numero de operacoes: "<<nOp<<endl;
    cout<<"Maior deposito: "<<mDep<<endl;
    cout<<"Maior saque: "<<mSaq<<endl;
    cout<<"Saldo atual: "<<saldo<<endl;
    cout<<"-------------------------"<<endl;
}

enum opcoes{
    Encerrar=0,
    Deposito=1,
    Saque=2,
    Consulta=3,
    Relatorio_Parcial=4
};

int main(){
    float saldoInicial=1000;
    float tDep=0,tSaq=0,mDep=0,mSaq=0;
    int nOp=0,opc=0;
    opcoes opcoesSele;

    while(true){
        do{
            cout<<"1 - Deposito"<<endl;
            cout<<"2 - Saque"<<endl;
            cout<<"3 - Consulta"<<endl;
            cout<<"4 - Relatorio_Parcial"<<endl;
            cout<<"0 - Encerrar"<<endl;
            cin>>opc;
        }while(opc<0||opc>4);

        opcoesSele=static_cast<opcoes>(opc);
        if(opcoesSele==Encerrar) break;

        switch(opcoesSele){
            case Deposito:Dep(saldoInicial,tDep,nOp,mDep);break;
            case Saque:Saq(saldoInicial,tSaq,nOp,mSaq);break;
            case Consulta:cout<<"Saldo atual: "<<saldoInicial<<endl;break;
            case Relatorio_Parcial:Relatorio(tDep,tSaq,nOp,mDep,mSaq,saldoInicial);break;
        }
    }
    return 0;
}
