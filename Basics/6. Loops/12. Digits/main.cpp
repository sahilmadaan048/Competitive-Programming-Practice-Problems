// https://vjudge.net/problem/Gym-287309Q

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t; cin>>t;
// 	while(t--){
// 		int n; cin>>n;
// 		while(n){
// 			cout<<(n%10)<<" ";
// 			n/=10;
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }

#include <iostream>
using namespace std;

void printDigitsReversed(int N) {
    if (N == 0) {
        cout << 0 << endl;
        return;
    }
    
    while (N > 0) {
        cout << N % 10 << " ";  // Extract the last digit
        N /= 10;  // Remove the last digit
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        printDigitsReversed(N);
    }

    return 0;
}
