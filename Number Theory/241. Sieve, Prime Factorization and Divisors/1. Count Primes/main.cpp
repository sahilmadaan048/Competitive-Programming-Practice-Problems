// https://leetcode.com/problems/count-primes/description/

 // Sieve of Eratosthenes algorithm
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n; cin >> n ;
// 	vector<bool> temp(n, true);
// 	temp[0] = temp[1] = false;
// 	for(int i=2; i*i<=n; i++){
// 		if(temp[i] == true){
// 			for(int j=2*i; j<n; j+=i){
// 				temp[j] = false;
// 			}
// 		}
// 	}
	
// 	int count = 0 ;
// 	for(auto ele : temp){
// 		if(ele) count++;
// 	}
// 	cout << count << "\n";
// 	return 0 ;
// }
// 


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         long long x;
//         cin >> n >> x;
//         vector<long long> skills(n);
//         for(int i = 0; i < n; i++){
//             cin >> skills[i];
//         }
//         sort(skills.begin(), skills.end(), greater<long long>());
//         long long teams = 0, cnt = 0;
//         for(auto s : skills){
//             cnt++;
//             if(s * cnt >= x){
//                 teams++;
//                 cnt = 0;
//             }
//         }
//         cout << teams << "\n";
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
 
// void solve(){
//     int n;
//     cin >> n;
//     string date = "01032025";
//     vector<int> digits(n);
//     for(int i = 0; i < n; i++) cin >> digits[i];
//     vector<int> cnt(10, 0);
//     vector<int> req(10, 0);
//     req[0] = 3; req[1] = 1; req[2] = 2; req[3] = 1; req[5] = 1;
//     for(int i = 0; i < n; i++){
//         cnt[digits[i]]++;
//         bool ok = true;
//         for(int d = 0; d < 10; d++){
//             if(cnt[d] < req[d]){
//                 ok = false;
//                 break;
//             }
//         }
//         if(ok){
//             cout << i + 1 << "\n";
//             return;
//         }
//     }
//     cout << "0\n";
// }
 
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
 
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t; cin >> t;
//     while(t--){
//         int n; cin >> n;
//         if(n > 1 && n % 2 == 0){
//             cout << -1 << "\n";
//             continue;
//         }
//         vector<int> perm(n);
//         for (int i = 1; i <= n; i++){
//             int x = (2 * i - 1) % n;
//             if(x == 0) x = n;
//             perm[i - 1] = x;
//         }
//         for(auto &x : perm) cout << x << " ";
//         cout << "\n";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// ll maxDesks(ll m, ll L) {
//     ll groups = m / (L + 1);
//     ll rem = m % (L + 1);
//     return groups * L + min(rem, L);
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--){
//         ll n, m, k;
//         cin >> n >> m >> k;
        
//         ll lo = 1, hi = m, ans = m;
        
//         while(lo <= hi){
//             ll mid = (lo + hi) / 2;
//             if(n * maxDesks(m, mid) >= k){
//                 ans = mid;
//                 hi = mid - 1;
//             } else {
//                 lo = mid + 1;
//             }
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t; cin >> t;
// 	while(t--) {
// 		int n; cin >> n;
// 		from 1 to n
// 		count pairs a,b such that
// 		lcm/gcd  is a prome number
// 		lcm is a*b/gcd in the first place
// 		so no of pairs such that a*b/gcd(a, b)^2
// 		is a prime number is what we have to compute
// 		use sieve to mark prime numbers 
// 		at max range of F could be a*b and mini would be max(a,b)/min(a,b)^2
// 		now we can mark them
// 		lets do it
// 		int a = 1;
// 		int b = n;
// 		for(int i=1; i<=n; i++) {
// 			for(int j=1; j<=n; j++) {
// 				//check for pair(i, j)
				
// 			}
// 		}
// 		vector<int> isP(n)
// 	}
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     vector<int> ns(t);
// 	// 	from 1 to n
// 	// count pairs a,b such that
// 	// lcm/gcd  is a prome number
// 	// lcm is a*b/gcd in the first place
// 	// so no of pairs such that a*b/gcd(a, b)^2
// 	// is a prime number is what we have to compute
// 	// use sieve to mark prime numbers 
// 	// at max range of F could be a*b and mini would be max(a,b)/min(a,b)^2
// 	// now we can mark them
// 	// lets do it
//     int maxn = 0;
  
//     for(int i = 0; i < t; i++){
//         cin >> ns[i];
//         if(ns[i] > maxn) maxn = ns[i];
//     }
 
//  	//read through all the testcases so that we dont have to 
//  	//,ake sieve again and again
//     vector<bool> isPrime(maxn + 1, true);
//     isPrime[0] = isPrime[1] = false;
   
//     for(int i = 2; i * i <= maxn; i++){
//         if(isPrime[i]){
//             for(int j = i * i; j <= maxn; j += i)
//                 isPrime[j] = false;
//         }
//     }
    
//     vector<int> primes;
//     for(int i = 2; i <= maxn; i++){
//         if(isPrime[i])
//             primes.push_back(i);
//     }
    
//     for(auto n : ns){
//         long long ans = 0;
//         for(auto p : primes){
//             if(p > n) break;
//             ans += n / p;
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
 
// const int MOD = 998244353;
 
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t; cin >> t;
//     while(t--){
//         int n, m, d; cin >> n >> m >> d;
//     //seems like a dp pronblem
// 	//since count of all paths
// 	//its a 2d dp problem
// 	//also base case would be from the span lenght
// 	//and the euclidean thingy they mentioned
//         vector<vector<int>> holds(n+1);
//         vector<string> grid(n);
//         for(int i = 0; i < n; i++){
//             cin >> grid[i];
//         }
//         for(int r = 1; r <= n; r++){
//             for(int c = 1; c <= m; c++){
// 				//to ensure 1 based indexing in the do otable
//                 if(grid[r-1][c-1] == 'X') holds[r].push_back(c);
//             }
//             sort(holds[r].begin(), holds[r].end());
//         }
//         bool ok = true;
//         for(int r = 1; r <= n; r++){
//             if(holds[r].empty()){
//                 ok = false;
//                 break;
//             }
//         }
//         if(!ok){
//             cout << 0 << "\n";
//             continue; //lets go for next test case
//         }
//         int d2 = d*d;
//         int Rv = floor(sqrt((long double)d2 - 1e-9));
// 		//also he could have either 1 hold or 2 holds on each level
// 		//in each case the hold distance
// 		//should not exceed the hand span of the climber
// 		//interesting
      		
// 		//mow lets make a dp vector and a count variable   
// 		//to store our ans 
//         vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
//         {
//             vector<int>& opts = holds[n];
//             int sz = opts.size();
//             vector<long long> diff(sz+1, 0);
//             for(int i = 0; i < sz; i++){
//                 int f = opts[i];
//                 int L_bound = f - d; if(L_bound < 1) L_bound = 1;
//                 int R_bound = f + d; if(R_bound > m) R_bound = m;
//                 auto lb = lower_bound(opts.begin(), opts.end(), L_bound);
//                 auto rb = upper_bound(opts.begin(), opts.end(), R_bound);
//                 int L_idx = lb - opts.begin();
//                 int R_idx = rb - opts.begin() - 1;
//                 if(L_idx <= R_idx){
//                     diff[L_idx] = (diff[L_idx] + 1) % MOD;
//                     diff[R_idx+1] = (diff[R_idx+1] - 1 + MOD) % MOD;
//                 }
//             }
//             long long cur = 0;
//             for(int i = 0; i < sz; i++){
//                 cur = (cur + diff[i]) % MOD;
//                 dp[n][opts[i]] = cur % MOD;
//             }
//         }
//         for(int r = n-1; r >= 1; r--){
//             vector<int>& opts = holds[r];
//             int sz = opts.size();
//             vector<long long> P(m+2, 0);
//             for(int c = 1; c <= m; c++){
//                 P[c] = (P[c-1] + dp[r+1][c]) % MOD;
//             }

//             vector<long long> diff(sz+1, 0);
//             for(auto f : opts){
//                 int L_range = f - Rv; 
//                 if(L_range < 1) L_range = 1;
                
//                 int R_range = f + Rv; 
//                 if(R_range > m) R_range = m;
                
//                 long long Rf = (P[R_range] - P[L_range-1] + MOD) % MOD;
                
//                 int low = f - d; if(low < 1) low = 1;
//                 int high = f + d; if(high > m) high = m;
                
//                 auto lb = lower_bound(opts.begin(), opts.end(), low);
//                 auto rb = upper_bound(opts.begin(), opts.end(), high);
                
//                 int L_idx = lb - opts.begin();
//                 int R_idx = rb - opts.begin() - 1;
                
//                 if(L_idx <= R_idx){
//                     diff[L_idx] = (diff[L_idx] + Rf) % MOD;
//                     diff[R_idx+1] = (diff[R_idx+1] - Rf + MOD) % MOD;
//                 }
//             }
            
//             long long cur = 0;
//             for(int i = 0; i < sz; i++){
//                 cur = (cur + diff[i]) % MOD;
//                 dp[r][opts[i]] = cur % MOD;
//             }
            
//         }
//         long long ans = 0;
//         for(auto c : holds[1]) ans = (ans + dp[1][c]) % MOD;
//         cout << ans % MOD << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
 
    return 0;
}