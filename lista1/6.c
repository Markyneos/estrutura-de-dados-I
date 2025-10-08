//Faça um programa que receba dois números e mostre qual deles é o maior.
#include <stdio.h>

int main() {
  double num1, num2;
  printf("Digite dois números: ");
  scanf("%lf %lf", &num1, &num2);
  printf("O maior número entre os dois é: %.2f\n", num1 > num2 ? num1 : num2);

  return 0;
}
