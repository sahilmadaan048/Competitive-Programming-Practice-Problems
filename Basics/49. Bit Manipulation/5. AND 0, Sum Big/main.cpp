// https://codeforces.com/problemset/problem/1514/B

// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9+7;
// int main() {
// 	int t; cin >> t;
// 	while(t--){
// 		int n, k; cin >> n >> k;
// 		int cnt = 0 ;
// 		for(int mask = 0 ; mask<(1<<n); mask++){
// 			int xorval = 0;
// 			int length = 0 ;
// 			for(int i=0; i<k; i++){
// 				if((mask&(1<<i))){
// 					length++;
// 					xorval ^= (i);
// 				}
// 			}
// 			if(length == n and xorval == 0){
// 				cnt++;
// 				cnt%=mod;
// 			}
// 		}
// 		cout << cnt << "\n";
// 	}
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// const int MOD = 1e9+7;

// // Function to calculate modular exponentiation
// long long mod_exp(long long base, long long exp, long long mod) {
//     long long result = 1;
//     while (exp > 0) {
//         if (exp % 2 == 1) {
//             result = (result * base) % mod;
//         }
//         base = (base * base) % mod;
//         exp /= 2;
//     }
//     return result;
// }

// int main() {
//     int t;
//     cin >> t;
    
//     while(t--) {
//         int n, k;
//         cin >> n >> k;
        
//         // The number of valid values for each element is 2^k
//         long long max_value = (1LL << k);  // 2^k
        
//         // Calculate the number of arrays modulo MOD
//         long long result = mod_exp(max_value, n, MOD);
        
//         cout << result << "\n";
//     }
    
//     return 0;
// }



#include <bits/stdc++.h>
 
using namespace std;
 
int n,k;
const int MOD=1e9+7;
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        long long ans=1;
        for(int i=0;i<k;i++) ans=(ans*n)%MOD;
        printf("%lld\n",ans);
    }
}
