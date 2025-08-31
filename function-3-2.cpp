#include <iostream>

int median_array(int array[], int n) {
  if (n < 1 || n % 2 == 0) {
    return 0;
  }

  for (int i = 1; i < n; i++) {
    int j = i - 1;
    int num = array[i];

    while (array[j] > num && j >= 0) {
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = num;
  }

  return array[n / 2];
}