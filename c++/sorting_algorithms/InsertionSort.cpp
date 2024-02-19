#include "InsertionSort.h"
#include "../common/common.h"
#include <cstdio>

// Time Complexity in Worst case: O(N^2)
//

void InsertionSort(int arr[]) {
  printf("InsertionSort\n\n");

  for (int i = 1; arr[i] != '\0'; i++) {
    // In front of i'number
    int j = i - 1;
    // key value to compare each number
    int k = arr[i];

    while (j >= 0 && arr[j] > k) {
      arr[j + 1] = arr[j];
      j--;
    }

    printArray(arr);
    arr[j + 1] = k;
  }
}
