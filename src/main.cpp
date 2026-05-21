#include <iostream>
#include "conversor.h"

using namespace std;

int main(){

    int a;

    cout << "Digite um numero decimal: ";
    cin >> a;


    cout << "decimal: " << a << endl;
    cout << "binario: " << decimalParaBinario(a) << endl;
    cout << "octal: " << decimalParaOctal(a) << endl;
    cout << "hexadecimal: " << decimalParaHex(a) << endl;

    return 0;
}