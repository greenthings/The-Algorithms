#include "QuickSort.h"
#include "../common/common.h"

// #include <array>
#include <cstdio>
#include <cstdlib>
#include <iostream> // cout
#include <iterator> // size
#include <stdio.h>
#include <vector>

using namespace std;

vector<int> arr_vector_quick;

// Basic
int SelectPivotHigh(vector<int> arr_vector_quick, int high) {
  return arr_vector_quick[high];
}

// Radom
int SelectPivotRandom(vector<int> arr_vector_quick, int high) {

  int pivot_value = arr_vector_quick[rand() % arr_vector_quick.size()];
  int last_value = arr_vector_quick[high];
  swap(pivot_value, last_value);

  return pivot_value;
}

// Median
int SelectPivotMedian(vector<int> arr_vector_quick, int low, int high) {

  int first_value = arr_vector_quick[low];
  int median_value = arr_vector_quick[(low + high) / 2];
  int last_value = arr_vector_quick[high];

  int arr[3];

  arr[0] = first_value;
  arr[1] = median_value;
  arr[2] = last_value;

  sort(arr, arr + 3);

  int selected_value = arr[1];

  swap(selected_value, last_value);

  return selected_value;
}

int Partition(int low, int high, char pivot_method) {
  int pivot = 0;

  if (pivot_method == 'b') {
    pivot = SelectPivotHigh(arr_vector_quick, high);
  } else if (pivot_method == 'r') {
    pivot = SelectPivotRandom(arr_vector_quick, high);
  } else if (pivot_method == 'm') {
    pivot = SelectPivotMedian(arr_vector_quick, low, high);
  } else {
    pivot = -1;
  }

  cout << pivot << " pivot " << endl;
  //  for nothing to change situation.
  int i = low - 1;

  for (int j = low; j < high; j++) {
    if (arr_vector_quick[j] < pivot) {
      i++;
      // swap(any &lhs, any &rhs)
      swap(arr_vector_quick[i], arr_vector_quick[j]);
    }
  }
  swap(arr_vector_quick[i + 1], arr_vector_quick[high]);

  printArrayVector(arr_vector_quick);
  cout << endl;
  return i + 1;
}

void QuickSort(int low, int high, char pivot_method) {
  if (low < high) {
    // Center of Value.
    int position = Partition(low, high, pivot_method);

    QuickSort(low, position - 1, pivot_method);
    QuickSort(position + 1, high, pivot_method);
  }
}

void QuickSortTrigger(int arr[], int n, char pivot_method) {
  // Flush array vector
  arr_vector_quick.clear();

  cout << "QuickSort " << pivot_method << endl;
  cout << endl;

  // index 0 to n - 1
  int low = 0;
  int high = n - 1;

  // vectorization
  for (int i = 0; i < n; i++) {
    arr_vector_quick.push_back(arr[i]);
  }

  QuickSort(low, high, pivot_method);
}
