// https://vjudge.net/problem/Gym-287309M

#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is a lucky number
bool isLucky(int n) {
    while(n > 0) {
        int digit = n % 10;
        if(digit != 4 && digit != 7) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int A, B;
    cin >> A >> B;

    vector<int> luckyNumbers;

    // Iterate through the range [A, B]
    for(int i = A; i <= B; i++) {
        if(isLucky(i)) {
            luckyNumbers.push_back(i);  // Add lucky numbers to the vector
        }
    }

    // Print the lucky numbers or -1 if none are found
    if(luckyNumbers.empty()) {
        cout << -1 << endl;
    } else {
        for(int num : luckyNumbers) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
