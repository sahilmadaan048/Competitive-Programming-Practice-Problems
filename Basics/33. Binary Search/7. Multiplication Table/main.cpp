// https://cses.fi/problemset/task/2422

#include <iostream>
using namespace std;

int countLessEqual(int mid, int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        count += min(mid / i, n);
    }
    return count;
}

int findMedian(int n) {
    int low = 1, high = n * n;
    int medianPos = (n * n + 1) / 2;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int count = countLessEqual(mid, n);
        
        if (count >= medianPos) {
            // Mid could be the answer, try smaller
            high = mid - 1;
        } else {
            // Mid is too small, try larger
            low = mid + 1;
        }
    }
    
    return low;
}

int main() {
    int n;
    cin >> n;
    
    cout << findMedian(n) << "\n";
    return 0;
}
