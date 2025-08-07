// https://vjudge.net/problem/Gym-287310C
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the number of elements

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i]; // Read the array elements
    }

    for (int i = 0; i < N; i++) {
        if (A[i] > 0) {
            A[i] = 1; // Replace positive numbers with 1
        } else if (A[i] < 0) {
            A[i] = 2; // Replace negative numbers with 2
        }
        // Zero remains unchanged if it's present, do nothing for it
    }

    // Print the transformed array
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
