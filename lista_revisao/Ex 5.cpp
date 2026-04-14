#include <iostream>

using namespace std;

#define tam_max 50

void analisarDados(int v[],int n){
    int par=0,impar=0,pos=0,neg=0,zero=0;
    int m2=0,m3=0,m5=0;
    int maior,menor;
    float soma=0;

    maior=menor=v[0];
    for(int i=0;i<n;i++){
        if(v[i]%2==0) par++; else impar++;
        if(v[i]>0) pos++; else if(v[i]<0) neg++; else zero++;
        if(v[i]%2==0) m2++;
        if(v[i]%3==0) m3++;
        if(v[i]%5==0) m5++;
        if(v[i]>maior) maior=v[i];
        if(v[i]<menor) menor=v[i];
        soma+=v[i];
    }

    cout<<"Pares: "<<par<<" | Impares: "<<impar<<endl;
    cout<<"Positivos: "<<pos<<" | Negativos: "<<neg<<" | Zeros: "<<zero<<endl;
    cout<<"Multiplos -> 2: "<<m2<<" | 3: "<<m3<<" | 5: "<<m5<<endl;
    cout<<"Maior: "<<maior<<" | Menor: "<<menor<<endl;
    cout<<"Media: "<<soma/n<<endl;
}

void reorganizar(int v[],int n){
    int v2[tam_max];
    int k=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0) v2[k++]=v[i];
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]%2!=0) v2[k++]=v[i];
    }
    cout<<"Vetor reorganizado:"<<endl;
    for(int i=0;i<n;i++) cout<<v2[i]<<" ";
    cout<<endl;
}

void frequencia(int v[],int n){
    int repetido=0,maisRepetido=v[0],maxFreq=0;
    for(int i=0;i<n;i++){
        int cont=0;
        for(int j=0;j<n;j++){
            if(v[i]==v[j]) cont++;
        }
        if(cont>1) repetido=1;
        if(cont>maxFreq){
            maxFreq=cont;
            maisRepetido=v[i];
        }
    }
    if(repetido) cout<<"Existem numeros repetidos."<<endl;
    cout<<"Numero que mais se repete: "<<maisRepetido<<" ("<<maxFreq<<" vezes)"<<endl;
}

int main(){
    int n,vet[tam_max];
    do{
        cout<<"Digite N (10-50):"<<endl;
        cin>>n;
    }while(n<10||n>50);

    for(int i=0;i<n;i++){
        cout<<"Valor "<<i+1<<":"<<endl;
        cin>>vet[i];
    }

    analisarDados(vet,n);
    reorganizar(vet,n);
    frequencia(vet,n);

    return 0;
}
