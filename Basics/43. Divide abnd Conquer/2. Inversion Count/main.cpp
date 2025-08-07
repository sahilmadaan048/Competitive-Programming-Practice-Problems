// // #include <iostream>
// // #include <string>
// // using namespace std;

// // bool check(string &s) {
// //     for (int i = 0; i < s.size() - 1; i++) {
// //         if (s[i] == s[i + 1] && s[i] == '1') {
// //             return true; // adjacent '1's found
// //         }
// //     }
// //     return false;
// // }

// // void solve() {
// //     int n;
// //     cin >> n;
// //     string s;
// //     cin >> s;
// //     int cnt = 0;

// //     for (auto ele : s) cnt += (ele == '1' ? 1 : 0);

// //     if (cnt % 2 == 1) { // if odd count of '1's
// //         cout << "NO\n";
// //     } 
// //     else if (cnt == 2) { 
// //         if (check(s)) {
// //             cout << "NO\n";
// //         } else {
// //             cout << "YES\n";
// //         }
// //     } 
// //     else {
// //         cout << "YES\n";
// //     }
// //     return;
// // }

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(0);
    
// //     int t;
// //     cin >> t;
// //     while (t--) {
// //         solve();
// //     }
// //     return 0;
// // }



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

// void solve(){
// 	int n; cin>>n;
// 	string s; cin>>s;

// }

// int main(){
// 	fast;
// 	int t; cin >> t;
// 	while(t--){
// 		solve();
// 	}
// 	return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> temp(n);
//     for(int i = 0; i < n; i++) {
//         cin >> temp[i];
//     }

//     vector<int> vis(n + 1, 0); // Initialize visited array with 0s
//     vis[temp[0]] = 1; 

//     for(int i = 1; i < n; i++) {
//         int chair = temp[i];

//         // Check conditions based on the chair number
//         if(chair == 1) {
//             if(!vis[chair + 1]) {
//                 cout << "NO\n";
//                 return;
//             }
//         }
//         else if(chair == n) {
//             if(!vis[chair - 1]) {
//                 cout << "NO\n";
//                 return;
//             }
//         }
//         else {
//             if(!vis[chair - 1] && !vis[chair + 1]) {
//                 cout << "NO\n";
//                 return;
//             }
//         }
//         vis[chair] = 1;
//     }

//     cout << "YES\n";
// }

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         solve();
//     }
//     return 0;
// }



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

// void solve(){
// 	int n; cin>>n;
// 	string s; cin>>s;
// 	int cnt = 0 ;
// 	for(auto & ele : s){
// 		if(ele == 'U') cnt++;
// 	}
// 	if(cnt&1) cout << "YES\n";
// 	else cout << "NO\n";
// 	return;
// }

// int main(){
// 	fast;
// 	int t; cin >> t;
// 	while(t--){
// 		solve();
// 	}
// 	return 0;
// }




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

// void solve() {
//     int n;
//     cin >> n;
    
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) cin >> a[i];
    
//     ll pref_max = 0, s = 0, mx = 0;
//     for (int i = 0; i < n; i++) {
//         pref_max = max(pref_max, (ll) a[i]);
        
//         ll d = pref_max - a[i];
//         s += d;
//         mx = max(mx, d);
//     }
    
//     cout << s + mx << endl;
// }


// int main(){
// 	fast;
// 	int t; cin >> t;
// 	while(t--){
// 		solve();
// 	}
// 	return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int minVal = *min_element(arr.begin(), arr.end());

//     vector<int> remaining;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] % minVal != 0) {
//             remaining.push_back(arr[i]);
//         }
//     }

//     if (remaining.empty()) {
//         cout << "YES\n";
//     } else {
//         cout << "NO\n";
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

void solve(){
	
}

int main(){
	fast;
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
