// https://vjudge.net/problem/Gym-287306K

#include <iostream>
#include <string>

int main() {
    std::string F1, S1, F2, S2;

    // Read input for the first person
    std::cin >> F1 >> S1;
    // Read input for the second person
    std::cin >> F2 >> S2;

    // Determine if they are brothers
    if (S1 == S2) {
        std::cout << "ARE Brothers" << std::endl;
    } else {
        std::cout << "NOT" << std::endl;
    }

    return 0;
}
