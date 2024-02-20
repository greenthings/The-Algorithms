#include "RadixSort.h"
#include "../common/common.h"
#include <stdio.h>
#include <vector>

using namespace std;

#define MAX_DIGIT 10

// Time Complexity in Worst case: O(k*N)
// 'k' means the digit's position.

int maxDigitPosition(int arr[]) {
  int quotant = arr[0];
  int count = 0;

  do {
    // choose first one in a array.
    // Assuming all arrays have the same number of digits.
    quotant = (quotant / 10);
    // The unit digit is 1 and the tens digit is 2..
    count++;
  } while (quotant != 0);

  return count;
}

void RadixSort(int arr[]) {
  printf("RadixSort\n\n");

  // Check max digit's position.
  int MAXK = maxDigitPosition(arr);
  // int MAXK = 10;

  int divider = 1;
  for (int position = 0; position < MAXK; position++) {
    // Make it two array
    // I used vector, because in my view, array intialization will be difficult.
    vector<int> new_arr[MAX_DIGIT];

    for (int i = 0; arr[i] != 0; i++) {
      // remainder
      int digit = (arr[i] / divider) % 10;
      new_arr[digit].push_back(arr[i]);
    }

    // Make them into one array
    int index = 0;
    for (int i = 0; i < MAX_DIGIT; i++) {
      for (int j = 0; j < (int)new_arr[i].size(); j++) {
        arr[index++] = new_arr[i][j];
      }
    }

    printArray(arr);

    // Next digit position
    divider *= 10;
  }
}
