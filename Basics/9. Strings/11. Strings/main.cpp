// https://vjudge.net/problem/Gym-293843D

#include <iostream>
#include <string>

int main() {
    std::string A, B;
    
    // Read the two input strings
    std::getline(std::cin, A);
    std::getline(std::cin, B);
    
    // Output the sizes of the strings
    std::cout << A.size() << " " << B.size() << std::endl;
    
    // Output the concatenated string A + B
    std::cout << A + B << std::endl;
    
    // Swap the first characters of the strings and output the result
    if (!A.empty() && !B.empty()) {
        // Create new strings with swapped first characters
        std::string swappedA = B[0] + A.substr(1);
        std::string swappedB = A[0] + B.substr(1);
        
        std::cout << swappedA << " " << swappedB << std::endl;
    }
    
    return 0;
}
