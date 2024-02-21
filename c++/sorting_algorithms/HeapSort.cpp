#include "HeapSort.h"
#include "../common/common.h"
#include <iostream>

using namespace std;

void Heapify(int arr[], int n, int i) {
  // Assuming the node in the middle has the largest value.
  int largest = i;
  int left = i * 2;
  int right = i * 2 + 1;

  if (left <= n && arr[left] > arr[largest]) {
    largest = left;
  }

  if (right <= n && arr[right] > arr[largest]) {
    largest = right;
  }

  if (largest != i) {
    swap(arr[i], arr[largest]);
    Heapify(arr, n, largest);
  }
}

void HeapSort(int arr[], int length) {

  printf("Original Array \n");
  printArraywithLength(arr, length);

  // Make Max Heap
  for (int i = length / 2; i >= 1; i--) {
    // i  is top of the small triangle.
    Heapify(arr, length, i);
  }
  cout << "Make a Max Heap" << endl;
  printArraywithLength(arr, length);

  cout << "Sorting" << endl;
  // Sorting
  for (int i = length - 1; i > 1; i--) {
    // make last one biggest in array.
    swap(arr[1], arr[i]);
    // remake max heap
    Heapify(arr, i - 1, 1);
    printArraywithLength(arr, length);
  }
}
