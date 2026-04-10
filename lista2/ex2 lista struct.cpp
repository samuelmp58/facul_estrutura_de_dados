#include <ios>
#include<iostream>
#include <limits>
#include<string>
#include<limits.h>

using namespace std;

struct Livro{
    string titulo;
    string autor;
    int anoPubli;
};

struct Biblioteca{
    struct Livro livros[100];
    int index=0;
    bool inserir(){
        Livro livro;
        cout<<"Insira o titulo do livro:"<<endl;
        getline(cin, livro.titulo);
        if (livro.titulo=="Nosferatu"||livro.titulo=="nosferatu"){
            cout<<"Livro encontrado"<<endl;
            return true;
        }
        else{
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Insira o ano de publicação do livro:"<<endl;
        cin>>livro.anoPubli;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Insira o autor do livro:"<<endl;
        getline(cin, livro.autor);
        livros[index++]=livro;}
    }
};

int main(){

    Biblioteca biblioteca;

    while (true){
        int opcao =0;
        cout<<"Digite 1 para inserir novo livro e 2 para sair"<<endl;
        cin>>opcao;
        cin.ignore();
        if (opcao==1){
            if(biblioteca.inserir())
                break;
        }
        else{
            break;
        }
    }


}
