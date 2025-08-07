// https://vjudge.net/problem/Gym-287309Y#google_vignette

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    
    // Handle the case where n is less than 2
    if (n <= 0) {
        return 0; // No output
    } else if (n == 1) {
        cout << "0" << endl;
        return 0;
    } else if (n == 2) {
        cout << "0 1" << endl;
        return 0;
    }

    // Initial Fibonacci numbers
    int prev2 = 0;
    int prev = 1;
    cout << prev2 << " " << prev << " ";

    // Generate the rest of the Fibonacci sequence
    for (int i = 2; i < n; i++) {
        int curr = prev2 + prev;
        cout << curr << " ";
        prev2 = prev;
        prev = curr;
    }
    cout << endl; // To end the output with a newline
    return 0;
}
