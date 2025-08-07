// https://vjudge.net/problem/CodeForces-598A#google_vignette

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long totalSum = (long long)n * (n + 1) / 2;
        long long powerSum = 0;
        for(long long i = 1; i <= n; i *= 2) {
            powerSum += i;
        }
        long long ans = totalSum - 2 * powerSum;
        cout << ans << '\n';
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t; cin>>t;
// 	while(t--){
// 		int n; cin >> n;
// 		long long ans = 0;
// 		for(int i=1; i<=n; i++){  //check if i is a apower o f 2
// 			if((i & i-1) == 0) ans -= i;
			
// 			else ans += i;
// 		}
// 		cout << ans << '\n';
// 	}
// 	return 0;
// }