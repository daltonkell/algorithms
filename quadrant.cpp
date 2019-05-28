#include <iostream>

char printQuadrant(int x, int y){
    /* Print the quadrant in a Cartesian plane which two
    points (x, y) lie in.
    @param int x
    @param int y */

    if (x < 0){ // 2 or 3 only
        if (y < 0) { return '3'; }
        return '2';
    }
    else{
        if (y < 0) { return '4'; }
        return '1';
    }
}

int main(){
    // get inputs
    int x;
    int y;
    std::cin >> x >> y; // each on sepaerate lines
    std::cout << printQuadrant(x, y) << std::endl;
    return 0;
}
