// https://www.spoj.com/problems/COMDIV/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int a, b;
    cin >> a >> b;
    int count = 0;
    int gcd_ab = __gcd(a, b); 

    for (int i = 1; i * i <= gcd_ab; i++) {
        if (gcd_ab % i == 0) {
            count++;  
            if (i != gcd_ab / i) { 
                count++;
            }
        }
    }

    cout << count << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}