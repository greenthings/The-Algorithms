#include "SelectionSort.h"
#include "../common/common.h"
#include <cstdio>

// Time Complexity in Worst case: O(N^2)
//

void SelectionSort(int arr[]) {
  printf("SelectionSort\n\n");
  for (int i = 0; arr[i] != '\0'; i++) {
    int min_index = i;
    printf("Minimum index is %d \n", min_index);
    for (int j = i + 1; arr[j] != '\0'; j++) {
      if (arr[min_index] > arr[j]) {
        min_index = j;
      }
      swap(arr[min_index], arr[i]);
      printArray(arr);
    }
  }
}
