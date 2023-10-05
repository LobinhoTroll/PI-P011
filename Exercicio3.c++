#include <iostream>
#include <array>

using namespace std;

float a,b,c,d;
float numeros[4];

void organizaNumeros(float numeros[]){

for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (numeros[i] < numeros[j]){
                swap(numeros[i],numeros[j]);
            }
        }
    }

}

void mostraNumeros(float numeros[]){

cout << "Array organizado:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "   " << numeros[i] << endl;
    }

}

int main(){
    cout << "Informe o primeiro numero: ";
    cin >> a;
    numeros[0] = a;
    cout << "Informe o segundo numero: ";
    cin >> b;
    numeros[1] = b;
    cout << "Informe o terceiro numero: ";
    cin >> c;
    numeros[2] = c;
    cout << "Informe o quarto numero: ";
    cin >> d;
    numeros[3] = d;
    cout << endl;   
    
    organizaNumeros(numeros);
    mostraNumeros(numeros);

    return 0;
}