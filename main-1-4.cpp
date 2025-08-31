#include <iostream>
using namespace std;

int sum_two_arrays(int array[], int secondarray[], int n);

int main(){
    int array[] = {1, 2, 3, 4, 5};
    int secondarray[] = {6, 7, 8, 9, 0};
    int n = sizeof(array) / sizeof(array[0]);
    
    cout << "The sum of these two array is" << sum_two_arrays(array, secondarray, n) << endl;
    return 0;
}