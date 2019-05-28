#include <iostream>

int num_sub_zero(int N, int * arr){
    /* Count the number of negative occurences in an array of size N */
    int x = 0;
    for (int i=0; i<N; i++){
        if (*(arr + i) < 0) { x++; }
    }
    return x;
}

int main(){
    int size;
    std::cin >> size; // first line, size of array
    int *arr = new int [size]; // dynamically allocate
    for (int i=0; i<size; i++){
        std::cin >> *(arr + i);
    }
    std::cout << num_sub_zero(size, arr) << std::endl;
    delete [] arr; // free memory
    return 0;
}
