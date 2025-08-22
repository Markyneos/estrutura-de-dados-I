#include <stdio.h>

// int search(int arr[], int size, int target) {
//   for (int i = 0; i < size; i++) {
//     if (arr[i] == target) {
//       return i;
//     }
//   }
//   return -1;
// }

// int binarySearch(int arr[], int size, int target) {
//   int head = 0;
//   int tail = size - 1;
//   while (head <= tail) {
//     int half = head + (tail - head) / 2;
//     if (arr[half] == target) {
//       return half;
//     }
//     else if (arr[half] < target) {
//       head = half + 1;
//     }
//     else {
//       tail = half - 1;
//     }
//   }
//   return -1;
// }


int binarySearch(int arr[], int target, int head, int tail) {
  int half = head + (tail - head) / 2;
  if (arr[half] == target) {
    return half;
  }
  else if (arr[half] < target) {
    return binarySearch(arr, target, half + 1, tail);
  }
  else if (arr[half] > target) {
    return binarySearch(arr, target, head, half - 1);
  }
  else {
    return -1;
  }
}


int main() {
  int arr[] = {23, 4, 67, -8, 54, 90, 21};
  int arr2[] = {-8, 4, 21, 23, 54, 67, 90};

  // if (search(arr2, 7, 54) == -1) {
  //   printf("Não ta no array, burrão\n");
  // } else {
  //   printf("indice: %d\n", search(arr, 7, 54));
  // }

  printf("indice: %d\n", binarySearch(arr2, -8, 0, 6));
  return 0;
}
