// https://vjudge.net/problem/Gym-287310P#google_vignette

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

    int operations = 0;

    // Keep performing the operation as long as all numbers are even
    while (true) {
        bool allEven = true;

        // Check if all numbers are even
        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                allEven = false;
                break;
            }
        }

        // If all numbers are even, divide each by 2 and increment the operation count
        if (allEven) {
            for (int i = 0; i < N; i++) {
                A[i] /= 2;
            }
            operations++;
        } else {
            break; // Stop if we find any odd number
        }
    }

    // Output the total number of operations performed
    cout << operations << endl;

    return 0;
}
