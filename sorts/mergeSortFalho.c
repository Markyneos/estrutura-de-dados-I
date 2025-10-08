#include <stdio.h>
#include "../myFunctions/myFunctions.h"

// void merge(int *arr, int inicio, int meio, int fim) {
//   int tamEsquerda = meio - inicio + 1;
//   int tamDireita = meio - fim;
//   int esquerda[tamEsquerda];
//   int direita[tamDireita];
//   int indiceArrayOriginal = 0;
//   for (int i = inicio; i < tamEsquerda; i++) {
//     esquerda[i] = arr[indiceArrayOriginal];
//     indiceArrayOriginal++;
//   }
//   for (int i = meio + 1; i <= fim; i++) {
//     direita[i] = arr[indiceArrayOriginal];
//     indiceArrayOriginal++;
//   }
//   int i=0, j=0, k=0;
//   if (esquerda[i] < direita[j] && i <= tamEsquerda) {
//     arr[k] = esquerda[i];
//     i++;
//     k++;
//   }
//   else if (esquerda[i] > direita[j] && j <= tamDireita) {
//     arr[k] = direita[j];
//     j++;
//     k++;
//   }
//   else {
//
//   }
//
//
// }

void mergeSort(int *arr, int inicio, int fim) {
  if (inicio >= fim) {
    return;
  }
  int meio = (inicio + fim) / 2;
  mergeSort(arr, inicio, meio);
  mergeSort(arr, meio + 1, fim);
  merge(arr, inicio, meio, fim);

}

int main() {
  int arr[] = {38, 27, 43, 10};
  

  return 0; 
}
