// https://vjudge.net/problem/HackerRank-cpp-sets

#include <iostream>
#include <set>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    set<int> s; // Declare a set to store integers

    while (Q--) {
        int y, x;
        cin >> y >> x;

        if (y == 1) {
            // Insert x into the set
            s.insert(x);
        } else if (y == 2) {
            // Erase x from the set
            s.erase(x);
        } else if (y == 3) {
            // Check if x is present in the set
            if (s.find(x) != s.end()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
