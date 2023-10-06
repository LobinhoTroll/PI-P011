#include <iostream>
#include <array>
#include <time.h>

using namespace std;

void preecheVetor(int vet[],int qtde){
    
    for(int i = 0; i < qtde ; i++){
        
        vet[i] = rand() % 100 + 1;
        
    }
    
}

int conta_primos (int *vet, int qtde){

int contador = 0;    
int verificador = 0;    
    for(int i = 0; i < qtde; i++){
        
        
        for(int j = 2; j <= vet[i] / 2 ; j++){
            
            if(vet[i] % j == 0)
            verificador++;    
        }
        if(verificador == 0){
            contador++;
        }
        verificador = 0;
        
    }
    
    return contador;
}

int qtde,n;

int main(){
    
    cout << "Informe o tamanho do vetor: ";
    cin >> qtde;
    int vet[qtde] = {};
    preecheVetor(vet,qtde);
    
    cout << "A " << conta_primos(vet,qtde) << " numeros primos no vetor.";
    return 0;
}
