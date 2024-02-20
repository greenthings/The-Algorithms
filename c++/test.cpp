#include <cstdio>
#include <stdio.h>

#include "./common/common.h"
#include "./sorting_algorithms/BubbleSort.h"
#include "./sorting_algorithms/InsertionSort.h"
#include "./sorting_algorithms/MergeSort.h"
#include "./sorting_algorithms/RadixSort.h"
#include "./sorting_algorithms/SelectionSort.h"

using namespace std;

int arr[8] = {12, 43, 34, 55, 16, 27, 99, 11};

int main() {
  // Original Array
  printf("Original Array \n");
  printArray(arr);
  printf("\n");

  // You can choose algorithms
  // BubbleSort_using_nested_loop(arr);
  // BubbleSort_using_do_while(arr);
  // SelectionSort(arr);
  // InsertionSort(arr);
  // RadixSort(arr);
  MergeSortTrigger(arr);
  // printArray(arr);

  return 0;
}
