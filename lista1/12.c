// Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A
// primeira vez
//  deve usar a estrutura de repetição for, a segunda while, e a terceira do
//  while.
#include <stdio.h>

int main() {
  for (int i = 0; i < 100; i++) {
    printf("%d\n", i + 1);
  }
  int contador = 0;
  while (contador < 100) {
    printf("%d\n", contador + 1);
    contador++;
  }
  contador = 0;
  do {
    printf("%d\n", contador + 1);
    contador++;
  } while (contador < 100);

  return 0;
}
