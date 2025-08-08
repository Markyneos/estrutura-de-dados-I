//Leia um número real e imprima o resultado do quadrado desse número.
#include <stdio.h>

int main()
{
  double numero;
  printf("Digite um número real: ");
  scanf("%lf", &numero);

  printf("O quadrado desse número é: %.2f\n", numero * numero);

  return 0;
}
