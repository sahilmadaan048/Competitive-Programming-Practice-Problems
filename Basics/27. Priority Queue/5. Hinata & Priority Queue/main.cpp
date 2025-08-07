// https://vjudge.net/problem/HackerRank-hinata-priority-queue

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0);

int main() {
    fast;
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    // Min-heap to maintain the top 3 largest distinct elements
    priority_queue<int, vector<int>, greater<int>> minHeap;
    set<int> distinctElements; // To keep track of distinct elements
    
    for(int i = 0; i < N; ++i) {
        // Insert current element into the set and min-heap
        if (distinctElements.find(A[i]) == distinctElements.end()) {
            distinctElements.insert(A[i]);
            minHeap.push(A[i]);
            
            // Ensure the heap only contains the 3 largest distinct elements
            if (minHeap.size() > 3) {
                distinctElements.erase(minHeap.top());
                minHeap.pop();
            }
        }
        
        // Output the product of the top 3 largest distinct elements
        if (distinctElements.size() < 3) {
            cout << "-1\n";
        } else {
            vector<int> topThree;
            while (!minHeap.empty()) {
                topThree.push_back(minHeap.top());
                minHeap.pop();
            }
            // Push elements back to the min-heap
            for (int num : topThree) {
                minHeap.push(num);
            }
            cout << topThree[0] * topThree[1] * topThree[2] << "\n";
        }
    }
    
    return 0;
}
