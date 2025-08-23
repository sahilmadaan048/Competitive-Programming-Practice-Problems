// https://codeforces.com/edu/course/2/lesson/4/3/practice/contest/274545/problem/B

#include <bits/stdc++.h>
using namespace std;

struct segtree {
    int n;
    vector<int> tree;
    segtree(int n) : n(n), tree(4*n, 0) {}

    void build(int x, int lx, int rx) {
        if(rx - lx == 1) {
            tree[x] = 1;
            return;
        } 
        int m = (lx + rx) / 2;
        build(2*x + 1, lx, m);
        build(2*x + 2, m, rx);
        tree[x] = tree[2*x+1] + tree[2*x+2];
    }

    void build() { build(0, 0, n); }

    void update(int idx, int x, int lx, int rx) {
        if(rx-lx == 1) {
            tree[x] = 0;
            return;
        }
        int m = (lx+rx)/2;
        if(idx < m) update(idx, 2*x+1, lx, m);
        else update(idx, 2*x+2, m, rx);
        tree[x] = tree[2*x+1] + tree[2*x+2];
    }

    void update(int idx) { update(idx, 0, 0, n); }

    int kth(int k, int x, int lx, int rx) {
        if (rx - lx == 1) return lx;
        int m = (lx + rx) / 2;
        if (tree[2*x+1] > k) return kth(k, 2*x+1, lx, m);
        else return kth(k - tree[2*x+1], 2*x+2, m, rx);
    }
    int kth(int k) { return kth(k, 0, 0, n); }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    segtree st(n);
    st.build();
    
    vector<int> perm(n);
    for (int i=0; i<n; i++) {
        int rank = i - a[i];   // convert inversion count to order
        int idx = st.kth(rank); // find rank-th available number
        perm[i] = idx + 1;     // numbers are 1..n
        st.update(idx);
    }

    for (int i=0; i<n; i++) cout << perm[i] << " ";
    cout << "\n";
}