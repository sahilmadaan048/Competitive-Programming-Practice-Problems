// https://vjudge.net/problem/HackerRank-30-bitwise-and#google_vignette

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, k; 
        cin >> n >> k;
        int maxi = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                int num = (i & j);
                if (num > maxi && num < k) {
                    maxi = num;
                }
            }
        }
        cout << maxi << endl;
    }
    return 0;
}
