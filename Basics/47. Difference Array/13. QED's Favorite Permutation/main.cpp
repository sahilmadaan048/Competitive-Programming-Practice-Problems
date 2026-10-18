// https://codeforces.com/contest/2030/problem/D

// Author - sahilmadaan048


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, q;
        cin >> n >> q;

        vector<int> p(n);

        for(int i = 0; i < n; i++) {
            cin >> p[i];
        }

        string s;
        cin >> s;

        // prefMax[i] = maximum of the first i elements
        vector<int> prefMax(n + 1, 0);

        for(int i = 0; i < n; i++) {
            prefMax[i + 1] = max(prefMax[i], p[i]);
        }

        // Check whether boundary j is bad.
        // j is 1-based and lies between positions j and j+1.
        auto isBad = [&](int j) {
            if(j < 1 || j >= n) {
                return 0;
            }

            if(s[j - 1] == 'L' && s[j] == 'R'
               && prefMax[j] != j) {
                return 1;
            }

            return 0;
        };

        int bad = 0;

        for(int j = 1; j < n; j++) {
            bad += isBad(j);
        }

        while(q--) {
            int i;
            cin >> i;

            // Remove old contributions
            bad -= isBad(i - 1);
            bad -= isBad(i);

            // Flip the character (1-based to 0-based)
            if(s[i - 1] == 'L') {
                s[i - 1] = 'R';
            } else {
                s[i - 1] = 'L';
            }

            // Add new contributions
            bad += isBad(i - 1);
            bad += isBad(i);

            if(bad == 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
