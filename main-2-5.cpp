#include <iostream>
using namespace std;

bool is_descending(int array[], int n);

int main() {
  int array[] = {9, 8, 6, 6, 4, 3, 1};
  int n = sizeof(array) / sizeof(array[0]);

  bool result = is_descending(array, n);
  if (result) {
    cout << "The array is an descending order array" << endl;
  } else {
    cout << "The array is not an decending order array" << endl;
  }
  return 0;
}