#include <iostream>
#include <string>

int main(){

    std::string num1;
    std::string num2;
    char op;

    std::cout << "First number: " << std::endl;
    std::cin >> num1;
    std::cout << "Second number: " << std::endl;
    std::cin >> num2;
    std::cout << "Operator: " << std::endl;
    std::cin >> op;
    
    int res;
    int n1 = std::stoi(num1);
    int n2 = std::stoi(num2);

    switch (op){
        case '+':
            res = n1 + n2;
            break;
        case '-':
            res = n1 - n2;
            break;
        case '*':
            res = n1 * n2;
            break;
        case '/':
            (float)n1; (float)n2; (float)res;
            res = n1 / n2;
            break;
    }

    std::cout << res << std::endl;

    return 0;
}
