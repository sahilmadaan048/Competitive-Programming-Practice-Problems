// // // // // // https://cses.fi/problemset/task/1085



// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;
// // // // // #define ll             long long int 
// // // // // #define ulli           unsigned long long int 
// // // // // #define li             long int 
// // // // // #define ff(i,a,b)      for(int i=a;i<b;i++)
// // // // // #define fb(i,b,a)      for(int i=b;i>=a;i--)
// // // // // #define w(t)           while(--t >= 0)
// // // // // #define l(s)           s.length()
// // // // // #define ci(n)          cin>>n;
// // // // // #define fast           ios_base::sync_with_stdio(false);
// // // // // #define sa(a,n)        sort(a,a+n)
// // // // // #define sv(v)          sort(v.begin(),v.end())
// // // // // #define cy             cout<<"YES\n"
// // // // // #define cn             cout<<"NO\n"
// // // // // #define nl             cout<<"\n"
// // // // // #define minus          cout<<"-1\n";
// // // // // #define vi             vector<int>
// // // // // #define pb             push_back
// // // // // #define tc             int t; cin>>t;
// // // // // #define pp             pair<int,int>
// // // // // #define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
// // // // // #define mod            1000000007
// // // // // #define co(n)          cout<<n;
// // // // // #define ret            return 0
// // // // // #define mi             map<int,int>
// // // // // #define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
// // // // // #define forn(i, n)     ff(i, 0, n)
// // // // // #define sz(v)          int((v).size())

// // // // // void solve(){
// // // // // 	int n,k; cin >> n >> k;
// // // // // 	vi temp(n);
// // // // // 	for(int i=0; i<n; i++) cin>>temp[i];

// // // // // }

// // // // // int main(){
// // // // // 	fast;
// // // // // 	int t=1;
// // // // // 	while(t--){
// // // // // 		solve();
// // // // // 	}
// // // // // 	return 0;
// // // // // }




// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;
// // // // // #define ll             long long int 
// // // // // #define ulli           unsigned long long int 
// // // // // #define li             long int 
// // // // // #define ff(i,a,b)      for(int i=a;i<b;i++)
// // // // // #define fb(i,b,a)      for(int i=b;i>=a;i--)
// // // // // #define w(t)           while(--t >= 0)
// // // // // #define l(s)           s.length()
// // // // // #define ci(n)          cin>>n;
// // // // // #define fast           ios_base::sync_with_stdio(false);
// // // // // #define sa(a,n)        sort(a,a+n)
// // // // // #define sv(v)          sort(v.begin(),v.end())
// // // // // #define cy             cout<<"YES\n"
// // // // // #define cn             cout<<"NO\n"
// // // // // #define nl             cout<<"\n"
// // // // // #define minus          cout<<"-1\n";
// // // // // #define vi             vector<int>
// // // // // #define pb             push_back
// // // // // #define tc             int t; cin>>t;
// // // // // #define pp             pair<int,int>
// // // // // #define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
// // // // // #define mod            1000000007
// // // // // #define co(n)          cout<<n;
// // // // // #define ret            return 0
// // // // // #define mi             map<int,int>
// // // // // #define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
// // // // // #define forn(i, n)     ff(i, 0, n)
// // // // // #define sz(v)          int((v).size())

// // // // // void solve(){
// // // // // 	int n; cin>>n;
// // // // // 	for(int i=1; i<=n; i++){
// // // // // 		ll total = (long long)(i*i*(i*i-1)/2);
// // // // // 		ll clashes = 4*(i-1)*(i-2); 
// // // // // 		cout << (total - clashes) << "\n";
// // // // // 	}
// // // // // 	return;
// // // // // }

// // // // // int main(){
// // // // // 	fast;
// // // // // 	int t=1;
// // // // // 	while(t--){
// // // // // 		solve();
// // // // // 	}
// // // // // 	return 0;
// // // // // }

// // // // #include <iostream>
// // // // using namespace std;

// // // // // Function to calculate and print the number of ways two
// // // // // knights can be placed on a K X K chessboard such that
// // // // // they do not attack each other
// // // // long calculateWays(int K) {
// // // //     // Total number of ways two knights can be placed on
// // // //     // the chessboard
// // // //     long totalWays = ((long) K * K * (K * K - 1)) / 2;

