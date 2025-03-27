#include <iostream>
#include "verificarOrdem.h"

using namespace std;

int main(void) {

    const int TAMANHO = 4; 
    int testesPassados = 0;

    int arr1[] = {1, 2, 3, 4};
    bool ordenado1 = verificarOrdem(arr1, TAMANHO);
    cout << "Teste 1 - Esperado: true, retornou: " << (ordenado1 ? "true" : "false") << endl;
    if (ordenado1 == true) testesPassados++;

    int arr2[] = {1, 2, 4, 3};
    bool ordenado2 = verificarOrdem(arr2, TAMANHO);
    cout << "Teste 2 - Esperado: false, retornou: " << (ordenado2 ? "true" : "false") << endl;
    if (ordenado2 == false) testesPassados++;

    cout << "Passou em " << testesPassados << " de 2 testes" << endl;

    return 0;
}