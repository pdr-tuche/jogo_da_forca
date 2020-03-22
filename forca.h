#include <algorithm>
#include <iostream>
using namespace std;

class Forca{
    private:
        string palavra;
        string copia;
    public:
        void setPalavra(string a);
        string getPalavra();
        string getCopia();
        bool encontrarLetra(char a);
        void trocaDeLetras(char a, int &var);
        void mostrar();
        void iniciarCopia();
        int tamanho();
};