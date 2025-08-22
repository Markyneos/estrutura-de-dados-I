#include <stdio.h>

void f(int n) {
  printf("Oi %d\n", n);
  if (n - 1 > 0) {
    f(n - 1);
  }
}

void funcao2(int n) {
  if (n < 0) {
    return;
  }
  funcao2(n - 1);
  printf("Oi %d\n", n);
}

int main() {
  funcao2(5);

  return 0;
}
