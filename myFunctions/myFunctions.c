#include <stdio.h>

void imprimirVetor(int *v, int s) {
  printf("Vetor: |");
  for (int i = 0; i < s; i++) {
    printf("%d |", v[i]);
  }
}
