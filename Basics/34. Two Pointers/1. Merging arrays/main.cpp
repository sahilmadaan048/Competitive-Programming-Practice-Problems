// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ulli unsigned long long int
#define li long int
#define ff(i, a, b) for (int i = a; i < b; i++)
#define fb(i, b, a) for (int i = b; i >= a; i--)
#define w(t) while (--t >= 0)
#define l(s) s.length()
#define ci(n) cin >> n
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define sa(a, n) sort(a, a + n)
#define sv(v) sort(v.begin(), v.end())
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define nl cout << "\n"
#define minus cout << "-1\n"
#define vi vector<int>
#define pb push_back
#define tc int t; cin >> t
#define pp pair<int, int>
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define mod 1000000007
#define co(n) cout << n
#define ret return 0
#define mi map<int, int>
#define output(a, n) for (int i = 0; i < n; i++) cout << a[i] << (i < n - 1 ? " " : ""); // No extra space at the end
#define forn(i, n) ff(i, 0, n)
#define sz(v) int((v).size())

void solve() {
    int n, m;
    cin >> n >> m;
    vi temp1(n), temp2(m);
    
    ff(i, 0, n) ci(temp1[i]);
    ff(i, 0, m) ci(temp2[i]);

    vi temp(n + m);
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (temp1[i] < temp2[j]) {
            temp[k++] = temp1[i++];
        } else {
            temp[k++] = temp2[j++];
        }
    }

    while (i < n) {
        temp[k++] = temp1[i++];
    }
    while (j < m) {
        temp[k++] = temp2[j++];
    }

    output(temp, k);
}

int main() {
    fast;
    int t = 1; 
    while (t--) {
        solve();
    }
    return 0;
}
