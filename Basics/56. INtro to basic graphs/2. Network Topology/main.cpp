// https://codeforces.com/problemset/problem/292/B?locale=en

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

// unordered_map<int, vector<int>> mp;

void solve(){
	int n, m; cin>>n>>m;
	int u, v;
	unordered_map<int,int> dg;
	for(int i=0; i<m; i++){
		cin >> u >> v;
		// mp[u].push_back(v);
		// mp[v].push_back(u);
		dg[u]++;
		dg[v]++;
	}
	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	for(auto p: dg){
		if(p.second == 2){
			cnt1 ++;
		}else if(p.second == 1) {
			cnt2++;
		}else if(p.second > 2){
			cnt3++;
		}
	}
	if(cnt1 == n-2 and cnt2 == 2){
		cout << "bus topology" << endl;
	}else if(cnt1 == n) {
		cout << "ring topology" << endl;
	}else if(cnt3 == 1 and cnt2 == n-1) {
		cout << "star topology" << endl;
	}else{
		cout << "unknown topology" << endl;
	}
}

int main(){
	fast;
	int t = 1;
	while(t--){
		solve();
	}
	return 0;
}
