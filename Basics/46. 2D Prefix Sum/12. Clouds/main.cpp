// https://atcoder.jp/contests/abc434/tasks/abc434_d

// Author - sahilmadaan048

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
  vector<vector<ll>> a(2025,vector<ll>(2025,0));
  vector<vector<ll>> b(2025,vector<ll>(2025,0));
  ll n;
  cin >> n;
  for(ll k=1;k<=n;k++){
    ll u,d,l,r;
    cin >> u >> d >> l >> r;
    d++; r++;
    a[u][l]++;
    a[u][r]--;
    a[d][l]--;
    a[d][r]++;
    b[u][l]+=k;
    b[u][r]-=k;
    b[d][l]-=k;
    b[d][r]+=k;
  }
  for(ll i=0;i<2025;i++){
    for(ll j=0;j<2025;j++){
      if(j){
        a[i][j]+=a[i][j-1];
        b[i][j]+=b[i][j-1];
      }
    }
  }
  for(ll i=0;i<2025;i++){
    for(ll j=0;j<2025;j++){
      if(i){
        a[i][j]+=a[i-1][j];
        b[i][j]+=b[i-1][j];
      }
    }
  }
  vector<ll> bk(n+1,0);
  for(ll i=1;i<=2000;i++){
    for(ll j=1;j<=2000;j++){
      if(a[i][j]==0){bk[0]++;}
      else if(a[i][j]==1){bk[b[i][j]]++;}
    }
  }
  for(ll i=1;i<=n;i++){
    cout << bk[0]+bk[i] << "\n";
  }
  return 0;
}