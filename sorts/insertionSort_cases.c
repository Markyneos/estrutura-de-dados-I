#include <stdio.h>
#include "../myFunctions/myFunctions.h"
#include <time.h>

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
  int arr2[] = {1, 2, 4, 7, 9, 8, 5};

  imprimirVetor(arr, 7);
  clock_t startTime = clock();
  insertionSort(arr, 7);
  clock_t endTime = clock();
  clock_t elapsedTicks = endTime - startTime;
  imprimirVetor(arr, 7);
  double timeInSeconds = (double)elapsedTicks / CLOCKS_PER_SEC;
  printf("Tempo gasto: %f", timeInSeconds);

  printf("\n");


  imprimirVetor(arr2, 7);
  startTime = clock();
  insertionSort(arr2, 7);
  endTime = clock();
  elapsedTicks = endTime - startTime;
  imprimirVetor(arr2, 7);
  timeInSeconds = (double)elapsedTicks / CLOCKS_PER_SEC;
  printf("Tempo gasto: %f\n", timeInSeconds);

  return 0;
}
