#include <iostream>
#include "forca.h"

using namespace std;

int main(){
    Forca primeiro;

    string temp;
    char aux;
    int vidas =5;
    int acertos =0;

    cout <<"digite a palavra: ";
    cin >> temp;
    primeiro.setPalavra(temp);

    system("clear");
    primeiro.iniciarCopia();

    if(primeiro.getPalavra()=="0"){
        cout << "palara invalida\n";
    }else{
        do{
            cout <<"digite uma letra\n";
            cin >> aux;

            if(primeiro.encontrarLetra(aux) == true){
                primeiro.trocaDeLetras(aux, acertos);
                primeiro.mostrar();
                cout <<endl<< "chances: "<<vidas << endl;
                cout << "acertou " <<acertos<<" letras." << endl;
            }else{
                vidas --;
                primeiro.mostrar();
                cout <<endl <<"chances: "<< vidas << endl;
                cout <<"acertou " <<acertos<<" letras."<<endl;
            }

            if(acertos == primeiro.tamanho()){
                cout << "PARABENS VOCE DESCOBRIU A PALAVRA\n";
                break;
            }
        }while(vidas>0);
    }

    return 0;
}