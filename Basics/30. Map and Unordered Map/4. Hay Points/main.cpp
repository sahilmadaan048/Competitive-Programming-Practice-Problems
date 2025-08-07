// https://vjudge.net/problem/UVA-10295

#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    unordered_map<string, int> hay_points;  // Dictionary to store word-value pairs

    // Reading the Hay Point dictionary
    for (int i = 0; i < m; ++i) {
        string word;
        int value;
        cin >> word >> value;
        hay_points[word] = value;  // Store word and its corresponding value
    }

    cin.ignore();  // Ignore the newline after the last dictionary entry

    // Process each job description
    for (int i = 0; i < n; ++i) {
        long long total_salary = 0;
        string line;

        // Reading job description lines until a period is found
        while (getline(cin, line) && line != ".") {
            stringstream ss(line);  // Create a stringstream for each line
            string word;

            // Extract words from the line
            while (ss >> word) {
                // If the word exists in the dictionary, add its value to the total salary
                if (hay_points.find(word) != hay_points.end()) {
                    total_salary += hay_points[word];
                }
            }
        }

        cout << total_salary << endl;  // Output the computed total salary for the job description
    }

    return 0;
}
