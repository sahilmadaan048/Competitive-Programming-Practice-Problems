// https://vjudge.net/problem/SPOJ-HRECURS

#include<bits/stdc++.h>
using namespace std;

int solve(int i, int n, int &sum, vector<int>& temp) {
    if(i >= n) {
        return sum; // Base case: return sum when all elements are processed
    }
    sum += temp[i]; // Add current element to sum
    return solve(i + 1, n, sum, temp); // Recursively call the function and return the result
}

int main()  {
    int t; cin >> t;
    int ind = 0;
    while(t--) {
        ind++;
        int n; cin >> n;
        vector<int> temp(n);
        for(int i = 0; i < n; i++) cin >> temp[i];
        int sum = 0;
        int ans = solve(0, n, sum, temp); // Start recursion from index 0
        cout << "Case " << ind << ": " << ans << endl; 
    }

    return 0;
}


