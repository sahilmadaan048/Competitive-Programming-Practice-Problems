// https://vjudge.net/problem/Gym-287309W

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Upper half including the middle row
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half (excluding the middle row)
    for (int i = N; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
