#include "MergeSort.h"
#include "../common/common.h"

#include <cstdio>
#include <iostream> // cout
#include <stdio.h>
#include <vector>

using namespace std;

vector<int> arr_vector;
vector<int> merged_arr_vector;

void Merge(int low, int mid, int high) {

  // two indexes for each array.
  int i = low;
  int j = mid + 1;

  //  vector index
  int k = low;

  // put data in one array.
  // true condition
  while (i <= mid && j <= high) {
    if (arr_vector[i] <= arr_vector[j]) {
      merged_arr_vector[k++] = arr_vector[i++];
      // vecotr is dynamic.
      // merged_arr_vector.push_back(arr_vector[i]);
      // i++
    } else {
      merged_arr_vector[k++] = arr_vector[j++];
    }
  }
  cout << "merged_arr" << endl;
  printArrayVector(merged_arr_vector);

  // the left items
  while (i <= mid) {
    merged_arr_vector[k++] = arr_vector[i++];
  }

  while (j <= high) {
    merged_arr_vector[k++] = arr_vector[j++];
  }

  for (int l = low; l <= high; l++) {
    arr_vector[l] = merged_arr_vector[l];
  }
}

void MergeSort(int low, int high) {
  if (low < high) {
    int mid = (low + high) / 2;
    MergeSort(low, mid);
    MergeSort(mid + 1, high);
    Merge(low, mid, high);
  }
}

void MergeSortTrigger(int arr[]) {
  printf("MergeSort\n\n");

  // index 0 to n - 1
  int low = 0;
  int n = countArrayElements(arr);
  int high = n - 1;

  // vectorization
  for (int i = 0; i < n; i++) {
    arr_vector.push_back(arr[i]);
    merged_arr_vector.push_back(0);
  }

  MergeSort(low, high);
}
