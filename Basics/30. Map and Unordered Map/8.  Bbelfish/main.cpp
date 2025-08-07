// https://vjudge.net/problem/UVA-10282
 

 #include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

int main() {
    std::unordered_map<std::string, std::string> dictionary;
    std::string line;

    // Read dictionary entries
    while (std::getline(std::cin, line) && !line.empty()) {
        size_t space_pos = line.find(' ');
        if (space_pos != std::string::npos) {
            std::string english_word = line.substr(0, space_pos);
            std::string foreign_word = line.substr(space_pos + 1);
            dictionary[foreign_word] = english_word;
        }
    }

    // Read foreign language message
    std::vector<std::string> message;
    while (std::getline(std::cin, line)) {
        message.push_back(line);
    }

    // Translate the message
    for (const auto& foreign_word : message) {
        if (dictionary.find(foreign_word) != dictionary.end()) {
            std::cout << dictionary[foreign_word] << std::endl;
        } else {
            std::cout << "eh" << std::endl;
        }
    }

    return 0;
}