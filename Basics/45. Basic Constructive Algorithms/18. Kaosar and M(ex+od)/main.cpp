// https://eolymp.com/problems/12362

// Author - sahilmadaan048

#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = (a); i < (b); ++i)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        if (k >= n) {
            cout << -1 <<endl;
            continue;
        }
        if (k == 0) {
            rep(i, 1, n + 1) cout << i <<  " ";
            cout <<endl;
        } else if (k == 1) {
            rep(i, 2, n + 1) cout << i << " ";
            cout << 1 <<endl;
        } else {
            vi ans;
            ans.push_back((int)k);
            rep(i, 1, n + 1) {
                if (i != k) ans.push_back(i);
            }
            rep(i, 0, n) {
                cout << ans[i] <<  " ";
            }
            cout <<endl;
        }
    }

    return 0;
}
