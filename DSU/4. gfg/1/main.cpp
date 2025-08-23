#include <bits/stdc++.h>
using namespace std;

vector<int> parent, sz;

int find(int x) {
    if(parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void uni(int x, int y) {
    int px = find(x);
    int py = find(y);

    if(px != py) {
        if(sz[px] > sz[py]) {
            swap(px, py);
        }
        parent[px] = py;
        sz[py] += sz[px];
    }
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    sz =  vector<int> (n+5, 1);
    parent =  vector<int> (n+5);
    iota(parent.begin(), parent.end(), 0);
    // for(int i=0; i<m; i++) cin >> a[i];
    
    vector<pair<int, int>> store;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        store.push_back({a[i], i});
    }

    sort(store.begin(), store.end(), greater<pair<int, int>>());
    vector<int> ans(n+5, 0);
    for(int i=0; i<n; i++) {
        int val = store[i].first,  ind = store[i].second;

        if(ind - 1 >=0 and a[ind-1] >= val) {
            uni(ind-1, ind);
        }
        if(ind + 1 < n and a[ind+1] >= val) {
            uni(ind+1, ind);
        }

        res[sz[find(ind)]] = max(val, res[sz[find(ind)]]);
    }

    for(int i=n-1; i>=0; i--) {
        res[i] = max(res[i],  res[i+1]);
    }

    for(int i=0; i<n; i++) {
        cout << res[i] << endl;
    }

    return 0;
}