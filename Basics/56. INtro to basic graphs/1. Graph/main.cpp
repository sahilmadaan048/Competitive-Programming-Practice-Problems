// https://vjudge.net/problem/Aizu-ALDS1_11_A

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve(){
    int n; 
    cin >> n;
    vector<vector<int>> adj(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++) {
        int u, k; 
        cin >> u >> k;
        for(int j = 0; j < k; j++) {
            int a;
            cin >> a;
            adj[u - 1][a - 1] = 1;
        }
    }

    // Fixing the output format
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << adj[i][j];
            if(j != n - 1) cout << " ";  // Avoid extra space at end of line
        }
        cout << '\n';  // Use '\n' instead of endl for better performance
    }
}

int main(){
    fast;
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}
