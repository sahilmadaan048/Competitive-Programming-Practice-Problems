// https://vjudge.net/problem/Gym-293843J

#include <iostream>
#include <vector>

int main() {
    std::string S;
    std::getline(std::cin, S); // Read the entire input string

    // Frequency array for 26 lowercase English letters
    std::vector<int> freq(26, 0);

    // Count occurrences of each letter
    for (char c : S) {
        freq[c - 'a']++;
    }

    // Print results in ascending order of letters
    for (char c = 'a'; c <= 'z'; ++c) {
        int index = c - 'a';
        if (freq[index] > 0) {
            std::cout << c << " : " << freq[index] << std::endl;
        }
    }

    return 0;
}
