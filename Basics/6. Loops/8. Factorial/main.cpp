// https://vjudge.net/problem/Gym-287309G

// #include<bits/stdc++.h>
// using namespace std;

// int fact(int n){
// 	int fac=1;
// 	for(int i=2; i<=n; i++) fac*=i;
// 	return fac;
// }

// int main(){
// 	int t; cin >>t;
// 	while(t--){
// 		int n; cin>>n;
// 		cout<<fact(n)<<endl;
// 	}
// }

#include <iostream>
using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        cout << factorial(N) << endl;
    }

    return 0;
}
