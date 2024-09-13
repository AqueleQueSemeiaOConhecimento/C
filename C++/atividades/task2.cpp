// 2 - Desenvolver um programa que leia 4 números e calcule e escreva a média
// aritmética dos valores lidos.

#include <iostream>
using namespace std;

float mediaAritmetica(float array[4]);

int main() {
    float numeros[4];

    for(int i = 1; i <= 4; i++) {
        cout << "Digite o numero " << i << endl;
        cin >> numeros[i];
    }

    cout << mediaAritmetica(numeros) << endl;

    return 0;
}

float mediaAritmetica(float array[4]) {
    return (array[0] + array[1] + array[2] + array[3]) / 4;
}