// https://codeforces.com/problemset/problem/579/A
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    // Calculate the number of 1s in the binary representation of x
    int initial_bacteria = 0;
    while (x > 0) {
        initial_bacteria += (x & 1);  // Increment if the least significant bit is 1
        x >>= 1;  // Right shift to process the next bit
    }

    cout << initial_bacteria << endl;
    return 0;
}
