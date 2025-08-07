// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W


#include<bits/stdc++.h>
using namespace std;

bool solve(int64_t want, int64_t n) {
    if (n == want) {
        return true;
    }
    if (want>n) {
        return false;
    }
    return solve(want*10, n) || solve(want*20, n);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int64_t n;
        cin >> n;
        if (solve(1, n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
