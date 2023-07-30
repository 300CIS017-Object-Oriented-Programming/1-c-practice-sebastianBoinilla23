#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four (int a, int b, int c ,int d){
    int max = a;
    if (b > max){
        max = b;
    }
    if (c > max){
        max = c;
    }
    if (d > max){
        max = d;
    }
    return max;
}


int main() {
    int a, b, c, d;
    cout << "Ingrese el primero numero";
    cin >> a;
    cout << "Ingrese el segundo numero";
    cin >> b;
    cout << "Ingrese el tercero numero";
    cin >> c;
    cout << "Ingrese el cuarto numero";
    cin >> d;
    int ans = max_of_four(a, b, c, d);
    cout << ans;

    return 0;
}