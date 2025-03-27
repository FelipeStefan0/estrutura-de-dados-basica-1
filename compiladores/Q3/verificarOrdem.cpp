#include "verificarOrdem.h"

bool verificarOrdem(int arr[], int tamanho) {
    for (int i = 0;i < tamanho;i++) {
        if (i == 0) continue;
        else if (arr[i-1] > arr[i]) return false;
    }
    return true;
}
