#include <stdio.h>
#include <stdlib.h>

//Função das partes ordenadas (tô comentando pra ver se me ajuda)
void merge(int *arr, int inicio, int meio, int fim) {
  //Tamanho do vetor da esquerda e da direita
  int n1 = meio - inicio + 1;
  int n2 = fim - meio;

  //Vetores auxiliares
  int *L = (int *)malloc(n1 * sizeof(int));
  int *R = (int *)malloc(n2 * sizeof(int));

  //Copia as partes esquerda e direita para os vetores auxiliares
  for (int i = 0; i < n1; i++) {
    L[i] = arr[inicio + i];
  }
  for (int j = 0; j < n2; j++) {
    R[j] = arr[meio + 1 + j];
  }

  //Índices pra cada array (lado esquerdo, lado direito e original)
  int i = 0;
  int j = 0;
  int k = inicio;

  //Faz o merge
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    }
    else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  //Copiar o resto de L se sobrar
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }
  //Copiar o resto de R se sobrar
  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }

  //Libera a memória auxiliar (eu não sei fazer isso, admito que copiei essa parte)
  free(L);
  free(R);
}

void mergeSort(int *arr, int inicio, int fim) {
  if (inicio < fim) {
    int meio = inicio + (fim - inicio) / 2;

    mergeSort(arr, inicio, meio);
    mergeSort(arr, meio + 1, fim);

    merge(arr, inicio, meio, fim);
  }
}

int main() {
  int arr[] = {38, 27, 43, 3, 9, 82, 10};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Array original: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  mergeSort(arr, 0, n - 1);

  printf("Array ordenado: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
