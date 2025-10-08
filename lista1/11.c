// Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando
// números maiores que 0.
#include <stdio.h>

int main() {
  for (int i = 0; i < 5; i++) {
    printf("%d\n", 3 * (i + 1));
  }

  return 0;
}
