#include <iostream>
using namespace std;

int max_element(int array[], int n);

int main() {
  int array[] = {2, 3, 7, 4, 1, 8, 5};
  int n = sizeof(array) / sizeof(array[0]);

  cout << "the maximum in the array is: " << max_element(array, n) << endl;

  return 0;
}