#include "string.hpp"

String::String(){
    // create an empty array
    array = new char[1];
    array[0] = '\0';
    len = 0; 
}

String::String(const char* str){
    // create a string from some char pointer
    len = 0; // initial length
    for (len; str[len]; ++len); // great way to get the length w/o separate func

    array = new char [len];
    for (int i=0; i<len; ++i){
        array[i] = str[i];
    }

    // add null char
    array[len + 1] = '\0';
    ++len;
}

String::~String(){
    delete [] array;
}

unsigned int String::length(){
    return len;
}

//void String::reverse(){
//    for (int i=0; i<len; ++i){
//        // TODO
//    }
//}

void String::append(const char c){
    // append a character to our array

    char * new_arr;
    new_arr = new char[len + 2]; // need the new char AND the null char

    for (int i=0; i<len; ++i){
        new_arr[i]= array[i];
    }

    new_arr[len] = c;
    new_arr[len + 1] = '\0';
    ++len; // increase length

    delete [] array;
    array = new_arr; // change pointer
}
