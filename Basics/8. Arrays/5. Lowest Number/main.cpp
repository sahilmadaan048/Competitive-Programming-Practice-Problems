// https://vjudge.net/problem/Gym-287310E

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

    // Initialize minNumber with the first element and minPosition as 0 (0-based index)
    int minNumber = A[0];
    int minPosition = 0;

    // Iterate through the array to find the minimum number and its position
    for (int i = 1; i < N; i++) {
        if (A[i] < minNumber) {
            minNumber = A[i];
            minPosition = i;
        }
    }

    // Output the lowest number and its position (convert to 1-indexed)
    cout << minNumber << " " << minPosition + 1 << endl;

    return 0;
}
