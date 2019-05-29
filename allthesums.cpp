#include <iostream>

int main(){

    int cases;
    std::cin >> cases;

    for (int c=0; c<cases; ++c){
        int _dnum, num;
        std::cin >> _dnum >> num;

        int numPos = 0;
        int sumNpos = 0;
        int numOdd = 0;
        int sumNodd = 0;
        int numEven = 0;
        int sumNeven = 0;

        // only want to loop once
        int stop = (num * 2) + 1;
        for (int i=1; i<stop; i++){
            if (numPos < num){
                sumNpos+=i;
                ++numPos;
            }

            if (i % 2 != 0){
                if (numOdd < num){
                    sumNodd+=i;
                    ++numOdd;
                }
            }
            else {
                if (numEven < num){
                    sumNeven+=i;
                    ++numEven;
                }
            }

        }

        std::cout << _dnum << " " << sumNpos << " " << sumNodd << " " <<  sumNeven << std::endl;
    }

    return 0;
}
