#include <iostream>
#include <string>

using namespace std;

string codifica(string texto,int tam){

    for (int i = 0; i < tam; i++){
        texto[i] = texto[i] + 12;
    }
    return texto;
}

string decodifica(string texto,int tam){

    for (int i = 0; i < tam; i++){
        texto[i] = texto[i] - 12;
    }
    return texto;
}


string texto;

int main(){
    // Lembrar que no linux corta a primeira letra da string quando usa o getline
    cout << "Informe uma string: ";
    cin.ignore();
    getline(cin,texto);
    int tam = texto.size();   

    cout << "String codificada: \n" << codifica(texto,tam) << endl;
    cout << endl;
    cout << "String pós decodificação: \n" << decodifica(codifica(texto,tam),tam) << endl;
}