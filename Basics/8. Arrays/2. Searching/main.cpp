// https://vjudge.net/problem/Gym-287310B


#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the number of elements

    vector<int> A;
    for (int i = 0; i < N; i++) {
    	int a; cin >> a;
        A.push_back(a); // Read the array elements
    }

    int X;
    cin >> X; // Read the number to search for

    // Initialize index as -1, which means the number is not found
    // int index = -1;/
    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            cout << i << endl;
            return 0;
            // break; // Exit loop after finding the first occurrence
        }
    }

    cout << -1 << endl; // Output the index (or -1 if not found)

    return 0;
}
