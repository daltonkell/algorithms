#include <iostream>

void add_to_sum(long int *sumPtr, long int *intPtr){
    /* POT --> power of 10; mod 10 to get the original int,
    then for-loop to raise to the remainder power. BANG.
    @param int pointer sumPtr: pointer to integer holding sum
    @param int pointer intPtr: pointer to int holding int to add */

    long int actual_num;
    actual_num = *intPtr / 10; // integer division slices off remainder, good
    int num_out = actual_num;

    // edge case
    if (*intPtr % 10 == 0) {
        *sumPtr += 1;
    }

    else {
        for (int i=1; i<(*intPtr % 10); ++i){
            num_out *= actual_num; 
        }
        *sumPtr += num_out;
    }
}

int main(){
    // get number of lines which is first line
    int numLines;
    std::cin >> numLines;

    long int sum = 0;
    long int *psum = &sum;

    // loop through to get each new int
    for (int i=0; i<numLines; ++i){
    long int num; // to hold ambiguous number
    long int *pnum = &num;
        std::cin >> num; // can simply reassign each time instead of re-declaring
        add_to_sum(psum, pnum);
    }
    std::cout << sum << std::endl;
    return 0;
}
