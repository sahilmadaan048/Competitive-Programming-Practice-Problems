// https://vjudge.net/problem/Gym-287309U

#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of digits of a number
int sumOfDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int result = 0;

    // Iterate through all numbers from 1 to N
    for(int i = 1; i <= N; i++) {
        int digitSum = sumOfDigits(i);  // Calculate sum of digits
        if(digitSum >= A && digitSum <= B) {
            result += i;  // Add to result if sum of digits is within the range [A, B]
        }
    }

    cout << result << endl;  // Output the final result
    return 0;
}
