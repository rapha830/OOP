#include <iostream>

int count_evens(int number){
    if(number < 1){
        return 0;
    }
    int count = 0;
    for(int i=0; i<number; i++){
        if(number % 2 == 0){
            count++;
        }
    }
    return count;
}