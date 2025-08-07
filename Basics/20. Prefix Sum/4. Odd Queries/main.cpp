// https://codeforces.com/contest/1807/problem/D

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n, q; cin >> n >> q;
		vector<int> temp(n);
		for(int i=0; i<n; i++) cin >> temp[i];
		vector<long long> prefix_sum(n+1, 0);
		for(int i=1; i<=n; i++){
			prefix_sum[i] = prefix_sum[i-1]+temp[i-1];
		}
		while(q--){
			int l, r, k; cin >> l >> r >> k;
			long long initial_sum = prefix_sum[r]-prefix_sum[l-1];
			long long final_sum = prefix_sum[n] - initial_sum + (r-l+1)*k ;

			if((final_sum&1) !=0 ){
				cout << "YES" <<"\n";
			}
			else cout << "NO" <<"\n";
		}		
	}
	return 0;
}



// https://codeforces.com/contest/1807/problem/B

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t; cin >> t;
// 	while(t--){
// 		int n; cin >> n;
// 		vector<int> temp(n);
// 		int  even_sum = 0 ;
// 		int  odd_sum = 0 ;
// 		for(int i=0; i<n; i++) {
// 			cin >> temp[i];
// 			if(temp[i]%2 == 0){
// 				 // evens++;
// 				 even_sum += temp[i];
// 			}
// 			else {
// 				// odds++;
// 				odd_sum += temp[i];
// 			}
// 		}
// 		if(even_sum>odd_sum){
// 			cout << "YES" << "\n";
// 		}
// 		else cout << "NO" <<  "\n";
// 	}
// 	return 0 ;
// }



// https://codeforces.com/contest/1807/problem/C
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; 
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         int mp[26];
//         for (int i = 0; i < 26; i++) {
//             mp[i] = -1;
//         }
//         bool isValid = true;
//         for (int i = 0; i < n; i++) {
//             int curr = s[i] - 'a';
//             if (mp[curr] == -1) {
//                 mp[curr] = i % 2;
//             } else {
//                 if (mp[curr] != i % 2) {
//                     isValid = false;
//                     break;
//                 }
//             }
//         }
//         if (isValid) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }
//     return 0;
// }
