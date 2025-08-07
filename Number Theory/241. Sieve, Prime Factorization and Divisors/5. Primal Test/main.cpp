// https://www.spoj.com/problems/VECTAR8/

// #include <bits/stdc++.h>
// using namespace std;

// bool isprime(int n, vector<int>& temp) {
//     return temp[n] == 1;
// }

// bool check(int n, vector<int>& temp) {
//     string s = to_string(n);
//     while (!s.empty()) {
//         int num = stoi(s);
//         if (!isprime(num, temp) || s[0] == '0') {
//             return false;
//         }
//         s.erase(s.begin());
//     }
//     return true;
// }

// int main() {
//     int t; 
//     cin >> t;
//     while (t--) {
//         int n; 
//         cin >> n;
//         vector<int> temp(n + 1, 1); 
//         temp[0] = temp[1] = 0; 

       
//         for (int i = 2; i * i <= n; i++) {
//             if (temp[i] == 1) {
//                 for (int j = i * i; j <= n; j += i) {
//                     temp[j] = 0;
//                 }
//             }
//         }

//         int count = 0;
//         for (int i = 2; i <= n; i++) { 
//             if (check(i, temp)) {
//                 count++;
//             }
//         }
//         cout << count << "\n";
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// const int MAXN = 1000000;  // Set the maximum possible value for n
// vector<int> temp(MAXN + 1, 1); // Global sieve array to store prime information

// // Function to preprocess the prime numbers using Sieve of Eratosthenes
// void sieve() {
//     temp[0] = temp[1] = 0;  // 0 and 1 are not primes
//     for (int i = 2; i * i <= MAXN; i++) {
//         if (temp[i] == 1) {
//             for (int j = i * i; j <= MAXN; j += i) {
//                 temp[j] = 0;
//             }
//         }
//     }
// }

// // Function to check if a number is a left-truncatable prime
// bool isLeftTruncatablePrime(int n) {
//     string s = to_string(n);
//     while (!s.empty()) {
//         int num = stoi(s);
//         if (temp[num] == 0 || s[0] == '0') {
//             return false;
//         }
//         s.erase(s.begin());
//     }
//     return true;
// }

// int main() {
//     sieve();  // Precompute all prime numbers up to MAXN

//     vector<int> leftTruncatableCount(MAXN + 1, 0); // To store the count of left-truncatable primes up to each number
//     for (int i = 2; i <= MAXN; i++) {
//         if (isLeftTruncatablePrime(i)) {
//             leftTruncatableCount[i] = leftTruncatableCount[i - 1] + 1;
//         } else {
//             leftTruncatableCount[i] = leftTruncatableCount[i - 1];
//         }
//     }

//     int t; 
//     cin >> t;
//     while (t--) {
//         int n; 
//         cin >> n;
//         cout << leftTruncatableCount[n] << "\n"; // Output the count of left-truncatable primes up to n
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// const int MAXN = 1000000;  // Maximum value of n
// vector<int> is_prime(MAXN + 1, 1); // Sieve array to store prime information

// // Function to preprocess the prime numbers using Sieve of Eratosthenes
// void sieve() {
//     is_prime[0] = is_prime[1] = 0;  // 0 and 1 are not primes
//     for (int i = 2; i * i <= MAXN; i++) {
//         if (is_prime[i]) {
//             for (int j = i * i; j <= MAXN; j += i) {
//                 is_prime[j] = 0;
//             }
//         }
//     }
// }

// // Function to check if a number is a left-truncatable prime
// bool isLeftTruncatablePrime(int n) {
//     while (n > 0) {
//         if (!is_prime[n]) {
//             return false;
//         }
//         n /= 10; // Remove the last digit
//     }
//     return true;
// }

// int main() {
//     ios_base::sync_with_stdio(false); cin.tie(nullptr);
//     sieve();  // Precompute all prime numbers up to MAXN

//     // Precompute the count of left-truncatable primes up to each number
//     vector<int> leftTruncatableCount(MAXN + 1, 0);
//     for (int i = 2; i <= MAXN; i++) {
//         if (isLeftTruncatablePrime(i)) {
//             leftTruncatableCount[i] = leftTruncatableCount[i - 1] + 1;
//         } else {
//             leftTruncatableCount[i] = leftTruncatableCount[i - 1];
//         }
//     }

//     int t; 
//     cin >> t;
//     while (t--) {
//         int n; 
//         cin >> n;
//         cout << leftTruncatableCount[n] << "\n"; // Output the count of left-truncatable primes up to n
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// #include<vector>
// using namespace std;
// #define io   ios_base::sync_with_stdio(false);cin.tie(NULL);
// const int N= 1e6+5;
// typedef long long ll;
 
// vector<bool> isPrime(N+1,true);
// int cnt[N+1];
 
