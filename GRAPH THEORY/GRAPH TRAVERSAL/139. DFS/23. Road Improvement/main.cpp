// // // https://codeforces.com/contest/638/problem/C


// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll             long long int 
// // #define ulli           unsigned long long int 
// // #define li             long int 
// // #define ff(i,a,b)      for(int i=a;i<b;i++)
// // #define fb(i,b,a)      for(int i=b;i>=a;i--)
// // #define w(t)           while(--t >= 0)
// // #define l(s)           s.length()
// // #define ci(n)          cin>>n;
// // #define fast           ios_base::sync_with_stdio(false);
// // #define sa(a,n)        sort(a,a+n)
// // #define sv(v)          sort(v.begin(),v.end())
// // #define cy             cout<<"YES\n"
// // #define cn             cout<<"NO\n"
// // #define nl             cout<<"\n"
// // #define minus          cout<<"-1\n";
// // #define vi             vector<int>
// // #define pb             push_back
// // #define tc             int t; cin>>t;
// // #define pp             pair<int,int>
// // #define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
// // #define mod            1000000007
// // #define co(n)          cout<<n;
// // #define ret            return 0
// // #define mi             map<int,int>
// // #define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
// // #define forn(i, n)     ff(i, 0, n)
// // #define sz(v)          int((v).size())


// // //we have trees n vertices and n-1 edges
// // //

// // void solve(){
// // 	int n; cin>>n;
// // 	vector<vector<int>> temp(n+1);
// // 	for(int i=0; i<n; i++){
// // 		int u,v; cin>>u>>v;
// // 		temp[u].pb(v);
// // 		temp[v].pb(u);
// // 	}

// // }

// // int main(){
// // 	fast;
// // 	int t=1;
// // 	while(t--){
// // 		solve();
// // 	}
// // 	return 0;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll             long long int 
// // #define ulli           unsigned long long int 
// // #define li             long int 
// // #define ff(i,a,b)      for(int i=a;i<b;i++)
// // #define fb(i,b,a)      for(int i=b;i>=a;i--)
// // #define w(t)           while(--t >= 0)
// // #define l(s)           s.length()
// // #define ci(n)          cin>>n;
// // #define fast           ios_base::sync_with_stdio(false);
// // #define sa(a,n)        sort(a,a+n)
// // #define sv(v)          sort(v.begin(),v.end())
// // #define cy             cout<<"YES\n"
// // #define cn             cout<<"NO\n"
// // #define nl             cout<<"\n"
// // #define minus          cout<<"-1\n";
// // #define vi             vector<int>
// // #define pb             push_back
// // #define tc             int t; cin>>t;
// // #define pp             pair<int,int>
// // #define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
// // #define mod            1000000007
// // #define co(n)          cout<<n;
// // #define ret            return 0
// // #define mi             map<int,int>
// // #define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
// // #define forn(i, n)     ff(i, 0, n)
// // #define sz(v)          int((v).size())

// // void solve(){
// // 	int a,b,c; cin>>a>>b>>c;
// // 	int ans1 = abs(a-b)+abs(a-c); //taking coinciding with a
// // 	int ans2 = abs(a-b)+abs(b-c); //taking coincidence with b
// // 	int ans3 = abs(a-c)+abs(b-c); //tksing coincidence with c
// // 	cout << min(min(ans1, ans2), ans3) << "\n";
// // }

// // int main(){
// // 	fast;
// // 	int t; cin >> t;
// // 	while(t--){
// // 		solve();
// // 	}
// // 	return 0;
// // }




// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int T; cin >> T;

// //     while (T--) {
// //         int n; cin >> n;
// //         vector<int> a(n);
// //         for (int i = 0; i < n; i++) {
// //             cin >> a[i];
// //         }

// //         if (a[0] == a[n - 1]) {
// //             cout << "NO" << "\n";
// //         }
// //         else {
// //             cout << "YES" << "\n";
// //             string s(n, 'R'); 
// //             s[1] = 'B';
// //             cout << s << "\n";
// //         }
// //     }
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

// //2 for winning 1 for draw and 0 for loss

// void solve(){
//     int p1, p2, p3; cin>>p1>>p2>>p3;
//     if((p1+p2+p3)%2 != 0){
//         cout << "-1\n";
//         return;
//     }
//     else{
//         cout << min((p1+p2+p3)/2, p1+p2) << "\n";
//     }
//     return;
// }

// int main(){
//     fast;
//     int t; cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

// // 0
// // 1
// // -1
// // 2
// // -1
// // 6
// // 2



// #include <bits/stdc++.h>
 
// using namespace std;
 
// const int MAX = 200'007;
// const int MOD = 1'000'000'007;
 
// void solve() {
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;
//     string s;
//     for (int i = 1; i <= 12; i++) {
//         if (i == a || i == b) {s += "a";}
//         if (i == c || i == d) {s += "b";}
//     }
//     cout << (s == "abab" || s == "baba" ? "YES\n" : "NO\n");
// }
 
// int main() {
//     int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
//     // solve();
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
// bool check(string &s, int n, vi &temp) {
//     int size = s.size();
//     if (size != n) return false;
    
//     unordered_map<int, char> mp1;
//     unordered_map<char, int> mp2;

//     for (int i = 0; i < n; i++) {
//         int ele = temp[i];
//         if (mp1.find(ele) == mp1.end()) {
//             mp1[ele] = s[i];
//         } else {
//             if (mp1[ele] != s[i]) {
//                 return false;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         char ele = s[i];
//         if (mp2.find(ele) == mp2.end()) {
//             mp2[ele] = temp[i];
//         } else {
//             if (mp2[ele] != temp[i]) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// void solve() {
//     int n; cin >> n;
//     vi temp(n);
//     ff(i, 0, n) cin >> temp[i];
    
//     int m; cin >> m;
//     for (int i = 0; i < m; i++) {
//         string s; cin >> s;
//         if (check(s, n, temp)) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }
//     return;
// }

// int main() {
//     fast;
//     int t; cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool solve(const vector<int>& a, const string& s) {
  const int n = a.size();
  if (s.length() != n) {
    return false;
  }
  map<int, char> mp;
  set<char> seen;
  for (int i = 0; i < n; ++i) {
    if (mp.count(a[i])) {
      if (s[i] != mp[a[i]]) {
        return false;
      }
    } else {
      if (seen.count(s[i])) {
        return false;
      }
      mp[a[i]] = s[i];
      seen.insert(s[i]);
    }
  }
  return true;
}
 
int main() {
  int t; 
  cin >> t; 
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int m;
    cin >> m;
    vector<string> s(m);
    for(int i = 0; i < m; i++) cin >> s[i];
    for (const auto& si : s) {
      cout << (solve(a, si) ? "YES\n" : "NO\n");
    }
  }
  return 0;
}
