#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int K=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>K) K=a[i];
        }
        int M=K+1;
        vector<long long> g(M+2), suf_max(M+2), suf_min(M+2);
        g[M]=0;
        suf_max[M]=0;
        suf_min[M]=0;
        for(int k=M-1;k>=1;--k){
            if(k%2==1) g[k]=suf_max[k+1]+1;
            else g[k]=suf_min[k+1]-1;
            suf_max[k]=max(g[k],suf_max[k+1]);
            suf_min[k]=min(g[k],suf_min[k+1]);
        }
        vector<pair<long long,int>> v;
        v.reserve(n);
        for(int i=0;i<n;i++){
            int ai = (a[i]==-1 ? M : a[i]);
            v.emplace_back(g[ai], i);
        }
        sort(v.begin(), v.end());
        vector<int> p(n);
        for(int i=0;i<n;i++) p[v[i].second] = i+1;
        for(int i=0;i<n;i++) cout<<p[i]<<(i+1<n?' ':'\n');
    }
    return 0;
}
