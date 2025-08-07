// https://vjudge.net/problem/DMOJ-sort1

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

void print_(const vector<int>& temp){
    for(auto ele : temp) cout << ele << " ";
}

int main() {
    fast;
    int n; cin >> n;
    vector<int> temp(n);
    for(int i = 0; i < n; i++) cin >> temp[i];
    print_(temp);
	cout << "\n";
    // Bubble Sort with printing
    for(int i = 0; i < n-1; i++) { // Fix: loop runs from 0 to n-2
        for(int j = 0; j < n-i-1; j++) { // Fix: inner loop goes up to n-i-2
            if(temp[j] > temp[j+1]) {
                swap(temp[j], temp[j+1]);
                print_(temp);
                cout << "\n";
            }
        }
    }
    return 0;
}
