// https://codeforces.com/edu/course/2/lesson/4/3/practice/contest/274545/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long item;

struct segtree {
    int size;
    vector<item> values;

    item NEUTRAL_ELEMENT = 0;

    item merge(item a, item b) {
        return a + b;
    }
    
    item single(int v) {
        return v;
    }

    void init(int n) {
        size = 1;
        while(size < n) size *= 2;
        values.assign(2*size, 0LL);
    }

    void set(int i, int v, int x, int lx, int rx) {
        if(rx - lx == 1) {
            values[x] = v;
            return;
        }
        int m = (lx + rx)/2;
        if(i < m) {
            set(i, v, 2*x+1, lx, m);
        } else {
            set(i, v, 2*x+2, m, rx);
        }
        values[x] = merge(values[2*x+1], values[2*x+2]);
    }
    
    void set(int i, int v) {
        set(i, v, 0, 0, size);
    }

    item get(int i, int x, int lx, int rx) {
        if(rx - lx == 1) return values[x];
        int m = (lx + rx)/2;
        if(i < m) return get(i, 2*x+1, lx, m);
        else return get(i, 2*x+2, m, rx);
    }

    item get(int i) {
        return get(i, 0, 0, size);
    }

    item calc(int l, int r, int x, int lx, int rx) {
        if(lx >= r || l >= rx) return NEUTRAL_ELEMENT;
        if(lx >= l && rx <= r) return values[x];
        int m = (lx + rx)/2;
        item s1 = calc(l, r, 2*x+1, lx, m);
        item s2 = calc(l, r, 2*x+2, m, rx);
        return merge(s1, s2);
    }
    
    item calc(int l, int r) {
        return calc(l, r, 0, 0, size);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> p(n);
    for(int i=0; i<n; i++) cin >> p[i];

    segtree st;
    st.init(n+1); // since permutation is 1..n

    vector<long long> ans(n);

    for(int i=0; i<n; i++) {
        ans[i] = st.calc(p[i]+1, n+1);  // count greater elements before
        int curr = st.get(p[i]);
        st.set(p[i], curr + 1);         // add current element
    }

    for(int i=0; i<n; i++) cout << ans[i] << " ";
    cout << "\n";

    return 0;
}
