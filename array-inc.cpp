#include <iostream>

void arr_inc(int * arrP, int len);

int main(){
    int * a;
    a = new int[5];
    for (int i=0; i<5; ++i) a[i] = i;

    for (int i=0; i<5; ++i){
        std::cout << a[i];
    }
    std::cout << std::endl;

    arr_inc(a, 5);

    for (int i=0; i<5; ++i){
        std::cout << a[i];
    }

    std::cout << std::endl;
    delete [] a;

    return 0;
}

void arr_inc(int * arrP, int len){
    for (int i=0; i<len; ++i) ++(*(arrP + i));
}
