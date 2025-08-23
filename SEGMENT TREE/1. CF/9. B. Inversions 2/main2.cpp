    #include <bits/stdc++.h>
    using namespace std;

    struct SegTree {
        int n;
        vector<int> tree;

        void init(int n_) {
            n = 1;
            while(n < n_) n *= 2;
            tree.assign(2*n, 0);
        }

        void build(int n_) {
            init(n_);
            for(int i=0;i<n_;i++) tree[n+i] = 1; // all free
            for(int i=n-1;i>0;i--) tree[i] = tree[2*i] + tree[2*i+1];
        }

        void update(int pos) { // mark position as used (0)
            int i = pos + n;
            tree[i] = 0;
            for(i/=2;i>=1;i/=2) tree[i] = tree[2*i] + tree[2*i+1];
        }

        int kth(int k) { // find k-th free position (1-based k)
            int i = 1;
            while(i < n) {
                if(tree[2*i] >= k) i = 2*i;
                else {
                    k -= tree[2*i];
                    i = 2*i+1;
                }
            }
            return i - n; // position index
        }
    };

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        SegTree st;
        st.build(n);

        vector<int> ans(n);
        for(int i=n-1;i>=0;i--) {
            int pos = st.kth(a[i]+1); // find position
            ans[pos] = i+1;           // place number
            st.update(pos);           // mark used
        }

        for(int x : ans) cout << x << " ";
        cout << "\n";
    }
