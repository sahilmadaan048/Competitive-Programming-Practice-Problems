// https://codeforces.com/gym/103373/problem/B

// #include <bits/stdc++.h>
// using namespace std;

// const int MAXN = 1000000;  // Maximum value of n

// vector<int> aliquot_sum(MAXN + 1, 0);

// void precompute_aliquot_sums() {
//     for (int i = 1; i <= MAXN; i++) {
//         for (int j = 2 * i; j <= MAXN; j += i) {
//             aliquot_sum[j] += i;
//         }
//     }
// }

// void solve() {
//     int n;
//     cin >> n;
//     int sum = aliquot_sum[n];
//     if (sum > n) cout << "abundant" << '\n';
//     else if (sum < n) cout << "deficient" << '\n';
//     else cout << "perfect" << '\n';
// }


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     precompute_aliquot_sums();
    
//     int T;
//     cin >> T;
//     vector<int> queries(T);
    
//     for (int i = 0; i < T; i++) {
//         cin >> queries[i];
//     }
    
//     for (int i = 0; i < T; i++) {
//         solve();
//     }
    
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve() {
//     int n; 
//     cin >> n;
//     long long sum = 0;


//     for (int i = 1; i * i <= n; i++) {
//         if (n % i == 0) { 
//             sum += i;  
//             if (i!= n/i and i != 1) {  
//                 sum += n / i;
//             }
//         }
//     }

//     if (sum > n) 
//         cout << "abundant" << '\n';
//     else if (sum < n) 
//         cout << "deficient" << '\n';
//     else 
//         cout << "perfect" << '\n';
// }

// int main() {
//     int t; 
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve() {
//     int n; 
//     cin >> n;
//     long long sum = 0;

//     for (int i = 1; i * i <= n; i++) {
//         if (n % i == 0) { 
//             if (i != n) {
//                 sum += i;  // Add i if it's not equal to n
//             }
//             if (i != 1 && i != n / i && n / i != n) {  
//                 sum += n / i;  // Add n / i if it's not equal to n and not the same as i
//             }
//         }
//     }

//     if (sum > n) 
//         cout << "abundant" << '\n';
//     else if (sum < n) 
//         cout << "deficient" << '\n';
//     else 
//         cout << "perfect" << '\n';
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t; 
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



// https://codeforces.com/gym/103373/problem/A
// #include <bits/stdc++.h>
// using namespace std;
// #define ll             long long int 
// #define ulli           unsigned long long int 
// #define li             long int 
// #define ff(i,a,b)      for(int i=a;i<b;i++)
// #define fb(i,b,a)      for(int i=b;i>=a;i--)
// #define w(t)           while(--t >= 0)
// #define l(s)           s.length()
// #define ci(n)          cin>>n;
// #define fast           ios_base::sync_with_stdio(false);
// #define sa(a,n)        sort(a,a+n)
// #define sv(v)          sort(v.begin(),v.end())
// #define cy             cout<<"YES\n"
// #define cn             cout<<"NO\n"
// #define nl             cout<<"\n"
// #define minus          cout<<"-1\n";
// #define vi             vector<int>
// #define pb             push_back
// #define tc             int t; cin>>t;
// #define pp             pair<int,int>
// #define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
// #define mod            1000000007
// #define co(n)          cout<<n;
// #define ret            return 0
// #define mi             map<int,int>
// #define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
// #define forn(i, n)     ff(i, 0, n)
// #define sz(v)          int((v).size())


// void solve(int &gold, int &silver, int &bronze, string &ans){
// 	int a, b, c; cin >> a>> b >>c;
// 	string s; getline(cin, s);
//     if(a > gold || (a == gold && (b > silver || (b == silver && c >= bronze)))) {
//         gold = a;
//         silver = b;
//         bronze = c;
//         ans = s;
//     }
// }

// int main(){
// 	fast;
// 	int t; cin>>t;
// 	int gold =0, silver=0, bronze =0;
// 	string ans;
// 	while(t--){
// 		solve(gold, silver, bronze, ans);
// 	}
// 	cout << ans << '\n';

// 	return 0;
// }


// https://codeforces.com/gym/103373/problem/C

// #include <bits/stdc++.h>
// using namespace std;
// #define ll             long long int 
// #define ulli           unsigned long long int 
// #define li             long int 
// #define ff(i,a,b)      for(int i=a;i<b;i++)
// #define fb(i,b,a)      for(int i=b;i>=a;i--)
// #define w(t)           while(--t >= 0)
// #define l(s)           s.length()
// #define ci(n)          cin>>n;
// #define fast           ios_base::sync_with_stdio(false);
// #define sa(a,n)        sort(a,a+n)
// #define sv(v)          sort(v.begin(),v.end())
// #define cy             cout<<"YES\n"
// #define cn             cout<<"NO\n"
// #define nl             cout<<"\n"
// #define minus          cout<<"-1\n";
// #define vi             vector<int>
// #define pb             push_back
// #define tc             int t; cin>>t;
// #define pp             pair<int,int>
// #define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
// #define mod            1000000007
// #define co(n)          cout<<n;
// #define ret            return 0
// #define mi             map<int,int>
// #define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
// #define forn(i, n)     ff(i, 0, n)
// #define sz(v)          int((v).size())


// int main(){
// 	fast;
// 	int n; cin>>n;
// 	vector<int> temp(n);
// 	ff(i,0,n){
// 		temp[i] = i;
// 	}
// 	int swaps = 0;
// 	ff(i,0,n){
// 		int ele = temp[i];
// 		int j = 0;
// 		while(j<n){
// 			if(i == 0 and temp[i]>temp[i+1]){
// 				swap(temp[i], temp[j]);
// 				swaps++;
// 				j++;
// 			}
// 			else if(i<n and (temp[i]>temp[i-1]) || (temp[i] > temp[i+1])){
// 				if(abs(temp[i]-temp[i-1]) > abs(temp[i] - temp[i+1])) {
// 					swap(temp[i], temp[i-1]);
// 					swaps++;
// 					j++;
// 				}
// 				else {
// 					swap(temp[i], temp[i+1]);
// 					swaps++;
// 					j++;
// 				}
// 			}
// 			j++;
// 		}
// 	}
// 	cout << swaps << '\n';
// 	return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// #define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define ff(i, start, end) for(int i = start; i < end; i++)

// int main() {
//     fast;
//     int n;
//     cin >> n; // Read the size of the array

//     vector<int> p(n);
//     ff(i, 0, n) {
//         cin >> p[i]; // Read the array elements
//     }

//     int swaps = 0; // Initialize swap counter

//     // Loop through each element
//     ff(i, 0, n) {
//         int j = 0; // Initialize inner loop counter

//         while (j < n) {
//             if (p[i] == i + 1) { // If the element is already in its correct position
//                 break;
//             }
//             else if (abs(p[i] - (i + 1)) == 1) { // If the element is off by 1 from its correct position
//                 swap(p[i], p[p[i] - 1]); // Swap with the element in the correct position
//                 swaps++;
//             }
//             else {
//                 j++; // Move to the next element
//             }
//         }
//     }

//     cout << swaps << '\n'; // Output the total number of swaps
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n; 
//     cin >> n;
//     vector<int> p(n);
//     for (int i = 0; i < n; i++) {
//         cin >> p[i];
//     }

//     int swaps = 0;
    
//     // Perform bubble sort-like swaps since |p[x] - p[y]| = 1 is satisfied by adjacent elements
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - 1; j++) {
//             // Check if the elements are adjacent and need to be swapped
//             if (abs(p[j] - p[j + 1]) == 1 && p[j] > p[j + 1]) {
//                 swap(p[j], p[j + 1]);
//                 swaps++;
//             }
//         }
//     }

//     cout << swaps << '\n';
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

long long mergeAndCount(vector<int> &arr, vector<int> &temp, int left, int mid, int right) {
    int i = left;    // Starting index for left subarray
    int j = mid + 1; // Starting index for right subarray
    int k = left;    // Starting index to be sorted
    long long invCount = 0;

    // Merge two halves and count inversions
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            invCount += (mid + 1 - i);  // Count inversions
        }
    }

    // Copy the remaining elements of left subarray, if any
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy the remaining elements of right subarray, if any
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copy the sorted subarray into Original array
    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return invCount;
}

long long mergeSortAndCount(vector<int> &arr, vector<int> &temp, int left, int right) {
    long long invCount = 0;
    if (left < right) {
        int mid = (left + right) / 2;

        invCount += mergeSortAndCount(arr, temp, left, mid);
        invCount += mergeSortAndCount(arr, temp, mid + 1, right);

        invCount += mergeAndCount(arr, temp, left, mid, right);
    }
    return invCount;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    vector<int> temp(n);
    long long result = mergeSortAndCount(p, temp, 0, n - 1);

    cout << result << '\n';
    return 0;
}
