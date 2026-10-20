// https://www.codechef.com/problems/P6172

// Author - sahilmadaan048

#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree <int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
#define int long long
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ld> vld;
typedef vector<pair<ll, ll>> vpll;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vpii;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
typedef pair<ll, ll> pll;
typedef priority_queue<ll> pq;
typedef priority_queue<pair<ll, ll>> pqp;
#define nl cout << endl;
#define f(i, k, n) for (int i = k; i < n; i++)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(s) s.begin(), s.end()
#define print(a) for (auto x : a) cout << x << " "; cout << endl;
#define printarr(a, n) for (int i = 0; i < n; i++) cout << a[i] << " "; cout << endl;
#define endl '\n'
#define sq(a) (a) * (a)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const int mod = 1e9 + 7;
const int mod2 = 998244353;
#define inp(arr) for (auto &it : arr) cin >> it;
 
int modexp(int a, int b) {
    if (b == 1) return a;
    if (b == 0) return 1;
    if (b % 2 == 0) return modexp((a % mod * a % mod) % mod, b / 2);
    return (a % mod * modexp((a % mod * a % mod) % mod, b / 2) % mod) % mod;
}
 
int gcd(int a, int b) {
    return __gcd(a, b);
}
 
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int par[200005];
int findulp(int u){
    if(u == par[u]) return u;
    return par[u] = findulp(par[u]);
}
void merge(int u,int v){
    u = findulp(u),v = findulp(v);
    if(u == v) return ;
    par[u] = v;
}

class segment{
    public:
    vi tree;
    vi lazy;
    vi islazy;
    int len;
    segment(int n){
        len = n;
        tree.resize(4*len);
        lazy.resize(4*len);
        islazy.resize(4*len,0);
    }
    void build(int node,int st,int end,vi &arr){
        if(st == end) {
        tree[node] = arr[st];
        return;}
        int mid = (st + end) / 2;
        build(2 *node + 1,st,mid,arr);
        build(2 *node + 2,mid + 1,end,arr);
        tree[node] = tree[2*node + 1] + tree[2*node + 2];
    }
    void update(int node,int st,int end,int rst,int rend,int val){
        pushdown(node,st,end);
        //no overlapp
        if(rst > end || rend < st) return ;
        // complete overlapp
        if(st >= rst && end <= rend){
        islazy[node] = 1;
        lazy[node] += val;
        pushdown(node,st,end);
        return;
        }
        //partial overlapp
        int mid = (st + end) / 2;
         update(2*node + 1,st,mid,rst,rend,val);
         update(2*node + 2,mid + 1,end,rst,rend,val);
         tree[node] = tree[2*node + 1] + tree[2*node + 2];
 
    }
    void pushdown(int node,int st,int end){
        if(islazy[node] == 0) return ;
        if(st == end){
            tree[node] += lazy[node];
            islazy[node] = 0;
            lazy[node] = 0;
        }
        else{
            tree[node] += (end - st + 1) * lazy[node];
            lazy[2*node + 1] += lazy[node];
            lazy[2*node + 2] += lazy[node];
            islazy[2*node + 1] = 1;
            islazy[2*node + 2] = 1;
            islazy[node] = 0;
            lazy[node] = 0;
        } 
 
    }
    int query(int node,int nst,int nend,int qst,int qend){
        //no overlapp
         pushdown(node,nst,nend);
        if(qst > nend || qend < nst) return 0;
        // complete overlapp
        if(nst >= qst && nend <= qend){ 
            return tree[node];}
        //partial overlapp
        int mid = (nst + nend) / 2;
        int ls = query(2*node + 1,nst,mid,qst,qend);
        int rs = query(2*node + 2,mid + 1,nend,qst,qend);
        return ls + rs;
    }
 
};
signed main() {
    int t;
    cin >> t;
    while (t--) {
       int n,k;
       cin >> n >> k;
       vi arr(n);
       inp(arr)
       int ans = 0;
       ordered_set os;
       f(i,k,n){
        os.insert(arr[i]);
       }
       int c = 0,sum = 0;
       while(c < (n - k + 1)/2){
        sum += *os.find_by_order(c);
        c++;
       }
       ans = 2*sum - (((n - k)%2 == 1)?*os.find_by_order(os.size()/2) : 0);
       int p1 = 0,p2 = k;
      // cout << ans << endl;
       while(p2 < n){
            int order = os.order_of_key(arr[p2]);
            if(order < (os.size() + 1)/2){
                sum -= arr[p2];
            }
            else sum -= *os.find_by_order((os.size() - 1)/2);
            os.erase(arr[p2]);
            os.insert(arr[p1]);
            order = os.order_of_key(arr[p1]);
            if(order < (os.size() + 1)/2){
                sum += arr[p1];
            }
            else sum += *os.find_by_order((os.size() - 1)/2);
            ans = max(ans,2*sum - (((n - k)%2 == 1)?*os.find_by_order(os.size()/2) : 0));
            p1++;
            p2++;
            //cout << ans << endl;
       }
       cout << ans << endl;

    }
 
}