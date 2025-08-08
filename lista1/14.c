//Faça um programa que leia um número inteiro positivo par N e imprima todos os números
// pares de 0 até N em ordem decrescente.
#include <stdio.h>

int main() {
  int numero;
  printf("Escolha um número inteiro positivo par: ");
  scanf("%d", &numero);
  if (numero <= 0 || numero % 2 != 0) {
    printf("Deve-se escolher um número inteiro, positivo e par.\n");
    return 1;
  }
  while(numero >= 0) {
    if (numero % 2 == 0) {
      printf("%d\n", numero);
    }
    else if (numero == 0) {
      printf("0\n");
    }
    numero--;
  }

  return 0;
}
