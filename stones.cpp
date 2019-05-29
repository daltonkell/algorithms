#include <iostream>

int main(){
    int nstones;
    std::cin >> nstones;
    int x = nstones;
    for (int i=0; i<nstones; ++i){
        x -= 2;
    }
    if (x % 2 != 0){ std::cout << "Alice" << std::endl; }
    else { std::cout << "Bob" << std::endl; }
    return 0;
}
