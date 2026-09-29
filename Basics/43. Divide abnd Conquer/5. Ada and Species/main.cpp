// https://www.spoj.com/problems/ADACABAA/

// Author - sahilmadaan048

// https://www.spoj.com/problems/ADACABAA/

#include <bits/stdc++.h>
#define int long long

using namespace std;

struct Point {
    int x, y, z, w, id;
};

const int INF = 1e18;

struct Fenwick {
    int n;
    vector<int> bit;

    Fenwick(int n) {
        this->n = n;
        bit.assign(n + 1, INF);
    }

    void update(int pos, int val) {
        while(pos <= n) {
            bit[pos] = min(bit[pos], val);
            pos += pos & -pos;
        }
    }

    int query(int pos) {
        int ans = INF;

        while(pos > 0) {
            ans = min(ans, bit[pos]);
            pos -= pos & -pos;
        }

        return ans;
    }

    void clear(vector<int>& used) {
        for(int pos : used) {
            int x = pos;

            while(x <= n) {
                bit[x] = INF;
                x += x & -x;
            }
        }

        used.clear();
    }
};

int n;
vector<Point> a;
vector<int> bad;
Fenwick *fw;

void cdq(int l, int r) {
    if(l >= r)
        return;

    int mid = (l + r) / 2;

    cdq(l, mid);
    cdq(mid + 1, r);

    vector<int> left, right;

    for(int i = l; i <= mid; i++)
        left.push_back(i);

    for(int i = mid + 1; i <= r; i++)
        right.push_back(i);

    sort(left.begin(), left.end(), [&](int i, int j) {
        return a[i].y < a[j].y;
    });

    sort(right.begin(), right.end(), [&](int i, int j) {
        return a[i].y < a[j].y;
    });

    int p = 0;
    vector<int> used;

    for(int idx : right) {

        // All inserted points have:
        // X smaller (because they are in left half)
        // Y smaller
        while(p < (int)left.size() &&
              a[left[p]].y < a[idx].y) {

            int z = a[left[p]].z;

            fw->update(z, a[left[p]].w);

            used.push_back(z);

            p++;
        }

        /*
            We need:

                Z(left) < Z(right)
                W(left) < W(right)

            Fenwick is indexed by Z.

            query(z - 1) gives minimum W among
            points having Z < current Z.
        */

        int minW = fw->query(a[idx].z - 1);

        if(minW < a[idx].w) {
            bad[a[idx].id] = 1;
        }
    }

    fw->clear(used);
}

void solve() {
    cin >> n;

    a.resize(n);
    bad.assign(n, 0);

    for(int i = 0; i < n; i++) {
        cin >> a[i].x
            >> a[i].y
            >> a[i].z
            >> a[i].w;

        a[i].id = i;
    }

    /*
        Sort by X ascending.

        Therefore:
            left half -> smaller X
            right half -> larger X

        A left point can potentially make a right point
        worse.
    */
    sort(a.begin(), a.end(), [](const Point& A, const Point& B) {
        return A.x < B.x;
    });

    fw = new Fenwick(n);

    cdq(0, n - 1);

    int ans = 0;

    for(int i = 0; i < n; i++) {
        if(!bad[i])
            ans++;
    }

    cout << ans << '\n';

    delete fw;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}