#include "calcularMedia.h"

double calcularMedia(int arr[], int tamanho) {
    double media = 0;
    for (int i = 0;i < tamanho;i++) {
        media += arr[i];
    }
    media = media/tamanho;
    return media;
}