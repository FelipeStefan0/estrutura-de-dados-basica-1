#include <iostream>
using namespace std;

bool ehPrimo(int N) {
    for (int i = 1;i <= N;i++) {
        if (N == 1) return false;
        else if (N % i == 0){
            if (i != 1 && i != N) {
                return false;
            }
        }
    }
    return true;
}

int contarPrimosAteN(int N) {
    int counter = 0;
    for (int i = 1;i <= N;i++) {
        if (ehPrimo(i) == true) counter++;
    }
    return counter;
}

int main () {
    int testesPassados = 0;

    cout << "Teste 1: O resultado esperado é 4 e o valor retornado foi " << contarPrimosAteN(10) << endl;
    if (contarPrimosAteN(10) == 4) testesPassados++;

    cout << "Teste 2: O resultado esperado é 8 e o valor retornado foi " << contarPrimosAteN(20) << endl;
    if (contarPrimosAteN(20) == 8) testesPassados++;

    cout << "Teste 3: O resultado esperado é 3 e o valor retornado foi " << contarPrimosAteN(5) << endl;
    if (contarPrimosAteN(5) == 3) testesPassados++;

    cout << "Teste 4: O resultado esperado é 0 e o valor retornado foi " << contarPrimosAteN(1) << endl;
    if (contarPrimosAteN(1) == 0) testesPassados++;

    cout << "Teste 5: O resultado esperado é 25 e o valor retornado foi " << contarPrimosAteN(100) << endl;
    if (contarPrimosAteN(100) == 25) testesPassados++;

    cout << "Sua implementação passou em " << testesPassados << " de 5 testes." << endl;

    return 0;
}