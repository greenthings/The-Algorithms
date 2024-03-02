#include <cstdio>
#include <iostream>
#include <stdio.h>

#include "./common/common.h"
// #include "./sorting_algorithms/BubbleSort.h"
// #include "./sorting_algorithms/HeapSort.h"
// #include "./sorting_algorithms/InsertionSort.h"
// #include "./sorting_algorithms/MergeSort.h"
// #include "./sorting_algorithms/QuickSort.h"
// #include "./sorting_algorithms/RadixSort.h"
// #include "./sorting_algorithms/SelectionSort.h"

#include "./sorting_algorithms_headers/BubbleSort.h"
#include "./sorting_algorithms_headers/HeapSort.h"
#include "./sorting_algorithms_headers/InsertionSort.h"
#include "./sorting_algorithms_headers/MergeSort.h"
#include "./sorting_algorithms_headers/QuickSort.h"
#include "./sorting_algorithms_headers/RadixSort.h"
#include "./sorting_algorithms_headers/SelectionSort.h"

using namespace std;

int arr[10] = {12, 43, 34, 55, 16, 27, 99, 11, 32, 10};
int arr4[10] = {0, 12, 43, 34, 55, 16, 27, 99, 11, 32};

int main() {
  // Original Array
  // printf("Original Array \n");
  // printArray(arr);
  // printf("\n");

  // You can choose algorithms
  // BubbleSort_using_nested_loop(arr);
  // BubbleSort_using_do_while(arr);
  // SelectionSort(arr);
  // InsertionSort(arr);
  // RadixSort(arr);
  // MergeSortTrigger(arr);

  // Quick Sort
  // Basic Pivot
  // int n = sizeof(arr) / sizeof(arr[0]);
  // QuickSortTrigger(arr, n, 'b');
  // Random Pivot
  // int n1 = sizeof(arr) / sizeof(arr[0]);
  // QuickSortTrigger(arr, n1, 'r');
  // Median Pivot
  // int n2 = sizeof(arr) / sizeof(arr[0]);
  // QuickSortTrigger(arr, n2, 'm');
  //

  // Heap Sort

  int n4 = sizeof(arr4) / sizeof(arr4[0]);
  // index:  1 ~ 9
  HeapSort(arr4, n4);
  // printArray(arr);

  return 0;
}