// ll power(ll a,ll b)
// {
//     if(b==0)
//     return 1;
//     ll res=1;
//     while(b>0)
//     {
//         if(b&1)
//         res=res*a;
//         a=a*a;
//         b>>=1;
//     }
//     return res;
// }
 
 
// void sieve()
// {
//     isPrime[0]=isPrime[1]=false;
//     for(ll i=0;i*i<=N;i++)
//     {
//         if(isPrime[i])
//         {
//             for(ll j=i*i;j<=N;j+=i)
//             {
//                 isPrime[j]=false;
//             }
//         }
//     }
// }
 
// bool check(ll n)
// {
//     ll temp=n,dig=0;
//     while(n>0)
//     {
//         if(n%10==0)
//         return false;
//         dig++;
//         n=n/10;
//     }
 
//     ll div=power(10LL,dig-1);
 
//     n=temp;
 
//     while(n>0)
//     {
//         n=n%div;
//         div/=10;
 
//         if(n!=0&&isPrime[n]==false)
//         return false;
 
//     }
//     return true;
// }
 
// void PrimalFear()
// {
//     for(ll i=2;i<=N;i++)
//     {
//         cnt[i]=cnt[i-1];
//         if(isPrime[i]==true)
//         {
//             if(check(i))
//             {
//                 cnt[i]++;
//             }
//         }
//     }
// }
 
// int main() {
//     io;
//     ll t;
//     cin>>t;
//     sieve();
//     PrimalFear();
 
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         ll ans=0;
 
//         cout<<cnt[n]<<endl;
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// #include<vector>
// using namespace std;
// #define io  ios_base::sync_with_stdio(false);cin.tie(NULL);

 
// int main() {
//     io;
//     int n; cin >> n ;
//     vector<int> temp(n);
//     for(int i=0; i<n; i++) cin >> temp[i];
//     sort(temp.begin(), temp.end());
//     int maxi = temp[0];
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             maxi = max(maxi,  __gcd(temp[i], temp[j]));
//             if(maxi == temp[i]) break;
//         }
//     }
//     cout << maxi << "\n";
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// #define io ios_base::sync_with_stdio(false);cin.tie(NULL);

// int main() {
//     io;
//     int n;
//     cin >> n;
//     vector<int> arr(n);
    
//     // Read input
//     int max_val = 0;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         max_val = max(max_val, arr[i]);
//     }

//     // Frequency array to count occurrences of each number
//     vector<int> freq(max_val + 1, 0);
//     for (int i = 0; i < n; i++) {
//         freq[arr[i]]++;
//     }
    
//     // Array to store the number of elements divisible by each index
//     vector<int> multiple_count(max_val + 1, 0);

//     // Compute the count of multiples for each number from 1 to max_val
//     for (int i = 1; i <= max_val; i++) {
//         for (int j = i; j <= max_val; j += i) {
//             multiple_count[i] += freq[j];
//         }
//     }

//     // Find the maximum GCD where there are at least two multiples
//     for (int g = max_val; g >= 1; g--) {
//         if (multiple_count[g] > 1) {
//             cout << g << "\n";
//             return 0;
//         }
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// const int MOD = 1e9+7 ;
// int solve(int n){
//     int sum = 0 ;
//     for(int i=1; i*i<=n; i++){
//         if(n%i == 0){
//             sum += i%MOD;
//             if(i != n/i){
//                 sum += (n/i)%MOD;
//             }
//         }
//     }
//     return sum;
// }
// int main() {
//     int n; cin >> n ;
//     int sum = 0 ;
//     for(int i=1; i<=n; i++){
//         sum += solve(i)%MOD;
//     }
//     cout << sum << "\n";
//     return 0 ;
// }

// #include<bits/stdc++.h>
// using namespace std;
// const int MOD = 1e9+7;
// int main(){
//     int n; cin >> n;
//     vector<int> divisor_sum(n+1);
//     for(int i = 1; i*i<=n; i++){
//         for(int j=i; j<=n; j+=i){
//             divisor_sum[j] += i;
//         }
//     }

//     int sum = 0 ;
//     for(int i=1; i<=n; i++){
//         sum = (sum + divisor_sum[i])%MOD;
//     }
//     cout << sum << "\n";
//     return 0 ;
// }
#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    
    // Create an array to store the sum of divisors
    vector<long long> divisor_sum(n + 1, 0);
    
    // Calculate the sum of divisors for each number up to n
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            divisor_sum[j] = (divisor_sum[j] + i) % MOD;
        }
    }
    
    // Calculate the final result
    long long total_sum = 0;
    for (int i = 1; i <= n; i++) {
        total_sum = (total_sum + divisor_sum[i]) % MOD;
    }
    
    cout << total_sum << "\n";
    return 0;
}
