// https://vjudge.net/problem/Aizu-ALDS1_3_B
#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q, n;
    cin >> Q >> n; // Corrected the order of reading input, since Q is the number of processes and n is the quantum time
    queue<pair<string, int>> q;

    // Reading the process details
    for (int i = 0; i < Q; i++) {
        string p;
        int num;
        cin >> p >> num;
        q.push({p, num});
    }

    int elapsed_time = 0; // To keep track of the total time elapsed

    // Simulate round-robin scheduling
    while (!q.empty()) {
        auto process = q.front();
        q.pop();

        string name = process.first;
        int remaining_time = process.second;

        if (remaining_time > n) {
            // If the remaining time is more than the quantum, process for 'n' time units
            elapsed_time += n;
            q.push({name, remaining_time - n}); // Put the process back in the queue with reduced time
        } else {
            // If the remaining time is less than or equal to the quantum, complete the process
            elapsed_time += remaining_time;
            cout << name << " " << elapsed_time << "\n"; // Print the process name and the finishing time
        }
    }

    return 0;
}
