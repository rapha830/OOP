#include <iostream>
using namespace std;

void two_five_nine(int array[], int n);

int main() {
  int array[] = {9, 9, 7, 6, 8, 3, 5, 1};
  int n = sizeof(array) / sizeof(array[0]);

  two_five_nine(array, n);
  return 0;
}