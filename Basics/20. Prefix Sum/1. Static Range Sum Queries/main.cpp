// https://cses.fi/problemset/task/1646
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // Disable synchronization with C I/O
    cin.tie(nullptr); // Untie cin from cout for faster I/O

    int n, q;
    cin >> n >> q;

    vector<long long> prefixSum(n);
    
    // Read the first element
    cin >> prefixSum[0];
    
    // Compute prefix sums
    for (int i = 1; i < n; ++i) {
        long long x;
        cin >> x;
        prefixSum[i] = prefixSum[i - 1] + x;
    }

    while (q--) {
        int a, b;
        cin >> a >> b;
        // Convert 1-based index to 0-based
        cout << (a == 1 ? prefixSum[b - 1] : prefixSum[b - 1] - prefixSum[a - 2]) << '\n';
    }
    
    return 0;
}




// https://cses.fi/problemset/task/1647


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr); // Faster I/O

//     int n, q;
//     cin >> n >> q;

//     vector<int> temp(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> temp[i];
//     }


//     // Build the prefix minimum array
//     // vector<int> prefixMin(n);
//     // prefixMin[0] = arr[0];
//     // for (int i = 1; i < n; ++i) {
//     //     prefixMin[i] = min(prefixMin[i - 1], arr[i]);
//     // }

//     while (q--) {
//         int a, b;
//         cin >> a >> b;
//         // Queries are 1-based, adjust indices
//         // if (a == 1) {
//         //     cout << prefixMin[b - 1] << '\n';
//         // } else {
//         //     cout << min(prefixMin[b - 1], arr[a - 1]) << '\n';
//         // }
//         a--, b--;
//         int mini = temp[a];
//         for(int i=a; i<=b; i++){
//         	mini = min(temp[i] ,mini);
//         }
//         cout << mini << '\n';
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, q;
//     cin >> n >> q;
    
//     vector<int> arr(n);
//     vector<int> prefixMin(n);
    
//     // Read the array values
//     cin >> arr[0];
//     prefixMin[0] = arr[0];
//     for (int i = 1; i < n; ++i) {
//         cin >> arr[i];
//         prefixMin[i] = min(prefixMin[i - 1], arr[i]);
//     }

//     while (q--) {
//         int a, b;
//         cin >> a >> b;
//         // Convert 1-based indices to 0-based
//         a--; b--;

//         // Compute the minimum in the range [a, b]
//         int minValue = arr[a];
//         for (int i = a; i <= b; ++i) {
//             minValue = min(minValue, arr[i]);
//         }
//         cout << minValue << '\n';
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, q;
//     cin >> n >> q;
    
//     vector<int> arr(n);
//     vector<int> prefixMin(n);
//     vector<int> suffixMin(n);

//     // Read the array values
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }

//     // Build prefix minimum array
//     prefixMin[0] = arr[0];
//     for (int i = 1; i < n; ++i) {
//         prefixMin[i] = min(prefixMin[i - 1], arr[i]);
//     }

//     // Build suffix minimum array
//     suffixMin[n - 1] = arr[n - 1];
//     for (int i = n - 2; i >= 0; --i) {
//         suffixMin[i] = min(suffixMin[i + 1], arr[i]);
//     }

//     while (q--) {
//         int a, b;
//         cin >> a >> b;
//         // Convert 1-based indices to 0-based
//         a--; b--;

//         // Query the minimum in the range [a, b]
//         // Use prefix and suffix arrays to find the minimum in constant time
//         int minValue = arr[a];
//         if (a == b) {
//             minValue = arr[a];
//         } else {
//             minValue = min(prefixMin[b], suffixMin[a]);
//         }
        
//         cout << minValue << '\n';
//     }

//     return 0;
// }
