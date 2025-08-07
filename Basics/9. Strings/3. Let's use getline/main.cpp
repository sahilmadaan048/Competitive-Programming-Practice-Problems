// https://vjudge.net/problem/Gym-293843B#google_vignette

#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    getline(cin, S);  // Read the entire input string

    for (char c : S) {
        if (c == '\\') {
            break;  // Stop when the first backslash is encountered
        }
        cout << c;  // Print the character if it's not a backslash
    }

    return 0;
}
