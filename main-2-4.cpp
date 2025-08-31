#include <iostream>
using namespace std;

bool is_ascending(int array[], int n);

int main() {
  int array[] = {1, 2, 5, 7, 7, 8, 9, 10};
  int n = sizeof(array) / sizeof(array[0]);

  bool result = is_ascending(array, n);

  if (result) {
    cout << "The array is in ascending order." << endl;
  } else {
    cout << "The array is not in ascenfing order." << endl;
  }

  return 0;
}