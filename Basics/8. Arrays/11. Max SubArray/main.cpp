// https://vjudge.net/problem/Gym-287310L

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int N;
        cin >> N; // Read the number of elements for the test case
        
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i]; // Read the array elements
        }

        // Store the results of max elements for each sub-array
        vector<int> result;

        // Generate all sub-arrays and find their maximum
        for (int i = 0; i < N; i++) {
            int currentMax = A[i];
            for (int j = i; j < N; j++) {
                currentMax = max(currentMax, A[j]);
                result.push_back(currentMax); // Store the maximum of the sub-array A[i..j]
            }
        }

        // Print the result for the current test case
        for (int maxValue : result) {
            cout << maxValue << " ";
        }
        cout << endl; // New line after each test case
    }

    return 0;
}
