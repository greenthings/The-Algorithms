#include <stdio.h>


#include "./common/common.h"
#include "./sorting_algorithms/BubbleSort.h"

using namespace std;

int arr[10] = {10, 40, 30, 50, 11, 21, 99, 11};

int main() {


  printArray(arr);
  BubbleSort_using_do_while(arr);        
  printArray(arr);
  
  return 0;
}
