#include <iostream>
using namespace std;

double array_mean(int array[], int n);

int main(){
    int array[] = {2, 5, 4, 7, 6, 1, 1};
    int n = sizeof(array) / sizeof(array[0]);
    
    cout << "The average of the array is:" << array_mean(array, n) << endl;
    return 0;
}