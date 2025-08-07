// https://vjudge.net/problem/HackerRank-bitwise-operators-in-c


#include <iostream>
#include <algorithm>
using namespace std;

void calculate_the_maximum(int n, int k) {
    int max_and = 0, max_or = 0, max_xor = 0;

    // Iterate through all pairs (a, b) such that 1 <= a < b <= n
    for (int a = 1; a < n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int and_value = a & b;
            int or_value = a | b;
            int xor_value = a ^ b;

            // Update the maximum values if the result is less than k
            if (and_value < k) {
                max_and = max(max_and, and_value);
            }
            if (or_value < k) {
                max_or = max(max_or, or_value);
            }
            if (xor_value < k) {
                max_xor = max(max_xor, xor_value);
            }
        }
    }

    // Print the results
    cout << max_and << endl;
    cout << max_or << endl;
    cout << max_xor << endl;
}

int main() {
    int n, k;
    cin >> n >> k;
    calculate_the_maximum(n, k);
    return 0;
}
