// https://codeforces.com/problemset/problem/1765/M
// #include <bits/stdc++.h>
// using namespace std;

// // Function to calculate LCM
// int lcm(int a, int b) {
//     return (a * b) / __gcd(a, b);
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int min_lcm = INT_MAX;
//         int a = 0, b = 0;

//         for (int i = 1; i <= n / 2; i++) {
//             int j = n - i;
//             int current_lcm = lcm(i, j);
//             if (current_lcm < min_lcm) {
//                 min_lcm = current_lcm;
//                 a = i;
//                 b = j;
//             }
//         }

//         cout << a << " " << b << endl;
//     }
//     return 0;
// }



//a + b = n

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        //we have to find two number s and b such that a+b = n 
        //ans the lcm of a and b is the minimum among all possible 
        //values of a and b
        int a = 1, b = n-1;
        for(int i=2; i*i <= n; i++){
            if(n%i == 0){
                a = n/i;
                break;
            }
        }
        cout << a << " " << n-a << '\n';
    }
    return 0;
}


