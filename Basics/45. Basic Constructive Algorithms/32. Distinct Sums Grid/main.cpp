// https://cses.fi/problemset/task/3424

// Author - sahilmadaan048

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
 
const int MAXN=1005;
int g[MAXN][MAXN];
int r[MAXN], c[MAXN], r1, r2, c1, c2;
int cnt=0, ori;
int ex[1000005];
 
void rem(int x){
    ex[x]--;
    if(ex[x]==0) cnt--;
}
 
void add(int x){
    ex[x]++;
    if(ex[x]==1) cnt++;
}
 
int res;
void change(int x1, int y1, int x2, int y2){
    rem(r[x1]); rem(r[x2]); rem(c[y1]); rem(c[y2]);
    r[x1]+=(g[x2][y2]-g[x1][y1]);
    c[y1]+=(g[x2][y2]-g[x1][y1]);
    r[x2]-=(g[x2][y2]-g[x1][y1]);
    c[y2]-=(g[x2][y2]-g[x1][y1]);
    add(r[x1]); add(r[x2]); add(c[y1]); add(c[y2]);
    swap(g[x1][y1], g[x2][y2]);
}
 
int main(){
    int n;
    cin>>n;
    if(n<=3){
        cout<<"IMPOSSIBLE";
        return 0;
     }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            g[i][j]=i;
            r[i]+=g[i][j];
            c[j]+=g[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        add(r[i]);
        add(c[i]);
    }
    int sp=0;
    while(cnt<2*n && sp<50000){
        r1=rand()%n+1;
        c1=rand()%n+1;
        r2=rand()%n+1;
        c2=rand()%n+1;
        ori=cnt;
        change(r1, c1, r2, c2);
        if(cnt<ori) change(r1, c1, r2, c2);
        sp++;
    }
    if(cnt<2*n){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<g[i][j]<<" ";
        }
        cout<<'\n';
    }
}