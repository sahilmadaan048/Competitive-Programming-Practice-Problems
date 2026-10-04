// https://codeforces.com/contest/2061/problem/D

// Author - sahilmadaan048

#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define srt(v) sort(v.begin(),v.end())
#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));
#define bin(x,y) bitset<y>(x)

using namespace std;

int MOD = 1e9 + 7;

void modadd(int &a, int b) {
  a = ((a % MOD) + (b % MOD)) % MOD;
}

void modsub(int &a, int b) {
  a = ((a % MOD) - (b % MOD) + MOD) % MOD;
}

void modmul(int &a, int b) {
  a = ((a % MOD) * (b % MOD)) % MOD;
}

template<typename typC, typename typD>
istream &operator>>(istream &cin, pair<typC, typD> &a) {
  return cin >> a.first >> a.second;
}

template<typename typC>
istream &operator>>(istream &cin, vector<typC> &a) {
  for(auto &x : a)
    cin >> x;
  return cin;
}

template<typename typC, typename typD>
ostream &operator<<(ostream &cout, const pair<typC, typD> &a) {
  return cout << a.first << ' ' << a.second;
}

template<typename typC, typename typD>
ostream &operator<<(ostream &cout, const vector<pair<typC, typD>> &a) {
  for(auto &x : a)
    cout << x << '\n';
  return cout;
}

template<typename typC>
ostream &operator<<(ostream &cout, const vector<typC> &a) {
  int n = a.size();

  if(!n)
    return cout;

  cout << a[0];

  for(int i = 1; i < n; i++)
    cout << ' ' << a[i];

  return cout;
}


void solve() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n);
  vector<int> b(m);

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }

  multiset<int> st;

  for(int i = 0; i < n; i++) {
    st.insert(a[i]);
  }

  priority_queue<int> pq;

  for(int i = 0; i < m; i++) {
    pq.push(b[i]);
  }

  while(!pq.empty()) {
    int x = pq.top();
    pq.pop();

    auto it = st.find(x);

    if(it != st.end()) {
      st.erase(it);
      continue;
    }

    if(x == 1) {
      cout << "No\n";
      return;
    }

    int x1 = x / 2;
    int x2 = x - x1;

    pq.push(x1);
    pq.push(x2);
  }

  if(st.empty()) {
   cout << "Yes\n";
 }
 else {
   cout << "No\n";
 }

 return;
}


int32_t main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T;
  cin >> T;

  while(T--) {
    solve();
  }

  return 0;
}