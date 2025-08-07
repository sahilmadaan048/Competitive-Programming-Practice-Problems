// https://vjudge.net/problem/CSES-2165

#include <bits/stdc++.h>
using namespace std;

void solve(int s, int d, int h, int n) {
    if (n == 1) {
        cout << s << " " << d << endl;
        return;
    }
    solve(s, h, d, n - 1);
    cout << s << " " << d << endl;
    solve(h, d, s, n - 1);
}

int main() {
    int n; 
    cin >> n;
    cout << pow(2,n)-1 <<  endl;
    solve(1, 3, 2, n);
    return 0;
}
