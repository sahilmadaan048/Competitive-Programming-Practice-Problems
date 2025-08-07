// https://vjudge.net/problem/Gym-287306N#google_vignette


#include <iostream>
#include <string>

int main() {
    int A, B;
    char S;
    
    // Read the input values
    std::cin >> A >> S >> B;

    // Evaluate the expression based on the operator
    switch (S) {
        case '+':
            std::cout << A + B << std::endl;
            break;
        case '-':
            std::cout << A - B << std::endl;
            break;
        case '*':
            std::cout << A * B << std::endl;
            break;
        case '/':
            std::cout << A / B << std::endl;
            break;
        default:
            std::cerr << "Invalid operator" << std::endl;
            return 1;
    }

    return 0;
}
