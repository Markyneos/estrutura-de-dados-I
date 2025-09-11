#include "../myFunctions/myFunctions.h"

void bubbleSort(int *arr, int size) {
  for (int i = 0; i < size - 1; i++) {
    int sorted = 1;
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        sorted = 0;
      }
    }
    if (sorted)
      break;
  }
}

int main() {
  // int arr[] = {7, 4, 5, 9, 8, 2, 1};
  int arr[] = {10, 8, 7, 0};

  imprimirVetor(arr, 4);
  bubbleSort(arr, 4);
  imprimirVetor(arr, 4);

  return 0;
}
