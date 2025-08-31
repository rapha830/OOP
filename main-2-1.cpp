#include <iostream>
using namespace std;

int min_element(int array[], int n);

int main() {
  int array[] = {2, 6, 1, 5, 7};
  int n = sizeof(array) / sizeof(array[0]);

  cout << "The minimum number is: " << min_element(array, n) << endl;

  return 0;
}