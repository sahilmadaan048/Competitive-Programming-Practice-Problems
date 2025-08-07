// https://vjudge.net/problem/Gym-287309J


#include<bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isprime(int n) {
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++) {  // Only check divisors up to sqrt(n)
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n; 
    cin >> n;
    int i = 2;
    // int count = 0;

    // Generate the first 'n' prime numbers
    for(int i=2; i<=n; i++){
        if(isprime(i)) {  // Check if the number is prime
            // count++;
            cout << i << " ";
        }
        // i++;  // Move to the next number
    }
    
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// bool isprime(int n){
// 	if(n<2) return false;
// 	for(int i=2; i*i<=n; i++){
// 		if(n%i == 0) return false;
// 	}
// 	return true;
// }

// int main(){
// 	int n; cin>>n;
// 	// cout << "sail>>";
// 	int i=2;
// 	int count = 0;
// 	while(count < n){
// 		if(isprime(i) == true){
// 			count++;
// 			cout << i << " ";
// 		}
// 		// else continue;
// 		i++;
// 	}
// 	return 0 ;
// }