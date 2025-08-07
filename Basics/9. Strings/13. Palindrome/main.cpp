// https://vjudge.net/problem/Gym-293843I

#include <iostream>
#include <string>

int main() {
    std::string S;
    std::getline(std::cin, S); // Read the string from input

    // Check if the string is a palindrome
    int left = 0;
    int right = S.length() - 1;
    bool isPalindrome = true;

    while (left < right) {
        if (S[left] != S[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    // Output the result
    if (isPalindrome) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
