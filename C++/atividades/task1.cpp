// 1 – Desenvolva um programa que o usuário necessita digitar a senha de um
// cofre, esta senha é numérica (987654), enquanto os valores digitais não forem
// corretos, o programa deverá pedir novamente informando que o valor está
// incorreto, assim que estiver correto, informar, cofre aberto.

#include <iostream>
#include <string>
using namespace std;

bool cofre(string senha, string senhaCerta);

int main() {

    string senhaCerta = "987654";
    string senha;
    bool retorno = true;

    while(retorno) {
        cout << "Digite sua senha: " << endl;
        cin >> senha;
        retorno = cofre(senha, senhaCerta);
    }

    return 0;
}

bool cofre(string senha, string senhaCerta) {
    if(senha == senhaCerta) {
        cout << "Acertou chefe" << endl;
        return false;
    }
    return true;
}