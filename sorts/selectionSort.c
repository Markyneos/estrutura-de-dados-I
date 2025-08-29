#include "../myFunctions/myFunctions.h"

// int *selectionSort(int *arr, int size) {
//   int temp;
//   for (int i = 0; i < size; i++) {
//     for (int j = 0; j < size; j++) {
//       if (arr[i] < arr[j]) {
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//       }
//     }
//   }
//   return arr;
// }

void selectionSort(int *arr, int size, int beginning) {
  if (beginning >= size) {
    return;
  }
  int min = beginning;
  for (int i = beginning; i < size; i++) {
    if (arr[i] < arr[min]) {
      min = i;
    }
  }
  int temp = arr[beginning];
  arr[beginning] = arr[min];
  arr[min] = temp;
  selectionSort(arr, size, beginning + 1);
}

int main() {
  int arr[] = {7, 4, 5, 9, 8, 2, 1};
  imprimirVetor(arr, 7);
  selectionSort(arr, 7, 0);
  imprimirVetor(arr, 7);

  return 0;
}
