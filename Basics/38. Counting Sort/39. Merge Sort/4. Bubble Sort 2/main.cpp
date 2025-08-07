// // https://vjudge.net/problem/SPOJ-BUBBLESORT#google_vignette


#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define ulli unsigned long long int 
#define li long int 
#define ff(i,a,b) for(int i=a;i<b;i++)
#define w(t) while(--t >= 0)
#define vi vector<int>
#define ci(n) cin >> n
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

const int MOD = 1000000007;

void solve() {
    int n; 
    cin >> n;
    vi a(n);
    ff(i, 0, n) ci(a[i]); 

    int cnt = 0; 
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                ++cnt; 
                cnt %= MOD; 
            }
        }
    }
    cout << cnt << "\n"; 
}

int main() {
    fast; 
    int t; 
    cin >> t; 
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": "; 
        solve(); 
    }
    return 0;
}

// // https://vjudge.net/problem/SPOJ-BUBBLESORT#google_vignette


// #include <bits/stdc++.h>
// using namespace std;

// #define vi vector<int>
// #define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

// int merge_and_count(vi &arr, int left, int mid, int right) {
//     int count = 0;
//     int i = left; 
//     int j = mid + 1;
//     vector<int> temp;

//     while (i <= mid && j <= right) {
//         if (arr[i] <= arr[j]) {
//             temp.push_back(arr[i++]);
//         } else {
//             temp.push_back(arr[j++]);
//             count += (mid - i + 1); // Count inversions
//         }
//     }

//     while (i <= mid) temp.push_back(arr[i++]);
//     while (j <= right) temp.push_back(arr[j++]);

//     for (int k = left; k <= right; k++) {
//         arr[k] = temp[k - left]; // Copy sorted subarray back
//     }

//     return count;
// }

// int merge_sort_and_count(vi &arr, int left, int right) {
//     int count = 0;
//     if (left < right) {
//         int mid = left + (right - left) / 2;
//         count += merge_sort_and_count(arr, left, mid);
//         count += merge_sort_and_count(arr, mid + 1, right);
//         count += merge_and_count(arr, left, mid, right);
//     }
//     return count;
// }

// void solve() {
//     int n; 
//     cin >> n;
//     vi a(n);
//     for (int i = 0; i < n; i++) cin >> a[i];

//     int cnt = merge_sort_and_count(a, 0, n - 1);
//     cout << cnt << "\n"; 
// }

// int main() {
//     fast; 
//     int t; 
//     cin >> t; 
//     for (int i = 1; i <= t; i++) {
//         cout << "Case " << i << ": "; 
//         solve(); 
//     }
//     return 0;
// }
// // 