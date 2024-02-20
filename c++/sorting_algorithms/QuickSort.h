// QuickSort.h
#include <vector>

using namespace std;

int SelectPivot(vector<int> arr_vector_quick, int high);
int SelectPivotRandom(vector<int> arr_vector_quick, int high);
int SelectPivotMedian(vector<int> arr_vector_quick, int low, int high);
int Partition(int low, int high, char pivot_method);
void QuickSort(int low, int high, char pivot_method);
void QuickSortTrigger(int arr[], int n, char pivot_method);
