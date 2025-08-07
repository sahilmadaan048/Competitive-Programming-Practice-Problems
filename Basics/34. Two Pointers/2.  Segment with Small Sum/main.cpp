// // // https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A

// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // #define ll long long int 
// // // #define ulli unsigned long long int 
// // // #define li long int 
// // // #define ff(i,a,b) for(int i=a;i<b;i++)
// // // #define fb(i,b,a) for(int i=b;i>=a;i--)
// // // #define w(t) while(--t >= 0)
// // // #define l(s) s.length()
// // // #define ci(n) cin >> n
// // // #define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
// // // #define sa(a,n) sort(a,a+n)
// // // #define sv(v) sort(v.begin(), v.end())
// // // #define cy cout << "YES\n"
// // // #define cn cout << "NO\n"
// // // #define nl cout << "\n"
// // // #define minus cout << "-1\n"
// // // #define vi vector<int>
// // // #define pb push_back
// // // #define tc int t; cin >> t
// // // #define pp pair<int, int>
// // // #define input(a,n) for(int i=0;i<n;i++) cin >> a[i];
// // // #define mod 1000000007
// // // #define co(n) cout << n
// // // #define ret return 0
// // // #define mi map<int, int>
// // // #define output(a,n) for(int i=0;i<n;i++) cout << a[i] << (i < n - 1 ? " " : "");   
// // // #define forn(i, n) ff(i, 0, n)
// // // #define sz(v) int((v).size())

// // // void solve() {
// // //     int n, s; 
// // //     cin >> n >> s;
// // //     vi temp(n);
// // //     ff(i, 0, n) ci(temp[i]);
    
// // //     int sum = 0;
// // //     int count = 0;
    
// // //     for (int i = 0; i < n; ++i) {
// // //         sum += temp[i];
// // //         if (sum <= s) {
// // //             count++;
// // //         } else {
// // //             // If the sum exceeds s, reset the sum to current element
// // //             sum = temp[i]; 
// // //             // Check if the new sum is still within the limit
// // //             if (sum <= s) {
// // //                 count++;
// // //             }
// // //         }
// // //     }
    
// // //     cout << count << "\n";
// // // }

// // // int main() {
// // //     fast;
// // //     int t = 1; // You can change this to read multiple test cases if needed
// // //     while (t--) {
// // //         solve();
// // //     }
// // //     return 0;
// // // }


// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // ll M=1e9+7;

// // void solve(){
// //     ll n,s;
// //     cin>>n>>s;
// //     vector<ll> a(n);
// //     for(int i=0;i<n;i++)
// //         cin>>a[i];
// //     ll ans =  0;
// //     ll l = 0;
// //     ll r = 0;
// //     ll sum = 0;
// //     for(;r<n;r++){
// //         sum+=a[r];
// //         while(sum>s){
// //             sum-=a[l];
// //             l++;
// //         }
// //         ans+=(r-l+1);
// //     }
    
// //     cout<<ans<<endl;

// // }

// // int main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0);
// //     //int t;
// //     //cin>>t;
// //     //while(t--)
// //         solve();



// // return 0;
// // }

#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define vi vector<int>
#define ff(i,a,b) for(int i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

void findLongestGoodSegment() {
    int n, s;
    cin >> n >> s; // Read the size of the array and the maximum allowed sum
    vi a(n);
    ff(i, 0, n) cin >> a[i]; // Read the elements of the array

    int left = 0, current_sum = 0, max_length = 0; // Initialize pointers and variables

    // Iterate through the array with the right pointer
    for (int right = 0; right < n; ++right) {
        current_sum += a[right]; // Add the current element to the sum

        // Move the left pointer to maintain the sum ≤ s
        while (current_sum > s && left <= right) {
            current_sum -= a[left++]; // Remove the leftmost element from the sum
        }

        // Update max_length with the current valid segment length
        max_length = max(max_length, right - left + 1);
    }

    cout <<  max_length << "\n"; // Output the result
}

int main() {
    fast; // Optimize input/output
    int t = 1; // You can change this to read multiple test cases if needed
    while (t--) {
        findLongestGoodSegment(); // Call the function to find the longest good segment
    }
    return 0;
}

