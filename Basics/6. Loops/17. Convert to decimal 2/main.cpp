// https://vjudge.net/problem/Gym-287309X

#include <iostream>
using namespace std;

// Function to count the number of 1s in the binary representation of N
int countOnes(int N) {
    int count = 0;
    while (N > 0) {
        if (N & 1) count++;  // Check if the least significant bit is 1
        N >>= 1;  // Shift right by 1 bit
    }
    return count;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        // Count the number of 1s in the binary representation of N
        int numOfOnes = countOnes(N);
        
        // Calculate the decimal equivalent of a binary number with numOfOnes 1s
        int result = (1 << numOfOnes) - 1;
        
        // Print the result
        cout << result << endl;
    }

    return 0;
}
