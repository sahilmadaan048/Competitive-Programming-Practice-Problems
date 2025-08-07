// https://vjudge.net/problem/Gym-381668C


#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0);

int main() {
    fast;
    int t; cin >> t;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    while(t--) {
        string s; cin >> s;
        int n;
        
        if (s == "push") {
            cin >> n;
            pq.push(n);
        } else if (s == "top") {
            if (pq.empty()) {
                cout << "Priority queue is empty\n"; 
            } else {
                cout << pq.top() << "\n";
            }
        } else if (s == "pop") {
            if (pq.empty()) {
                cout << "Priority queue is empty\n";
            } else {
                pq.pop();
            }
        }
    }
    return 0;
}
