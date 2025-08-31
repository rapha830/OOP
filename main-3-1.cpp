# include <iostream>
using namespace std;

bool is_fanarray(int array[], int n);

int main(){
    int array[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    int n = sizeof(array) / sizeof(array[0]);

    bool result = is_fanarray(array, n);

    if(result){
        cout << "This is a fan array." << endl;
    }else{
        cout << "This is not a fan array." << endl;
    }
return 0;
}