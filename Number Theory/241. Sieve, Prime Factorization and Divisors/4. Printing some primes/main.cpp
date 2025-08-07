// https://www.spoj.com/problems/TDPRIMES/


// sieve-of-eratosthenes
#include<bits/stdc++.h>
using namespace std;
const int n = 99999989;

int main() {
	// ios_base::sync_with_stdio(false);
	// int n; cin >> n ;
	vector<bool> temp(n+1,true);
	temp[0]= temp[1] = false;	
	for(int i=2; i*i<=n; i++){
		if(temp[i] == true){
			for(int j=2*i; j<=n; j+=i){
				temp[j] = false;
			}
		}
	}

		
	int count = 0;
	for(int i=2; i<=n; i++){
		if(temp[i]){
			count++;
			if(count%100 == 1){
				cout << i << "\n";
			}
		}
	}
	return 0 ;
}


// #include <bits/stdc++.h>
// using namespace std;

// const int n = 99999989;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     vector<bool> temp(n+1, true);  // +1 to include n
//     temp[0] = temp[1] = false;

//     // Sieve of Eratosthenes
//     for (int i = 2; i * i <= n; i++) {
//         if (temp[i]) {
//             for (int j = i * i; j <= n; j += i) {
//                 temp[j] = false;
//             }
//         }
//     }

//     int count = 0;
//     for (int i = 2; i <= n; i++) {
//         if (temp[i]) {
//             count++;
//             if (count % 100 == 0) {
//                 cout << i << "\n";
//             }
//         }
//     }

//     return 0;
// }
