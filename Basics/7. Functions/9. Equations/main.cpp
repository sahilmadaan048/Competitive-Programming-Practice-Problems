// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F

#include <iostream>
using namespace std;

// Function to calculate power using integer arithmetic
int power(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        result *= base;
        exp--;
    }
    return result;
}

int main() {
    int x, n;
    cin >> x >> n;
    
    int result = 0;
    // cout << pow(2, 3);

    // Calculate the sum of x^0, x^2, x^4, ..., up to x^n
    for (int count = 2; count <= n; count += 2) {
        result += power(x, count);  // Add x^count to result
    }

    cout << result<< endl;
    return 0;
}
