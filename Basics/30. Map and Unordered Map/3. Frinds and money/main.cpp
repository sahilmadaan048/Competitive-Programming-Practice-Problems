// https://vjudge.net/problem/Gym-381668D
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, q;
    cin >> N >> q;

    unordered_map<string, int> mp;

    // Read the initial money of each friend
    for (int i = 0; i < N; ++i) {
        string name;
        int money;
        cin >> name >> money;
        mp[name] = money;
    }

    // Process each query
    while (q--) {
        int type;
        cin >> type;
        string name;
        cin >> name;

        if (type == 1) {
            int y;
            cin >> y;
            mp[name] += y;  // Increase the money of the friend
        } else if (type == 2) {
            cout << mp[name] << "\n";  // Print the current money of the friend
        }
    }

    return 0;
}

