//Leia um número real e imprima a quinta parte deste número.
#include <stdio.h>

int main() {
  double numero;

  printf("Digite um número real: ");
  scanf("%lf", &numero);
  printf("A quinta parte desse número é: %.2f\n", numero / 5);

  return 0;
}
