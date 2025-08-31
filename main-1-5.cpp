# include <iostream>
using namespace std;

int count_evens(int number);

int main(){
    int number = 9;

    cout << "There are " << count_evens(number) << "evens between 1 and " << number << endl;
    return 0;
}