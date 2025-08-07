
// https://codeforces.com/contest/2024/problem/C
// Radhe Radhe
#include <bits/stdc++.h> 

using namespace std;

// #ifndef ONLINE_JUDGE  
// #include "debug.h" ;
// #define dbg(x)                cerr<<#x<<"  ";_print(x);cerr<<endl;
// #else
// #define dbg(x);
// #endif

#define int                   long long
#define pb                    push_back
#define INF                   2e18
#define all(x)                (x).begin(), (x).end()
#define sz(x)                 (int)(x).size()



void solve()
{
    int n;
    cin>>n;
    vector<array<int,3>> vec(n);
    for(auto &k:vec)cin>>k[0]>>k[1];
    for(auto &k:vec){
        if(k[0]>k[1]){
            swap(k[0],k[1]);
            k[2]=1;
        }
    }
    sort(all(vec));
    for(auto k:vec){
        if(k[2])swap(k[0],k[1]);
        cout<<k[0]<<" "<<k[1]<<" ";
    }
    cout<<"\n";
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 

    int t=1;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        // cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}