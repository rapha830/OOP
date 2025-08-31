int count(int array[], int n){
    int count = 0;
    for(int i=0; i<n;++i){
        count += array[i];
    }
    return count;
}