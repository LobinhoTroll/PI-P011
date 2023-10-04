#include <iostream>
#include <array>
#include<cstdlib>

using namespace std;

void preencherVetor(int n,int vetor[]){
    srand(time(0));
    
    for(int i = 0 ; i < n ; i++){
        vetor[i] = rand() % 100 + 1;
    }
}

void maxmin(int vetor[],int n,int &maximo, int &minimo){
    
    maximo = vetor[0];
    minimo = vetor[0];
        
        
        for(int i = 0 ; i < n ; i++){
            if(maximo < vetor[i]){    
            maximo = vetor[i];
            }
            if(minimo > vetor[i]){    
            minimo = vetor[i];
            }
        }
}

int n;
int maximo;
int minimo;

int main(){
    cout << "Forneça o tamanho do vetor: ";
    cin >> n;
    int vetor[n] = {};
    int i = 0;
    
    //gera o vetor
    preencherVetor(n,vetor);
    //verifica o maior e menor valor
    maxmin(vetor,n,maximo,minimo);    
    cout << "O valor maximo do vetor é " << maximo << " e o valor minimo é " << minimo;
  return 0;  
}
