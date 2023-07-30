#include <iostream>
using namespace std;

int main() {
    int numero = 0;
    cout << "Ingrese un numero:";
    cin >> numero;
    if (numero < 9) {
        cout << numero;
    }
    else{
        cout << "Greater than 9";
    }

    return 0;
}
