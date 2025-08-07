// https://vjudge.net/problem/Aizu-ITP2_1_B

#include<bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;
    int q;
    cin >> q;
    while (q--) {
        int query_type;
        cin >> query_type;
        
        if (query_type == 0) {
            // Push operation
            int d, x;
            cin >> d >> x;
            if (d == 0) {
                dq.push_front(x);
            } else {
                dq.push_back(x);
            }
        } else if (query_type == 1) {
            // Random access operation
            int p;
            cin >> p;
            cout << dq[p] << "\n";
        } else if (query_type == 2) {
            // Pop operation
            int d;
            cin >> d;
            if (d == 0) {
                dq.pop_front();
            } else {
                dq.pop_back();
            }
        }
    }
    return 0;
}
