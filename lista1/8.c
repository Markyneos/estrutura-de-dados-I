//Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
//como a diferença existente entre ambos.
#include <stdio.h>

int main() {
  int a, b;
  printf("Digite dois números inteiros: ");
  scanf("%d %d", &a, &b);
  int maior = a > b ? a : b;
  int menor = a < b ? a : b;
  printf("O maior número é: %d, e a diferença do menor é: %d\n", maior, maior - menor);

  return 0;
}
