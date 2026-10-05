// https://cses.fi/problemset/task/3422

// author - sahilmadaan048

#include <bits/stdc++.h>
using namespace std;

void solve() {
 int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    if (n == 2) {
        cout << "IMPOSSIBLE\n";
        return;
    }
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        c[i] = a[(i + 1) % n];
    }
    for (int i = 0; i < n; i++) {
        label: 
        if (c[i] == b[i]) {
            for(int j = 0; j < n; j++) {
                if(c[i] != a[j] and c[i] != b[j] and c[j] != a[i] and c[j] != b[i]) {
                    swap(c[i], c[j]);
                    goto label;
                }
            }
            cout << "IMPOSSIBLE\n";
            return;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}