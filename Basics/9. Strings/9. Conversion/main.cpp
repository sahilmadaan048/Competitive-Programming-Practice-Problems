// https://vjudge.net/problem/Gym-293843G

#include <iostream>
#include <string>
#include <cctype> // for std::islower, std::isupper, std::tolower, std::toupper

int main() {
    std::string S;
    
    // Read the input string
    std::getline(std::cin, S);
    
    // Iterate over each character in the string
    for (char &c : S) {
        if (c == ',') {
            c = ' '; // Replace comma with space
        } else if (std::islower(c)) {
            c = std::toupper(c); // Convert lowercase to uppercase
        } else if (std::isupper(c)) {
            c = std::tolower(c); // Convert uppercase to lowercase
        }
    }
    
    // Print the modified string
    std::cout << S << std::endl;
    
    return 0;
}
