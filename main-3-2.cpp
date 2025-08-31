#include <iostream>
using namespace std;

int median_array(int array[], int n);

int main() {
  int array[] = {1, 4, 5, 3, 6};
  int n = sizeof(array) / sizeof(array[0]);

  cout << "The median of the array is: " << median_array(array, n) << endl;
}