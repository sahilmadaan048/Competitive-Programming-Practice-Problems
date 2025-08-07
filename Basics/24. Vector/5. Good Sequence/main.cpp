// https://vjudge.net/problem/AtCoder-arc087_a

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    unordered_map<int, int> freq;
    
    // Read the sequence and count frequencies
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
    
    int total_removals = 0;
    
    // Calculate the number of elements to remove
    for (auto pair : freq) {
        int value = pair.first, count = pair.second;
        if (count > value) {
            // Remove excess elements
            total_removals += count - value;
        } else if (count < value) {
            // Remove all occurrences of this number
            total_removals += count;
        }
    }
    
    cout << total_removals << endl;
    return 0;
}
