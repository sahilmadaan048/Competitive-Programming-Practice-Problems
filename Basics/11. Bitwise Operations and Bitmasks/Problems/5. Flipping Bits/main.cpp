// https://vjudge.net/problem/HackerRank-flipping-bits

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        unsigned int n; 
        cin >> n;
        unsigned int flipped = ~n;  // Flip all bits
        cout << flipped << endl;
    }
    return 0;
}
