// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     ll n;
//     cin >> n;
    
//     string ans = "";
//     while (n > 0) {
//         n--; // To handle the 1-based indexing (1 to 26)
//         int rem = n % 26;
//         ans += char(rem + 'a'); // Convert remainder to corresponding letter
//         n /= 26; // Move to the next digit in base-26
//     }
    
//     reverse(ans.begin(), ans.end()); // Reverse the result as we build it backwards
    
//     cout << ans << endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int solve(int a, int b, vector<int>& temp){
//   int sum = 0 ;
//   for(int i=0; i<temp.size(); i++){
//     if(temp[i] == a){
//       temp[i] = b;
//     }
//     sum += temp[i];
//   }
//   return sum;
// }

// int main(){
//   int n; cin >>n ;
//   vector<int> temp(n);
//   for(int i=0; i<n; i++) cin >> temp[i];
//   int q; cin >> q;
//   while(q--){
//     int a, b;
//     cin >> a>> b;
//     cout << solve(a,b,temp) << "\n";
//   }

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> temp(n);
//     unordered_map<int, int> freq;
//     int sum = 0;
    
//     for(int i = 0; i < n; i++) {
//         cin >> temp[i];
//         freq[temp[i]]++;
//         sum += temp[i];
//     }

//     int q;
//     cin >> q;
//     while(q--) {
//         int a, b;
//         cin >> a >> b;

//         if (a != b) { // Only do work if `a` and `b` are different
//             if (freq.count(a)) {
//                 // Update the sum and frequency map
//                 sum -= freq[a] * a;
//                 sum += freq[a] * b;
//                 freq[b] += freq[a];
//                 freq.erase(a);
//             }
//         }
//         cout << sum << "\n";
//     }

//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <chrono>
// #include <random>
// #include <cassert>

// std::mt19937 rng((int) std::chrono::steady_clock::now().time_since_epoch().count());

// int main() {
//   std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
//   int n;
//   std::cin >> n;
//   const int ms = 100100;
//   std::vector<int> ans(ms, 0);
//   long long sum = 0;
//   while(n--) {
//     int x;
//     std::cin >> x;
//     ans[x]++;
//     sum += x;
//   }
//   std::cin >> n;
//   while(n--) {
//     int a, b;
//     std::cin >> a >> b;
//     ans[b] += ans[a];
//     sum += (b - a) * (long long) ans[a];
//     ans[a] = 0;
//     std::cout << sum << '\n';
//   }
// }

// #include<bits/stdc++.h>
// using namespace std;
// long long res;
// #define SZ(a) int((a).size())
// #define REPE(i,n)  for(int i=0;i<=(n);++i)

// void solve() {
//   int N = SZ(S);
//   ModInt res = 0;
//   REPE(i, K) {
//     res += ModInt(26).pow(i) * ModInt(25).pow(K - i) * choose(K - i + N - 1, K - i);
//   }
//   cout << res << endl;
// }
// void sol() {
//   string S; int K;
//   cout << setprecision(12) << fixed;
//   cin >> K >> S;
//   solve();
// }

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
// // #ifndef ONLINE_JUDGE
//   // freopen("input.txt", "r", stdin);
//   // freopen("output.txt", "w", stdout);
// // #endif
//   int t = 1;
//   //cin >> t;
//   while (t--) {
//     sol();
//   }

//   return 0;
// }
               

// https://codeforces.com/contest/1872/problem/E

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        string s;
        cin >> s;
        
        int q;
        cin >> q;
        
        // Initialize XORs for s[i] = 0 and s[i] = 1
        int xor0 = 0, xor1 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') xor0 ^= a[i];
            else xor1 ^= a[i];
        }
        
        while (q--) {
            int tp;
            cin >> tp;
            
            if (tp == 1) {
                int l, r;
                cin >> l >> r;
                l--, r--; // convert to 0-based index
                
                // Flip the range [l, r]
                for (int i = l; i <= r; i++) {
                    if (s[i] == '0') {
                        xor0 ^= a[i]; // Remove from XOR of 0s
                        xor1 ^= a[i]; // Add to XOR of 1s
                        s[i] = '1';   // Flip 0 -> 1
                    } else {
                        xor1 ^= a[i]; // Remove from XOR of 1s
                        xor0 ^= a[i]; // Add to XOR of 0s
                        s[i] = '0';   // Flip 1 -> 0
                    }
                }
            } else if (tp == 2) {
                int g;
                cin >> g;
                if (g == 0) cout << xor0 << "\n" ;
                else cout << xor1 << "\n" ;
            }
        }
    }
    
    return 0;
}
