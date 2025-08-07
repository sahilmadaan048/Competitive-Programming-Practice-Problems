// https://vjudge.net/problem/HackerRank-si-swap-bits#google_vignette

// we have to swap the adjacent bits to get the final ans 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t; 
//     cin >> t;
//     while(t--) {
//         int n; 
//         cin >> n;

//         // Move odd bits to even positions
//         int odd_bits = (n & 0xAAAAAAAA) >> 1;

//         // Move even bits to odd positions
//         int even_bits = (n & 0x55555555) << 1;

//         // Combine the two results
//         int result = odd_bits | even_bits;

//         cout << result << endl;
//     }
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=0; i<32; i+=2){
			int bit1 = 1 & (n>>i);
			int bit2 = 1 & (n>>(i+1));

			//if they are not equal then swap them
			if(bit1 != bit2){
				n ^= (1<<i);  //toggle with ith bit
				n ^= (1<<(i+1));
			}
		}
		cout << n << endl;
	}
	return 0;
}