// // // //     // Number of ways two knights can attack each other
// // // //     long attackingWays = 4 * (K - 1) * (K - 2);

// // // //     // Number of ways two knights can be placed without
// // // //     // attacking each other
// // // //     long ans = totalWays - attackingWays;

// // // //     // Return the result for the current chessboard size K
// // // //     return ans;
// // // // }

// // // // // Driver Code
// // // // int main() {
// // // //     // Input the value of N (size of the chessboard)
// // // //     // int N = 8;
// // // // 	int N; cin>>N;
// // // //     // Iterate for all the K sized chessboard
// // // //     for (int K = 1; K <= N; K++) {
// // // //         cout << calculateWays(K) << "\n";
// // // //     }

// // // //     return 0;
// // // // }




// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // #define ll             long long int 
// // // // #define ulli           unsigned long long int 
// // // // #define li             long int 
// // // // #define ff(i,a,b)      for(int i=a;i<b;i++)
// // // // #define fb(i,b,a)      for(int i=b;i>=a;i--)
// // // // #define w(t)           while(--t >= 0)
// // // // #define l(s)           s.length()
// // // // #define ci(n)          cin>>n;
// // // // #define fast           ios_base::sync_with_stdio(false);
// // // // #define sa(a,n)        sort(a,a+n)
// // // // #define sv(v)          sort(v.begin(),v.end())
// // // // #define cy             cout<<"YES\n"
// // // // #define cn             cout<<"NO\n"
// // // // #define nl             cout<<"\n"
// // // // #define minus          cout<<"-1\n";
// // // // #define vi             vector<int>
// // // // #define pb             push_back
// // // // #define tc             int t; cin>>t;
// // // // #define pp             pair<int,int>
// // // // #define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
// // // // #define mod            1000000007
// // // // #define co(n)          cout<<n;
// // // // #define ret            return 0
// // // // #define mi             map<int,int>
// // // // #define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
// // // // #define forn(i, n)     ff(i, 0, n)
// // // // #define sz(v)          int((v).size())

// // // // 1d -> 9
// // // // 2d -> 10 to 99 => 90*2 = 180
// // // // 3d -> 100 to 999 => 999-100+1 = 900*3 => 2700
// // // // 4d -> 1000 to 9999 => 9999-1000+1 = 9000*4 => 36000 
// // // // 5d -> 10000 to 99999 => 90000*5 => 450000
// // // // .
// // // // .
// // // // .
// // // // .
// // // // .
// // // // nd -> 1.....n zeroes to 9999..n times => (90000..n-1 times)*n


// // // // void solve(){
// // // // 	string s; cin>>s;
// // // // 	int q; cin>>q;
// // // // 	while(q--){
// // // // 		int t; cin>>t;
// // // // 		cout << 
// // // // 	}
// // // // }

// // // // int main(){
// // // // 	fast;
// // // // 	int t=1;
// // // // 	while(t--){
// // // // 		solve();
// // // // 	}
// // // // 	return 0;
// // // // }


// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // #define ll long long int
// // // #define fast ios_base::sync_with_stdio(false); cin.tie(0);

// // // void solve() {
// // //     ll k;
// // //     cin >> k;

// // //     // Determine the range of digits
// // //     ll digits = 1; // Starting from 1-digit numbers
// // //     ll count = 9;  // Count of numbers with the current digit count
// // //     ll totalDigits = 0; // Total digits counted so far

// // //     // Find the range where the k-th digit lies
// // //     while (k > totalDigits + digits * count) {
// // //         totalDigits += digits * count; // Add digits contributed by this range
// // //         digits++; // Move to the next digit length
// // //         count *= 10; // Update count of numbers (1-9, 10-99, 100-999, ...)
// // //     }

// // //     // Now we know k is in the range of 'digits'-digit numbers
// // //     // Find the exact number
// // //     k -= totalDigits; // Adjust k to find the position in the current digit group

// // //     // Determine the exact number that contains the k-th digit
// // //     ll numberIndex = (k - 1) / digits; // Find the index of the number in this range
// // //     ll digitIndex = (k - 1) % digits; // Find the digit index within that number

// // //     // Calculate the actual number
// // //     ll actualNumber = pow(10, digits - 1) + numberIndex; // Starting from the first number with 'digits' digits

