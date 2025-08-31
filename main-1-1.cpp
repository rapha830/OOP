#include <iostream>
using namespace std;

int array_sum(int array[], int n);

int main(){
    int array[] = {2, 4, 5, 7, 3, 1, 0};
    int n = sizeof(array)/sizeof(array[0]);

    cout << "The sum of this array is:" << array_sum(array, n) << endl;
    return 0;
}