#include <iostream>

using namespace std;

void calcula(int &x, int &y){

int sum = x + y;
int sub = x - y;

x = sum;
y = sub;

}

int x,y;

int main(){

    cout << "Informe o primeiro numero: ";
    cin >> x;
    cout << "Informe o segundo numero: ";
    cin >> y;
    cout << endl;

    calcula(x,y);

    cout << x << "  " << y << endl;
}