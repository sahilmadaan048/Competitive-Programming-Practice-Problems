// https://vjudge.net/problem/CodeForces-258A


#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;
    int n = a.size();
    
    bool removed = false;
    string result = "";

    // Iterate over each character
    for (int i = 0; i < n; i++) {
        if (!removed && a[i] == '0') {
            removed = true;  // Skip this '0'
            continue;
        }
        result += a[i];  // Add other characters to the result
    }

    // If no '0' was found, remove the last character
    if (!removed) {
        result = result.substr(0, n - 1);
    }

    cout << result << endl;

    return 0;
}
