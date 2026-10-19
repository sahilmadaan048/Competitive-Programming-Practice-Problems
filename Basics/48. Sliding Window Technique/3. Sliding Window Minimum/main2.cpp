// https://cses.fi/boi24/task/3221/

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

    int n, k;
    cin >> n >> k;
    ll x, a, b, c;
    cin >> x >> a >> b >> c;

    vi v(n);
    v[0] = (int)x;
    rep(i, 1, n) {
        v[i] = (int)((1LL * v[i-1] * a + b) % c);
    }

    deque<int> dq;
    ll ans = 0;
    rep(i, 0, n) {
        if (!dq.empty() && dq.front() <= i - k) dq.pop_front();
        
        while(!dq.empty() && v[dq.back()] >= v[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
        
        if(i >= k - 1) {
            ans ^= v[dq.front()];
        }
    }

    cout << ans << endl;
    return 0;
}