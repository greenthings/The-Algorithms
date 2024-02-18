#include "SelectionSort.h"
#include "../common/common.h"

// Time Complexity in Worst case: O(N^2)
//

void SelectionSort(int arr[]) {
  for (int i = 0; arr[i] != '\0'; i++) {
    int min_index = i;
    for (int j = i + 1; arr[j] != '\0'; j++) {
      if (arr[min_index] > arr[j]) {
        min_index = j;
      }
      swap(arr[min_index], arr[i]);
    }
  }
}
