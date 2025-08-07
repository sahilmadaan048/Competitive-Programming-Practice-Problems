// https://vjudge.net/problem/SPOJ-ADAQUEUE#google_vignette

#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;
    bool is_reversed = false;
    int Q;
    cin >> Q;

    while (Q--) {
        string command;
        cin >> command;
        
        if (command == "back") {
            if (dq.empty()) {
                cout << "No job for Ada?" << endl;
            } else {
                if (is_reversed) {
                    cout << dq.front() << endl;
                    dq.pop_front();
                } else {
                    cout << dq.back() << endl;
                    dq.pop_back();
                }
            }
        } else if (command == "front") {
            if (dq.empty()) {
                cout << "No job for Ada?" << endl;
            } else {
                if (is_reversed) {
                    cout << dq.back() << endl;
                    dq.pop_back();
                } else {
                    cout << dq.front() << endl;
                    dq.pop_front();
                }
            }
        } else if (command == "reverse") {
            is_reversed = !is_reversed;
        } else if (command == "push_back") {
            int N;
            cin >> N;
            if (is_reversed) {
                dq.push_front(N);
            } else {
                dq.push_back(N);
            }
        } else if (command == "toFront") {
            int N;
            cin >> N;
            if (is_reversed) {
                dq.push_back(N);
            } else {
                dq.push_front(N);
            }
        }
    }
    
    return 0;
}
