//Leia um vetor de 10 posições, depois contar e escrever quantos valores pares ele possui.
#include <stdio.h>

int main() {
  int vetor[10];
  int contaPares = 0;
  printf("Digite um valor inteiro: ");
  scanf("%d", &vetor[0]);
  if (vetor[0] % 2 == 0) {
    contaPares++;
  }
  for (int i = 1; i < 10; i++) {
    printf("Digite outro valor inteiro: ");
    scanf("%d", &vetor[i]);
    if (vetor[i] % 2 == 0) {
      contaPares++;
    }
  }
  printf("Conta de números pares: %d\n", contaPares);

  return 0;
}
