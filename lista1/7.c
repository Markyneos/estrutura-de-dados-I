//Faça um programa que receba um número inteiro e verifique se este número e par ou ímpar
#include <stdio.h>

int main() {
  int numero;
  printf("Digite um número inteiro: ");
  scanf("%d", &numero);
  numero % 2 == 0 ? printf("Seu número é par!\n") : printf("Seu número é impar!\n");

  return 0;
}
