// https://codeforces.com/contest/1201/problem/C


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

bool check(int mid, vi &temp, int k, int n){
    ll needed = 0; 
    for(int i = n / 2; i < n; i++) { 
        if (temp[i] < mid) {
            needed += (mid - temp[i]);
        }
        if (needed > k) { 
            return false;
        }
    }
    return true; 
}

void solve(){
	int n, k; cin>>n>>k;
	vi temp(n);
	for(int i=0; i<n; i++){
		 cin>>temp[i];
	}
	sv(temp);
	int low = temp[n/2];
	int high = temp[n-1]+k;
	int ans = -1;
	while(low<=high){
		int mid = (low)+(high-low)/2;
		if(check(mid, temp, k, n)){
			ans = mid;
			low = mid+1;
		}
		else {
			high = mid-1;
		}
	}
	cout << ans << "\n";
	return;
}

int main(){
	fast;
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}
