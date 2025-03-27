#include <iostream>
#include "encontrarMaiorMenor.h"

using namespace std;

int main(void) {

    const int TAMANHO = 6; 
    int testesPassados = 0;

    int arr1[] = {10, 30, 4, 5, 15, 35};
    pair<int, int> resultado1 = encontrarMaiorMenor(arr1, TAMANHO);
    cout << "Teste 1 - Maior esperado: 35, menor esperado: 4, retornou: " << resultado1.first << " e " << resultado1.second << endl;
    if (resultado1.first == 35 && resultado1.second == 4) testesPassados++;

    int arr2[] = {50, 10, 60, 70, 80, 20};
    pair<int, int> resultado2 = encontrarMaiorMenor(arr2, TAMANHO);
    cout << "Teste 2 - Maior esperado: 80, menor esperado: 10, retornou: " << resultado2.first << " e " << resultado2.second << endl;
    if (resultado2.first == 80 && resultado2.second == 10) testesPassados++;

    cout << "Passou em " << testesPassados << " de 2 testes" << endl;

    return 0;
}