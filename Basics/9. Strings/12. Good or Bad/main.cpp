// https://vjudge.net/problem/Gym-293843H#google_vignette

#include <iostream>
#include <string>

int main() {
    int T;
    std::cin >> T; // Read the number of test cases
    std::cin.ignore(); // Ignore the newline character after the number

    while (T--) {
        std::string S;
        std::getline(std::cin, S); // Read the string for each test case

        // Check if the string contains "010" or "101"
        bool isGood = false;
        for (size_t i = 0; i < S.length() - 2; ++i) {
            // Check the current substring of length 3
            if (S.substr(i, 3) == "010" || S.substr(i, 3) == "101") {
                isGood = true;
                break;
            }
        }

        // Output the result
        if (isGood) {
            std::cout << "Good" << std::endl;
        } else {
            std::cout << "Bad" << std::endl;
        }
    }

    return 0;
}
