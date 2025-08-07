// https://vjudge.net/problem/CodeForces-903C


#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    // Sort the box sizes
    sort(a.begin(), a.end());
    
    // Priority queue to keep track of the minimum number of visible boxes
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for (int i = 0; i < n; ++i) {
        // If there are boxes in the queue and the smallest box in the queue can contain the current box
        if (!pq.empty() && pq.top() < a[i]) {
            // Replace the smallest visible box with the current one
            pq.pop();
        }
        // Add the current box to the priority queue (visible boxes)
        pq.push(a[i]);
    }
    
    // The number of visible boxes is the size of the priority queue
    cout << pq.size() << endl;
    
    return 0;
}