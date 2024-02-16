#include <iostream>

#include "common.h"

using namespace std;

// print array
void printArray(int arr[]) {
  for (int i = 0; arr[i] != '\0'; i++) {
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