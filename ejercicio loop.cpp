#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    int i = 0;
    int j = 0;
    cout <<"Ingrese el primer numero";
    cin >> a;
    cout <<"Ingrese el segundo numero";
    cin >> b;
    for (i=0; i<a; i++){
        cout << i << "\n";
        for (j=0; j<b; j++){
            cout << j << "\n";
        }
    }
    if (a / 2 == 0){
        cout << "even \n";
    }
    else{
        cout << "odd \n";
    }
    if (b / 2 ==0){
        cout << "even\n";
    }
    else {
        cout << "odd";
    }

    return 0;
}