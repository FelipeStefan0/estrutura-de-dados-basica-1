#include <iostream>
using namespace std; 

bool ehPrimo (int numero) {
    for (int i = 1;i <= numero;i++) {
        if (numero == 1) return false;
        else if (numero % i == 0) {
            if ((i != 1) && (i != numero))
                return false;
        }
    }
    return true;
}

int main () {
    int testesPassados = 0;

    cout << "Teste 1: O resultado esperado é 1 e o valor retornado foi " << ehPrimo(97) << endl;
    if (ehPrimo(97) == true) testesPassados++;

    cout << "Teste 2: O resultado esperado é 0 e o valor retornardo foi " << ehPrimo(10) << endl;
    if (ehPrimo(10) == false) testesPassados++;

    cout << "Teste 3: O resultado esperado é 1 e o valor retornardo foi " << ehPrimo(13) << endl;
    if (ehPrimo(13) == true) testesPassados++;

    cout << "Teste 4: O resultado esperado é 0 e o valor retornado foi " << ehPrimo (1) << endl;
    if (ehPrimo(1) == false) testesPassados++;

    cout << "Teste 5: O resultado esprado é 1 e o valor retornado foi " << ehPrimo(17) << endl;
    if (ehPrimo(17) == true) testesPassados++;

    cout << "Sua implementação passou em " << testesPassados << " de 5 testes." << endl;

    return 0;
}