#include <iostream>
#include <string>

/* Hello, user
* Prompts the user for their name,
* then greet them.
*/

int main(){

    // get the name
    std::cout << "Full name? ";
    std::string name;
    std::getline(std::cin, name);

    // build the greeting string
    const std::string greeting = "* Hello, " + name + "! *";
    const std::string stars(greeting.size(), '*');

    // print out the greeting
    std::cout << stars << std::endl;
    std::cout << greeting << std::endl;
    std::cout << stars << std::endl;

    return 0;
}
