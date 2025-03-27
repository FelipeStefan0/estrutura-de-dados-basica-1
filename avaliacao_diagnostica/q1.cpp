#include <iostream> // O que é isso?
using namespace std; // O que é isso?

bool ehPar(int numero) {
    return numero % 2 == 0;
}

int main () {
    int testePassados = 0;

    // O que é isso cout << endl?
    cout << "Teste 1: O resultado esperado é 1 e o valor retornado foi " << ehPar(4) << endl;
    if (ehPar(4) == true) testePassados++;

    cout << "Teste 2: O resultado esperado é 0 e o valor retornado foi " << ehPar(7) << endl;
    if (ehPar(7) == false) testePassados++;

    cout << "Teste 3: O resultado esperado é 1 e o valor retornado foi " << ehPar(0) << endl;
    if (ehPar(0) == true) testePassados++;

    cout << "Teste 4: O resultado esperado é 0 e o valor retornado foi " << ehPar(-5) << endl;
    if (ehPar(-5) == false) testePassados++;

    cout << "Teste 5: O resultado esperado é 1 e o valor retornado foi " << ehPar(-8) << endl;
    if (ehPar(-8) == true) testePassados++;

    cout << "Sua implementação passou em " << testePassados << " de 5 testes." << endl;

    return 0;
}