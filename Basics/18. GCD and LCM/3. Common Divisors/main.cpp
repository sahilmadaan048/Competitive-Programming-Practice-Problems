// https://vjudge.net/problem/CodeForces-1203C

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Function to compute gcd of two numbers
//eulers theorem of calculating the gcd of two numbers


ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
    
// ll gcd(ll a, ll b) {
// 	while(a !=0 and b!=0) {
// 		int k = a%b;
// 		a = b;
// 		b = k;
// 	}
// 	return a+b;
// }

// Function to count the number of divisors of a number
int countDivisors(ll num) {
    int count = 0;
    for (ll i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            count++;
            if (i != num / i) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Calculate GCD of all elements in the array
    ll current_gcd = a[0];
    for (int i = 1; i < n; i++) {
        current_gcd = gcd(current_gcd, a[i]);
        if (current_gcd == 1) {
            break;  // Early exit if GCD is 1
        }
    }
    
    // Count divisors of the GCD
    int result = countDivisors(current_gcd);
    
    cout << result << endl;
    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// ll gcd(ll a, ll b) {
// 	while(a !=0 and b!=0) {
// 		int k = a%b;
// 		a = b;
// 		b = k;
// 	}
// 	return a+b;
// }

// int countdivisors(ll n) {
// 	int count = 0 ;
// 	for(int i=1; i*i<=n; i++){
// 		if(n%i == 0){
// 			count++;
// 			if(i*i != n){
// 				count++;
// 			}
// 		}
// 	}
// 	return count;
// 	// return count;
// }

// int main() {
//     int n; 
//     cin >> n;
//     vector<ll> temp(n);
//     for (int i = 0; i < n; i++) 
//         cin >> temp[i];
    
//     ll num = *min_element(temp.begin(), temp.end());
//     ll current_gcd = temp[0];

//     for(int i=1; i<n; i++){
//     	current_gcd = gcd(current_gcd, temp[i]);
//     	if(current_gcd == 1){
//     		break;
//     	}
//     }

//     cout << countdivisors(current_gcd) << endl;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
// 	int n; cin >> n;
// 	vector<ll> temp(n);
// 	for(int i=0; i<n; i++) cin >> temp[i];
// 	int num = *min_element(temp.begin(), temp.end());
// 	// bool flag = true;
// 	int count = 0;
// 	for(int i=1; i<= num; i++) {
// 		bool flag = true;
// 		for(auto ele: temp){
// 			if(ele%i == 0){
// 				flag = false;
// 				// continue;
// 				break;
// 			}
// 		}
// 		if(flag) count++;
// 	}
// 	cout << count << endl;
// 	return 0;
// }
