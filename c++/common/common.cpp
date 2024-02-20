#include <iostream>
#include <vector>

#include "common.h"

using namespace std;

// print array
void printArray(int arr[]) {
  for (int i = 0; arr[i] != '\0'; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// print array vector
void printArrayVector(vector<int> arr) {
  for (int i = 0; i < (int)arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// swap two element
void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

// count array elements
int countArrayElements(int arr[]) {
  int count = 0;
  for (int i = 0; arr[i] != '\0'; i++) {
    count++;
  }
  return count;
}
