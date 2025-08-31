#include <iostream>

double array_mean(int array[], int n) {
  if (n < 1) {
    return 0.0;
  }
  double average = 0.0;
  double sum = 0;
  for (int i = 0; i < n; i++) {
    sum += array[i];
  }
  average = sum / n;
  return average;
}