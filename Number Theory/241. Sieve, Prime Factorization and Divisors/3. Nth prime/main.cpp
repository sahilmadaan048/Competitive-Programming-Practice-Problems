// https://toph.co/p/n-th-prime

#include <bits/stdc++.h>
// #include <vector>
using namespace std;

int main() {
    const int limit = 8e6;  
    vector<bool> is_prime(limit + 1, true);
    vector<int> primes;

    // Sieve of Eratosthenes
    is_prime[0] = is_prime[1] = false; 
    for (int num = 2; num <= limit; ++num) {
        if (is_prime[num]) {
            primes.push_back(num);
            for (long long multiple = (long long)num * num; multiple <= limit; multiple += num) {
                is_prime[multiple] = false;
            }
        }
    }

    int n;
    cin >> n;  // Read the value of n
    cout << primes[n - 1] << endl;  // Print the n-th prime number (0-based indexing)

    return 0;
}
