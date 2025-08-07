// // https://codeforces.com/problemset/problem/454/B

// #include <bits/stdc++.h>
// using namespace std;
// #define ff(i,a,b) for(int i=a;i<b;i++)
// #define ci(n) cin>>n
// #define vi vector<int>
// #define sv(v) sort(v.begin(),v.end())
// #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// bool issorted(vi &temp) {
//     vi temp2 = temp;
//     sv(temp2);
//     return temp == temp2;
// }

// void solve() {
//     int n;
//     ci(n);
//     vi temp(n);
//     ff(i, 0, n) ci(temp[i]);
    
//     if (issorted(temp)) { // Check if already sorted
//         cout << "0\n";
//         return;
//     }

//     int cnt = 0;
//     vi temp2 = temp;
    
//     while (cnt < n) { 
//         int ele = temp2[n-1];
//         temp2.pop_back();
//         reverse(temp2.begin(), temp2.end());
//         temp2.push_back(ele);
//         reverse(temp2.begin(), temp2.end());
//         cnt++;

//         if (issorted(temp2)) {
//             cout << cnt << "\n";
//             return;
//         }
//     }
    
//     cout << "-1\n"; 
// }

// int main() {
//     fast;
//     int t = 1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// #define ff(i,a,b) for(int i=a;i<b;i++)
// #define ci(n) cin>>n
// #define vi vector<int>
// #define sv(v) sort(v.begin(),v.end())
// #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// void solve() {
//     int n;
//     ci(n);
//     vi a(n);
//     ff(i, 0, n) ci(a[i]);
//     int cnt = 0 , ind;
//     ff(i,0,n-1){
//     	if(a[i]>a[i+1]) ind = i; cnt++;
//     }
//     if(a[n-1]>a[0]) ind = n-1; cnt++;
//     if(cnt == 0) cout << "0\n";
//     if(cnt>1) cout << "-1\n";
//     else cout << n-1-ind << "\n";
//     return;
// }

// int main() {
//     fast;
//     int t = 1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


// //find the minimum index and then 
// //insert the elements from that min index till the ebd ubto the array 
// //the  insert the rest of the startung elements into the array also 
// //if the resultant array is sorted then we can sort this array and the no of operations it tajes
// //is the miniimum index we have calculated
// //if still it is not sorted then its impossible to do so then we can surely print -1

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, s, v(0);
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) if (a[i] > a[i + 1]) s = i, v++;
    if (a[n - 1] > a[0]) s = n - 1, v++;
    if (v == 0) cout << 0 << endl;
    else if (v > 1) cout << -1 << endl;
    else cout << n - 1 - s << endl;
    return 0;
}