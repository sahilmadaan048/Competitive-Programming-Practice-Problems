// https://vjudge.net/problem/Aizu-ALDS1_9_C


#include <bits/stdc++.h>
using namespace std;

int main() {
    string command;
    priority_queue<int, vector<int>, less<int>> pq;  // Max-heap by default

    while (cin >> command && command != "end") {
        if (command == "insert") {
            int k;
            cin >> k;
            pq.push(k);
        } else if (command == "extract") {
            if (!pq.empty()) {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
    }

    return 0;
}