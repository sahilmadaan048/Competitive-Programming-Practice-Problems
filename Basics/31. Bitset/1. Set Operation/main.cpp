// // https://vjudge.net/problem/POJ-2443#google_vignette

#include <iostream>
#include <bitset>
#include <unordered_map>
using namespace std;

const int MAXN = 10000;  // The maximum number of distinct elements
const int MAXSETS = 5000; // Assuming N will not exceed this value

int main() {
    int N;  // Number of sets
    cin >> N;

    unordered_map<int, bitset<MAXSETS>> elementSets;  // Map from element to bitset

    // Input sets and their elements
    for (int k = 0; k < N; ++k) {
        int C;  // Number of elements in set S(k)
        cin >> C;
        for (int i = 0; i < C; ++i) {
            int elem;
            cin >> elem;
            elementSets[elem].set(k);  // Set bit k to 1 for element elem
        }
    }

    int Q;  // Number of queries
    cin >> Q;

    // Process each query
    for (int q = 0; q < Q; ++q) {
        int i, j;  // Elements i and j in the query
        cin >> i >> j;

        // Check if there is any common set using bitwise AND operation
        if ((elementSets[i].find() & elementSets[j]).any()) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin >> n;
//     bitset<32> binary(n);
//     cout << binary << "\n";
// }


// #include<iostream>
// #include<map>
// #include<vector>
// using namespace std;
// const int N = 1e9+10;

// int main(){
//     vector<int> temp = {1,2,3,4};
//     unordered_map<int,int> mp;
//     for(int i=0; i<4; i++){
//         mp[i] = temp[i];
//     }
//     for(int i=0; i<mp.size(); i++){
//         cout << mp[i] << " ";
//     }
//     cout << N << "\n";
// }