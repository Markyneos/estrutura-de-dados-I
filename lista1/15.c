/*Elabore um programa que faça leitura de vários números inteiros, até que se digite um
número negativo. O programa tem que retornar o maior e o menor número lido.*/
#include <stdio.h>

int main() {
  int numbers[] = {0, 2147483647};
  int temp = 0;
  while(temp >= 0) {
    printf("Digite um número inteiro: ");
    scanf("%d", &temp);
    if (temp < 0 && numbers[1] == 2147483647) {
      numbers[1] = 0;
      break;
    }
    else if (temp < 0) {
      break;
    }

    if (temp > numbers[0]) {
      numbers[0] = temp;
    }
    if (temp < numbers[1]) {
      numbers[1] = temp;
    }

  }
  printf("Maior número digitado: %d\nMenor número digitado: %d\n", numbers[0], numbers[1]);

  return 0;
}
