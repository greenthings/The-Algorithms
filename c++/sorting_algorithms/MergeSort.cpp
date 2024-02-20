#include "MergeSort.h"
#include "../common/common.h"

#include <cstdio>
#include <iostream> // cout
#include <stdio.h>
#include <vector>

using namespace std;

// we can use just arr but we used vector, bc it is flexible.
// assuming we used a static array, we have to initialize its size at first.
// but we dont wanna make it static such as defining MAX_N 10000, wanna do this
// flexible.
vector<int> arr_vector_merge;
vector<int> merged_arr_vector_merge;

void Merge(int low, int mid, int high) {

  // two indexes for each array.
  int i = low;
  int j = mid + 1;

  //  vector index
  int k = low;

  // put data in one array.
  // true condition
  while (i <= mid && j <= high) {
    if (arr_vector_merge[i] <= arr_vector_merge[j]) {
      merged_arr_vector_merge[k++] = arr_vector_merge[i++];
      // vecotr is dynamic.
      // so, this will be error code.
      // merged_arr_vector_merge.push_back(arr_vector_merge[i]);
      // i++
    } else {
      merged_arr_vector_merge[k++] = arr_vector_merge[j++];
    }
  }
  cout << "merged_arr" << endl;
  printArrayVector(merged_arr_vector_merge);

  // the left items
  while (i <= mid) {
    merged_arr_vector_merge[k++] = arr_vector_merge[i++];
  }

  while (j <= high) {
    merged_arr_vector_merge[k++] = arr_vector_merge[j++];
  }

  for (int l = low; l <= high; l++) {
    arr_vector_merge[l] = merged_arr_vector_merge[l];
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
    arr_vector_merge.push_back(arr[i]);
    merged_arr_vector_merge.push_back(0);
  }

  MergeSort(low, high);

  arr_vector_merge.clear();
}
