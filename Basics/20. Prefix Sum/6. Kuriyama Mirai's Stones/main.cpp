// https://codeforces.com/contest/433/problem/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 10;
int a[N] , b[N];
ll ps1[N] , ps2[N];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++){
        ps1[i]=ps1[i-1] + a[i];
        ps2[i]=ps2[i-1] + b[i];
    }
    int q; cin>>q;
    for(int i=0;i<q;i++){
        int type, l ,r; cin>>type>>l>>r;
        if(type==1){
            cout<<ps1[r] - ps1[l-1]<<'\n';
        }else{
            cout<<ps2[r] - ps2[l-1]<<'\n';
        }
    }
}