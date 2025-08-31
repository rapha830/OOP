# include <iostream>
using namespace std;

int num_count(int array[], int n, int number);

int main(){
    int array[] = {8, 9, 8, 4, 6, 2, 0, 1};
    int n = sizeof(array)/sizeof(array[0]);
    int number = 8;

    cout << "The number equal " << number << "in this array are" << num_count(array, n, number) << endl;
    return 0;
}