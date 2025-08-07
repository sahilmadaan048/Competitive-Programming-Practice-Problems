// // https://codeforces.com/contest/1536/problem/C


#include <bits/stdc++.h>
using namespace std;

// Function to compute the GCD of two numbers
// int gcd(int a, int b) {
//     while (b) {
//         a %= b;
//         swap(a, b);
//     }
//     return a;
// }

void solve() {
    int t;
    cin >> t;  // Read number of test cases

    while (t--) {
        int n;
        cin >> n;  // Read the length of the string
        string s;
        cin >> s;  // Read the string

        int d_count = 0, k_count = 0;  // Counters for 'D' and 'K'
        map<pair<int, int>, int> ratio_count;  // Map to store the frequency of each ratio
        vector<int> result;  // Result vector to store the output

        for (char c : s) {
            if (c == 'D') {
                d_count++;
            } else {
                k_count++;
            }

            // Calculate the GCD of the counts
            int g = __gcd(d_count, k_count);

            // Calculate the reduced ratio
            int d_ratio = d_count / g;
            int k_ratio = k_count / g;

            // Increment the count for this ratio
            ratio_count[{d_ratio, k_ratio}]++;

            // Append the current count of this ratio to the result
            result.push_back(ratio_count[{d_ratio, k_ratio}]);
        }

        // Print the result for this test case
        for (int x : result) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;


// bool isprime(int n) {
//     if (n < 2) return false;  
//     for (int i = 2; i * i <= n; i++) { 
//         if (n % i == 0) return false;  
//     }
//     return true;
// }


// bool spanic(int n) {
//     vector<int> primeDivisors;  

//    	int primecount = 0;
//    	long long product = 1;
//     int divisorCount = 0;  
//     bool flag = true;

//     for (int i = 1; i * i <= n; i++) {
//         if (n % i == 0) {
//             divisorCount++;  
//             if (isprime(i)) primeDivisors.push_back(i); 
//             // if(isprime(i)) {
//             // 	primecount++;
//             // 	product *= 1ll* i;
//             // }

//             if (i != n / i) {  
//                 divisorCount++;  
//                 if (isprime(n / i)) primeDivisors.push_back(n / i);  
//                 // if(isprime(n/i)){
//                 // 	primecount++;
//                 // }
//             }
//         }
//     }

 
//     // cout << divisorCount << endl;
//     if(divisorCount != 8) flag = false;
//     if(divisorCount == 8){
//     	sort(primeDivisors.begin(), primeDivisors.end());
//     	long long product = 1LL * primeDivisors[0] * primeDivisors[1] * primeDivisors[2];
//     	// if(primecount < 3) flag = false;
//     	if(product != n) flag = false;

//     	// if(product != n) flag = false;
//     }
  

//     return flag;
  
// }

// void solve() {
//     int n; 
//     cin >> n;
//     if (spanic(n)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
// }

// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL); cout.tie(NULL);
// 	int n, m; cin >> n >> m ;
// 	for(int i=n; i<=m; i++){
// 		if(spanic(i)){
// 			cout << i << " ";
// 		}
// 	}
//     return 0;
// }
