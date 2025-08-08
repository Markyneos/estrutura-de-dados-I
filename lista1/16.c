#include <stdio.h>

int main() {
  int arr[6] = {1, 0, 5, -2, -5, 7};
  int var = arr[0] + arr[1] + arr[5];
  printf("%d\n", var);
  arr[4] = 100;
  for (int i = 0; i < 6; i++) {
    printf("%d\n", arr[i]);
  }

  return 0;
}
