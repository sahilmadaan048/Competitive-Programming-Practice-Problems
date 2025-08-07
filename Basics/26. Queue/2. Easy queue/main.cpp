// https://vjudge.net/problem/SPOJ-QUEUEEZ

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;

    queue<long long> q;
    while (T--) {
        int query_type;
        cin >> query_type;
        
        if (query_type == 1) {
            long long n;
            cin >> n;
            q.push(n);  // Enqueue operation
        } else if (query_type == 2) {
            if (!q.empty()) {
                q.pop();  // Dequeue operation
            }
        } else if (query_type == 3) {
            if (!q.empty()) {
                cout << q.front() << "\n";  // Print the front element
            } else {
                cout << "Empty!\n";  // Print "Empty" if queue is empty
            }
        }
    }

    return 0;
}
