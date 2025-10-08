// Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que
// seja a
//  intersecção entre os 2 vetores anteriores, ou seja, que contém apenas os
//  números que estão em ambos os vetores. Não deve conter números repetidos.
#include <stdio.h>

int main() {
  int vet1[] = {3, 8, 15, 22, 31, 42, 56, 60, 77, 91};
  int vet2[] = {5, 15, 22, 33, 42, 50, 66, 70, 77, 99};
  int contadorIguais = 0;
  int inter[10];
  int indice = 0;

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (vet1[i] == vet2[j]) {
        contadorIguais++;
        inter[indice] = vet1[i];
        indice++;
      }
    }
  }

  printf("Interseção dos vetores: \n");
  for (int i = 0; i < contadorIguais; i++) {
    printf("%d\n", inter[i]);
  }

  return 0;
}