// // //     // Convert to string to get the digit
// // //     string numberStr = to_string(actualNumber);
// // //     cout << numberStr[digitIndex] << "\n"; // Output the required digit
// // // }

// // // int main() {
// // //     fast;
// // //     int t;
// // //     cin >> t; // Read number of queries
// // //     while (t--) {
// // //         solve();
// // //     }
// // //     return 0;
// // // }



// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // // Function to calculate a^b using binary exponentiation
// // // long long power(long long a, long long b)
// // // {
// // //     // If b = 0, whatever be the value of a,
// // //     // our result will be 1.
// // //     long long res = 1;
// // //     while (b > 0) {
// // //         // If b is an odd number, then
// // //         // (a^b) = (a * (a^(b–1)/2)^2)
// // //         if (b & 1) {
// // //             res = (res * a);
// // //         }

// // //         // If b is an even number, then
// // //         // (a^b) = ((a^2)^(b/2))
// // //         a = (a * a);
// // //         b >>= 1;
// // //     }
// // //     return res;
// // // }

// // // long long findDigit(long long int N)
// // // {
// // //     // No of digits
// // //     long long digits = 1;
// // //     // Total numbers in current digit interval
// // //     long long base = 9;

// // //     // Find the interval in which the Nth digit lies
// // //     while (N - digits * base > 0) {
// // //         N -= digits * base;
// // //         base *= 10;
// // //         digits++;
// // //     }
// // //     long long index = N % digits;

// // //     // Calculate the number which contains the Nth digit
// // //     long long res
// // //         = power(10, (digits - 1)) + (N - 1) / digits;

// // //     // Find out which digit in the number is the result
// // //     if (index != 0)
// // //         res = res / power(10, digits - index);
// // //     return res % 10;
// // // }

// // // // Drive Code
// // // int main()
// // // {
// // //     // Example 1
// // //     long long q ; cin>>q;
// // // 	while(q--){
// // // 		long long k; cin>>k;
// // // 		cout << findDigit(k) << "\n";
// // // 	}

// // //     cout << endl;

// // //     return 0;
// // // }





// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll             long long int 
// // #define ulli           unsigned long long int 
// // #define li             long int 
// // #define ff(i,a,b)      for(int i=a;i<b;i++)
// // #define fb(i,b,a)      for(int i=b;i>=a;i--)
// // #define w(t)           while(--t >= 0)
// // #define l(s)           s.length()
// // #define ci(n)          cin>>n;
// // #define fast           ios_base::sync_with_stdio(false);
// // #define sa(a,n)        sort(a,a+n)
// // #define sv(v)          sort(v.begin(),v.end())
// // #define cy             cout<<"YES\n"
// // #define cn             cout<<"NO\n"
// // #define nl             cout<<"\n"
// // #define minus          cout<<"-1\n";
// // #define vi             vector<int>
// // #define pb             push_back
// // #define tc             int t; cin>>t;
// // #define pp             pair<int,int>
// // #define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
// // #define mod            1000000007
// // #define co(n)          cout<<n;
// // #define ret            return 0
// // #define mi             map<int,int>
// // #define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
// // #define forn(i, n)     ff(i, 0, n)
// // #define sz(v)          int((v).size())

// // void solve(){
// // 	int n,k; cin>>n>>k;
// // 	vi temp(n);
// // 	for(int i=0; i<n; i++) cin>>temp[i];
// // }

// // int main(){
// // 	fast;
// // 	int t=1;
// // 	while(t--){
// // 		solve();
// // 	}
// // 	return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// using u32 = unsigned;
// using i64 = long long;
// using u64 = unsigned long long;

// void solve() {
//     int n, k;
//     std::cin >> n >> k;
    
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
//     std::sort(a.begin(), a.end(), std::greater<int>());
    
//     i64 ans = 0;
//     for (int i = 0; i < n; i++) {
//         ans += (i % 2 == 0 ? 1 : -1) * a[i];
//     }
    
//     ans = std::max<i64>(ans - k, n % 2 == 0 ? 0 : a[n - 1]);
//     std::cout << ans << "\n";
// }

// int main() {
//     std::ios::sync_with_stdio(false);a
//     std::cin.tie(nullptr);
    
//     int t;
//     std::cin >> t;
    
//     while (t--) {
//         solve();
//     }
    
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

void solve(){
	
}

int main(){
	fast;
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
