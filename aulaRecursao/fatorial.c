#include <stdio.h>

int fatorialSem(int n) {
  for (int i = n - 1; i > 0; i--) {
    n *= i;
  }
  return n;
}

int fatorialCom(int n) {
  if (n == 0) {
    return 1;
  }
  if (n == 1 || n == 2) {
    return n;
  }
  else {
    return n * fatorialCom(n - 1);
  }
}

int main() {
  printf("%d\n", fatorialSem(3));
  printf("%d\n", fatorialCom(3));

  return 0;
}
