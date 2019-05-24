#include <iostream>

int strLen(char* c);
bool isPal(char * c, int len);
bool palindrome(char* str);

int main(){

    // create str
    char a[] = {'H', 'e', 'l', 'o', '\0'};
    char b[] = "racecar"; // both are string literals?

    // test if a string is a palindrome
    int a_len = strLen(a);
    int b_len = strLen(b);

    std::cout << a_len << ' ' << b_len << std::endl;

    return 0;
}

int strLen(char* c){
    int len = 0;
    while(*c){
        len++;
        c++;
    }
    return len;
}

bool isPal(char * c, int len){
    for (int i=0; i<len; i++){
        if (*c[i] != *c[len - i - 1]) return false;
    }
    return true;
}

bool palindrome(char* c){
    unsigned int length = 0;
    for (length; str[length]; ++length); // great way to get the length w/o separate func
    for (int i=0; i<length/2; ++i){
        if (c[i] != c[length - i - 1]) return false;
    }
    return true;
}
