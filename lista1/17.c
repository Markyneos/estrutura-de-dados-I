//Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
#include <stdio.h>

int main() {
  int arr[6];
  printf("Digite seis valores inteiros: ");
  scanf("%d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5]);
  for (int i = 0; i < 6; i++) {
    printf("%d\n", arr[i]);
  }

  return 0;
}
