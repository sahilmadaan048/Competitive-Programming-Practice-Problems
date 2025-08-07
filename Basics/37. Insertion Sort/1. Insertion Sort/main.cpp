// https://vjudge.net/problem/Aizu-ALDS1_1_A


#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& A) {
    int N = A.size();
    for (int i = 1; i < N; ++i) {
        int key = A[i];
        int j = i - 1;
        // Move elements of A[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
        // Print the intermediate sequence after each insertion
        for (int k = 0; k < N; ++k) {
            cout << A[k];
            if (k < N - 1) cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    for(auto ele: A) cout << ele << " ";
    cout << "\n";

    // Perform insertion sort and trace the intermediate results
    insertionSort(A);

    return 0;
}
