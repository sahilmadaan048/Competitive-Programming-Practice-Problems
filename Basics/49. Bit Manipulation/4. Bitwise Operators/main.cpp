// // https://vjudge.net/problem/CodeChef-NXS2

// #include<bits/stdc++.h>
// using namespace std;


// int main(){
// 	int t; cin >> t;
// 	while(t--){
// 		int n; cin >> n ;
// 		int ind = 0 ;
// 		int temp = n;
// 		while(temp&1 == 0){
// 			ind++;
// 			temp >>= 1;	
// 		}
// 		int mask = 1<<ind;
// 		int ans = 0 ;
// 		for(int i=1; i<=n; i++){
// 			if((i&mask)){
// 				ans ^= i;
// 			}
// 		}
// 		cout << min(ans, n^ans)<< " " << max(ans, n^ans) << endl;
// 	}
// 	return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; 
//     cin >> t;
    
//     while (t--) {
//         int n; 
//         cin >> n;

//         // Determine the number of trailing zeros in n
//         int ind = 0;
//         int temp = n;
//         while ((temp & 1) == 0) {
//             ind++;
//             temp >>= 1;
//         }

//         // Create a mask with the lowest bit set according to the number of trailing zeros
//         int mask = 1 << ind;
//         int ans = 0;
        
//         // XOR all numbers from 1 to n with the mask
//         for (int i = 1; i <= n; i++) {
//             if (i & mask) {
//                 ans ^= i;
//             }
//         }

//         // Calculate the other number and print the results
//         int other = n ^ ans;
//         cout << min(ans, other) << " " << max(ans, other) << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    
    while (test--) {
        int n;
        cin >> n;
        int a = 0, b = 0;
        
        for (int i = 1; i <= n; ++i) {
            int temp = n ^ i;
            if (i <= temp && temp <= n) {
                a = i;
                b = temp;
                break;
            }
        }
        
        if (a != 0 && b != 0)
            cout << a << " " << b << endl;
        else
            cout << -1 << endl;
    }
    
    return 0;
}
