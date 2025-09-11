#include "../myFunctions/myFunctions.h"

void insertionSort(int *arr, int size) {
  for (int i = 1; i < size; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && key < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main() {
  int arr[] = {7, 4, 5, 9, 8, 2, 1};
  imprimirVetor(arr, 7);
  insertionSort(arr, 7);
  imprimirVetor(arr, 7);

  return 0;
}
