// https://codeforces.com/problemset/problem/1605/B


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
	int n; cin>>n;
	string s; cin>>s;
	if(is_sorted(s.begin(), s.end())){
		cout << "0\n" ;
		return;
	}
	vi ans;
	string temp = s;
	sv(temp);
	cout << "1\n";
	ff(i,0,n){
		if(temp[i] != s[i]){
			ans.push_back(i+1);
		}
	}
	cout << ans.size() << " " ;
	ff(i,0, ans.size()){
		cout << ans[i] << " ";
	}
	cout << endl;
}

int main(){
	fast;
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
