#include <utility>

using namespace std;

pair<int, int> encontrarMaiorMenor(int arr[], int tamanho) {
    int maior = arr[0];
    int menor = arr[0];

    for (int i = 0;i < tamanho;i++) {
        if (arr[i] > maior) maior = arr[i];
        if (arr[i] < menor) menor = arr[i];
    }

    return make_pair(maior, menor);
}