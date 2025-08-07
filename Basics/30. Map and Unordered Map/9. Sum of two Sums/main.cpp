// https://cses.fi/problemset/task/1640

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, target; 
    cin >> n >> target;
    vector<pair<int, int>> temp(n); 

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        temp[i] = {x, i + 1}; 
    }

    sort(temp.begin(), temp.end());

    int i = 0, j = n - 1;
    
    
    while (i < j) {
        int sum = temp[i].first + temp[j].first;
        if (sum == target) {
            cout << temp[i].second << " " << temp[j].second << endl;
            return 0; 
        } else if (sum < target) {
            i++;
        } else {
            j--;
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
