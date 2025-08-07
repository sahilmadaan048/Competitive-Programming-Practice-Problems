// https://vjudge.net/problem/Gym-293843K
#include <iostream>
#include <string>

int main() {
    int N;
    std::cin >> N; // Read the number of test cases
    std::cin.ignore(); // Ignore the newline character after the number

    while (N--) {
        std::string S, T;
        std::getline(std::cin, S); // Read the first string
        std::getline(std::cin, T); // Read the second string

        std::string result;
        size_t lenS = S.length();
        size_t lenT = T.length();
        size_t minLen = std::min(lenS, lenT);

        // Interleave characters from S and T
        for (size_t i = 0; i < minLen; ++i) {
            result += S[i];
            result += T[i];
        }

        // Append remaining characters from the longer string
        if (lenS > lenT) {
            result += S.substr(minLen);
        } else if (lenT > lenS) {
            result += T.substr(minLen);
        }

        // Output the result
        std::cout << result << std::endl;
    }

    return 0;
}
