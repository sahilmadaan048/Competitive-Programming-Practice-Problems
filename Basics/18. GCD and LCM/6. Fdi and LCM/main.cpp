// // https://codeforces.com/contest/2010/problem/A

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t; cin >> t;
// 	while(t--){
// 		int n; cin >> n ;
// 		int count = 0 , sum = 0 ;
// 		for(int i=0; i<n; i++){
// 			int x; cin >> x;
// 			if((count&1) == 0) sum += x;
// 			else sum -= x;
// 			count ++; 
// 		}

// 		cout << sum << '\n' ;
// 	}
// 	return 0;
// }







// // https://codeforces.com/contest/2010/problem/B


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0); cout.tie(0);

// 	int a, b; cin >> a >> b ;
// 	cout << 6-(a+b) << '\n';

// 	return 0; 
// }





// // https://codeforces.com/contest/2010/problem/C1


// // C1. Message Transmission Error (easy version)

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	string s;
// 	cin >> s;
// 	int n = s.size();
// 	bool flag = false;
// 	string ans ;
// 	for(int len=n/2;len>0; len--) {
// 		for(int i = 0; i <= n - 2 * len; i++){
// 			string s1 = s.substr(i, len);
// 			string s2 = s.substr(i+len);

// 			if(s1 == s2 ){
// 				ans = s1;
// 				flag = true;
// 				break;
// 			}
// 		}
// 		if(flag) break;
// 	}
// 	if(!flag) {
// 		cout << "NO" << endl;
// 		return 0;
// 	}
// 	else{
// 		cout << "YES" << endl;
// 		cout << ans << endl;
// 		return 0;
// }

//solution for problem c and d coth 

//the only differenmce is that these problems differ in the tange of string length

//in the harder version of the problem this range is little too big thus 

//giving time limiit exceeded error on the code

//written down here


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//   cin.tie(0)->sync_with_stdio(0);
//   string t; cin >> t;
//   int n = t.size();
//   for (int i = 1; i < n; i++) {
//     if (n-i >= i) continue;
//     if (t.substr(0, i) == t.substr(n-i, i)) {
//       cout << "YES\n";
//       cout << t.substr(0, i) << '\n';
//       return 0;
//     }
//   }
//   cout << "NO\n";
// }





// https://codeforces.com/problemset/problem/1285/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll x;
    cin >> x;
    
    ll best_a = 1, best_b = x;
    
    for (ll a = 1; a * a <= x; ++a) {
        if (x % a == 0) {
            ll b = x / a;
            if(__gcd(a, b) == (a*b)/x){
                if (max(a, b) < max(best_a, best_b)) {
                best_a = a;
                best_b = b;
            	}
            }
        }
    }
    
    cout << best_a << " " << best_b << '\n';
    return 0;
}
