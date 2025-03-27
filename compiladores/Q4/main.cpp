#include <iostream>
#include "contarRepetidos.h"

using namespace std;

int main(void) {

    const int TAMANHO = 5; 
    int testesPassados = 0;

    int arr1[] = {1, 2, 1, 3, 1};
    int repetidos1 = contarRepetidos(arr1, TAMANHO);
    cout << "Teste 1 - O valor esperado era 1 e retornou " << repetidos1 << endl;
    if (repetidos1 == 1) testesPassados++;

    int arr2[] = {4, 5, 6, 7, 8};
    int repetidos2 = contarRepetidos(arr2, TAMANHO);
    cout << "Teste 2 - O valor esperado era 0 e retornou " << repetidos2 << endl;
    if (repetidos2 == 0) testesPassados++;

    int arr3[] = {4, 4, 4, 4, 4};
    int repetidos3 = contarRepetidos(arr3, TAMANHO);
    cout << "Teste 1 - O valor esperado era 1 e retornou " << repetidos3 << endl;
    if (repetidos3 == 1) testesPassados++;

    cout << "Passou em " << testesPassados << " de 3 testes" << endl;

    return 0;
}