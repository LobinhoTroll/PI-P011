#include <iostream>
#include <array>
#include <time.h>

using namespace std;

void preecheVetor(int vet[],int qtde){
    
    for(int i = 0; i < qtde ; i++){
        
        vet[i] = rand() % 10 + 1;
        
    }
    
}

int* multiplica_por_n(int *vet, int qtde, int n){
 
 int *vetMulti;
 
 vetMulti = (int*) malloc(qtde * sizeof(int));   
    
    for(int i = 0; i < qtde; i++){
        
        vetMulti[i] = vet[i] * n;
        
    }
    
    return vetMulti;
}

int qtde,n;

int main(){
    
    cout << "Informe o tamanho do vetor: ";
    cin >> qtde;
    cout << "Informe o multiplicador: ";
    cin >> n;
    int vet[qtde] = {};
    int *vetorfim;
    
    preecheVetor(vet,qtde);
    
    cout << "Vetor pre multiplicação:" << endl; 
    for(int i = 0; i < qtde; i++){
        cout << vet[i] << endl;
    }
    cout << endl;
    vetorfim = multiplica_por_n(vet,qtde,n);
    
    cout << "Vetor pós multiplicação:" << endl; 
    for(int i = 0; i < qtde; i++){
        cout << vetorfim[i] << endl;
    }
    return 0;
}
