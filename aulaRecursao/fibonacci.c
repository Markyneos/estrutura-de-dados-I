#include <stdio.h>

int fibonacci(int n) {
  if (n == 1 || n == 2) {
    return 1;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  printf("%d\n", fibonacci(5));
  printf("%d\n", fibonacci(6));
  printf("%d\n", fibonacci(7));

  return 0;
}
