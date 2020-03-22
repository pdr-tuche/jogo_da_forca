#include "forca.h"
using namespace std;

void Forca::setPalavra(string a){
    if(a.size()>=3)
        palavra = a;
    else
        palavra = "0";
}

string Forca::getPalavra(){
    return palavra;
}

string Forca::getCopia(){
    return copia;
}

bool Forca::encontrarLetra(char a){
    bool flag;
    for(int i=0;i<palavra.size();i++){
        if(palavra[i] == a){
            flag= true;
            break;
        }else{
            flag = false;
        }
    }
    return flag;
}

void Forca::trocaDeLetras(char a, int &var){
    for(int i=0; i<palavra.size();i++){
        if(palavra[i] == a){
            copia[i] = palavra[i];
            var++;
        }
    }
}

void Forca::mostrar(){
    for(int i=0;i<palavra.size();i++){
        cout << copia[i] << " ";
    }
    cout << endl;
}

void Forca ::iniciarCopia(){
    for(int i=0;i<palavra.size();i++){
        copia[i] ='_';
    }
}

int Forca::tamanho(){
    return palavra.size();
}