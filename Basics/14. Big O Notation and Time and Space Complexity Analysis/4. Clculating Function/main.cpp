// https://codeforces.com/problemset/problem/486/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n; 
    cin >> n;

    // If n is odd, the sum of odd numbers is negative
    // If n is even, the sum of even numbers is positive
    long long ans = (n % 2 == 0) ? n / 2 : -(n + 1) / 2;

    cout << ans << endl;

    return 0;
}
