// https://vjudge.net/problem/Gym-287310U

#include <iostream>
#include <vector>
using namespace std;

bool isSubsequence(vector<int>& A, vector<int>& B) {
    int n = A.size();
    int m = B.size();
    
    int i = 0, j = 0;
    
    // Use two pointers to check if B is a subsequence of A
    while (i < n && j < m) {
        if (A[i] == B[j]) {
            j++; // Move pointer for B if there's a match
        }
        i++; // Always move pointer for A
    }
    
    // If we have traversed the entire B, it means B is a subsequence
    return j == m;
}

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N), B(M);
    
    // Input array A
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    // Input array B
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }
    
    // Check if B is a subsequence of A
    if (isSubsequence(A, B)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
