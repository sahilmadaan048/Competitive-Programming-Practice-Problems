// Stop lying! You're a 822E - Liar!
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/hash_policy.hpp>
// #include <ext/pb_ds/priority_queue.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define fi first
#define se second
#define fill0(a) memset(a, 0, sizeof(a))
#define fill1(a) memset(a, -1, sizeof(a))
#define fillbig(a) memset(a, 63, sizeof(a))
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define mt make_tuple
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
template<typename T1, typename T2> void chkmin(T1 &x, T2 y) {if (x > y) x = y;}
template<typename T1, typename T2> void chkmax(T1 &x, T2 y) {if (x < y) x = y;}
typedef pair<int, int> pii;
typedef long long i64;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef long double ld;
int n,i,j;
i64 ans;
char a[1000005];
int f[1000005];
void solve(){
	cin>>n;ans=0;
	for(i=1;i<=n;i++){
		cin>>a[i];
		f[i]=i;
	}
	for(i=1;i<=n;i++){
		if(a[i]=='0'){
			ans+=f[i];
		}
		for(j=i;j<=n;j+=i){
			if(a[j]=='1') break;
			f[j]=min(f[j],i);
		}
	}
	cout<<ans<<endl;
}
int main(){
	ios_base::sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}