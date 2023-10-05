#include <iostream>
#include <array>
#include <math.h>
#include <time.h>

using namespace std;

void preencheVetor(int vet1[], int tam1,int vet2[],int tam2){
srand(time(0));
    for (int i = 0; i < tam1; i++)
    {
        vet1[i] = rand() % 10 + 1;
    }
    
    for (int i = 0; i < tam2; i++)
    {
        vet2[i] = rand() % 10 + 1;
    }
}

int* intercala(int *vet1, int tam1, int *vet2, int tam2){
    int tam3 = tam1 + tam2;
    int vet3[tam3] = {};
    int pos1 = 0;
    int pos2 = 0;

    for (int i = 0; i < tam3; i++)
    {
        if ( i % 2 == 0){
            vet3[i] = vet1[pos1];    
            pos1++;
        }else{
            vet3[i] = vet1[pos2];    
            pos2++;
        }
        if (vet1[pos1] == NULL)
        {
            vet3[i] = vet2[pos2];
            pos2++;
        }
        if (vet2[pos2] == NULL)
        {
            vet3[i] = vet1[pos1];
            pos1++;
        }
    }
}

int tam1,tam2;

int main(){

    cout << "Informe o tamanho do primeiro vetor: ";
    cin >> tam1;
    int vet1[tam1] = {};
    cout << "Informe o tamanho do segundo vetor: ";
    cin >> tam2;
    int vet2[tam2] = {};

    preencheVetor(vet1,tam1,vet2,tam2);
    intercala(vet1,tam1,vet2,tam2);

}