// 4 - Faça um programa que imprima na tela os números de 1 a 20, um abaixo do
// outro. Depois modifique o programa para que ele mostre os números um ao lado
// do outro.

#include <iostream>

using namespace std;

int imprimeNumeros(int quantidade);

int main() {
    
    int quantidade;

    cout << "Digite a quantidade: " << endl;
    cin >> quantidade;
    imprimeNumeros(quantidade);

    return 0;
}

int imprimeNumeros(int quantidade) {
    for(int i = 0; i <= quantidade; i++) {
        cout << i << endl;
    }

    for(int i = 0; i <= quantidade; i++) {
        cout << i;
    }
}