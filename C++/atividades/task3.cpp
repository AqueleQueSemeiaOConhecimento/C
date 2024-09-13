// 3 – Para o programa anterior, incremente o programa informando a quantidade
// de valores positivos, a quantidade de valores negativos e o percentual de valores
// negativos e positivos.

#include <iostream>
using namespace std;

void mediaAritmetica(float array[4]);

int main() {
    float numeros[4];

    for(int i = 0; i <= 3; i++) {
        cout << "Digite o numero " << i << endl;
        cin >> numeros[i];
    }

    mediaAritmetica(numeros);

    return 0;
}

void mediaAritmetica(float array[4]) {
    float positivos = 0;
    float negativos = 0;

    for(int i = 0; i <= 3; i++) {
        if(array[i] >= 0) {
            positivos++;
        }   else {
            negativos++;
        }
    }

    cout << "Positivos: " << positivos << " % = " << (positivos/4) * 100 << endl;
    cout << "Negativos: " << negativos << " % = " << (negativos/4) * 100 << endl;
    cout << (array[0] + array[1] + array[2] + array[3]) / 4;
}