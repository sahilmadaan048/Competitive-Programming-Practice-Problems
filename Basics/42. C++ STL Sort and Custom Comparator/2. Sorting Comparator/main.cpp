// https://vjudge.net/problem/HackerRank-ctci-comparator-sorting


#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define ulli unsigned long long int 
#define li long int 
#define ff(i, a, b) for(int i = a; i < b; i++)
#define fb(i, b, a) for(int i = b; i >= a; i--)
#define w(t) while(--t >= 0)
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
#define input(a, n) for(int i = 0; i < n; i++) cin >> a[i]
#define mod 1000000007
#define co(n) cout << n
#define ret return 0
#define mi map<int, int>
#define output(a, n) for(int i = 0; i < n; i++) cout << a[i] << " "
#define forn(i, n) ff(i, 0, n)
#define sz(v) int((v).size())

void solve() {
    int n; 
    cin >> n;
    vector<pair<string, int>> temp;
    for (int i = 0; i < n; i++) {
        string s;
        int a; 
        cin >> s >> a;  // Combined input to reduce lines of code
        temp.push_back({s, a});
    }

    sort(temp.begin(), temp.end(), [](const pair<string, int> &a, const pair<string, int> &b) {
        // Sort by age descending, then by name ascending
        if (a.second != b.second) {
            return a.second > b.second; // Sort by age descending
        }
        return a.first < b.first; // Sort by name ascending
    });

    for (const auto& pair : temp) {
        cout << pair.first << " " << pair.second << "\n";
    }
}

int main() {
    fast;
    int t = 1; // Only one test case as per the problem statement
    while (t--) {
        solve();
    }
    return 0;
}
