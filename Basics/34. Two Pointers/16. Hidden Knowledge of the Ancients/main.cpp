// https://codeforces.com/problemset/problem/2149/E

// Author - sahilmadaan048

#include<bits/stdc++.h>
using namespace std;
#ifndef BADGNU
#endif
#define ll long long
#define ld long double
#define y1 cheza
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
const int N=2e5+100;
const int M=5001;
const int B=447;
const int mod=998244353;
const ll INF=1e18;
const int dx[]={1,-1,0,0};
const int dy[]={0,0,1,-1};
const double eps=1e-6;
int n,k,l,r;
int a[N];
vector<int>unic;
int cntx[N];
int cnty[N];
void test(){
    cin>>n>>k>>l>>r;
    unic.clear();
    for(int i=1;i<=n;i++){
        cin>>a[i];
        unic.push_back(a[i]);
    }
    sort(unic.begin(),unic.end());
    unic.resize(unique(unic.begin(),unic.end())-unic.begin());
    for(int i=1;i<=n;i++){
        a[i]=lower_bound(unic.begin(),unic.end(),a[i])-unic.begin();
        cntx[i-1]=0;
        cnty[i-1]=0;
    }
    int resx=0;
    int resy=0;
    ll ans=0;
    for(int i=1,x=0,y=1;i<=n;i++){
        while(y<=n&&resy<=k){
            if(cnty[a[y]]==0){
                if(resy==k)break;
                resy++;
            }
            cnty[a[y]]++;
            y++;
        }
        while(x+1<=n&&resx<k){
            if(cntx[a[x+1]]==0){
                resx++;
            }
            cntx[a[x+1]]++;         
            x++;
        }
        if(resx==k){
            ans+=max(min(y-1,i+r-1)-max(x,i+l-1)+1,0);
        }
        cntx[a[i]]--;
        cnty[a[i]]--;
        if(cntx[a[i]]==0){
            resx--;
        }
        if(cnty[a[i]]==0){
            resy--;
        }
    }

    cout<<ans<<'\n';
}


signed main(){
    unic.reserve(N);
    int t2=1;
    cin>>t2;
    for(int i=1;i<=t2;i++){
        test();
    }
}