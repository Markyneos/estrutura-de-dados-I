//Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
#include <stdio.h>

int main() {
  int numero;
  printf("Digite um número inteiro: ");
  scanf("%d", &numero);
  printf("O seu antecessor e seu sucessor são, respectivamente: %d e %d\n", numero - 1, numero + 1);

  return 0;
}
