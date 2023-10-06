#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string caracteresIquais(string A,string B){
int tam1,tam2;
tam1 = A.size();
tam2 = B.size();
vector<int> C;

char letraS1;
char letraS2;

    for (int i = 0; i < tam1; i++)
    {
        letraS1 = A[i];
        for (int j = 0; j < tam2; j++){
            letraS2 = B[j];
            if (letraS1 == letraS2){
                 if (C.size() == 0 || count(C.begin(), C.end(), letraS1) == 0)
                {
                    C.push_back(letraS1);
                }
            }
            
        }
        
    }
    string comuns = "";
    for (char letra : C){
        comuns += letra;
    }
    
    return comuns;
}

string A;
string B;

int main (){

    //Lembar que no Linux o getline corta o primeiro caractere da string.
    cout << "Forneça a primeira string: ";
    cin.ignore();
    getline(cin,A);
    cout << "Forneça a segunda string: ";
    cin.ignore();
    getline(cin,B);
    cout << endl;

    cout << "Letras em comum: " << caracteresIquais(A,B) << endl;

    return 0;
}