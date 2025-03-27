#include <iostream>
#include <cassert>
#include "calcularMedia.h"

using namespace std;

int main(void) {

    const int TAMANHO = 4;
    int testesPassados = 0;

    int arr1[] = {10, 20, 30, 40};
    double media1 = calcularMedia(arr1, TAMANHO);
    cout << "Teste 1 - O valor esperado era 25 e retornou " << media1 << endl;
    if (media1 == 25) testesPassados++;
    // assert( calcularMedia(arr1, TAMANHO) == 25 );

    int arr2[] = {5, 15, 25, 35};
    double media2 = calcularMedia(arr2, TAMANHO);
    cout << "Teste 2 - O valor esperado era 20 e o retornou " << media2 << endl;
    if (media2 == 20) testesPassados++;
    // assert( calcularMedia(arr2, TAMANHO) == 20 );

    cout << "Passou em " << testesPassados << " de 2 testes" << endl;

    return 0;
}