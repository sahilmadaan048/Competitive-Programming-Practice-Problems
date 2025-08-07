// https://vjudge.net/problem/AtCoder-abc051_b
#include <iostream>
using namespace std;

int main() {
    int K, S;
    cin >> K >> S;

    int count = 0;
    // Iterate over all possible values of X and Y
    for (int X = 0; X <= K; ++X) {
        for (int Y = 0; Y <= K; ++Y) {
            int Z = S - X - Y; // Calculate Z based on X and Y
            if (Z >= 0 && Z <= K) {
                ++count; // Z is valid, count this triplet
            }
        }
    }

    cout << count << endl;

    return 0;
}
