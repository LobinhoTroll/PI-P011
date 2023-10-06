#include <iostream>
#include <string>

using namespace std;

void Devolve(string texto,char letra,int tam,int *NumLetras,int indices[]){

    for (int i = 0; i < tam; i++)
    {
        if (texto[i] == letra)
        {
            indices[i] = 1;
            (*NumLetras)++; 
        }
        
    }
}

string texto;
char letra;


int main(){

    cout << "Informe uma string: ";
    cin >> texto;
    cout << "Agora informe a letra ao qual verificar: ";
    cin >> letra;
    int tam = texto.size();
    int indices[tam] = {},qtde = 0;
    cout << endl;

    Devolve(texto,letra,tam,&qtde,indices);

    cout << "A string fornecida foi: " << texto << " e os indices onde é encontrada são: ";
    for (int i = 0; i < tam; i++){ 
        if (indices[i] == 1)
        {
            cout << "[" << i << "]";
        }    
    } 
    cout << " e a quantidade de vezes que aparece é : " << qtde << endl;
    
    return 0;
}