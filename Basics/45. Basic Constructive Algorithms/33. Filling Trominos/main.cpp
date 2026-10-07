// https://cses.fi/problemset/task/2423

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
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed 
#define bin(x,y)  bitset<y>(x) 
using namespace std;
int MOD=1e9+7;      // Hardcoded, directly change from here for functions!


void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================

#define ll long long
#define pb push_back
int g[100][100];
int aa[2][3]={{1,1,2},{1,2,2}};
int bb[3][2]={{1,1},{1,2},{2,2}};
int cc[5][9]={{1,1,4,4,1,4,4,1,1},{1,2,4,1,1,2,4,3,1},{2,2,3,5,5,2,2,3,3},{1,3,3,4,5,1,3,1,1},{1,1,4,4,1,1,3,3,1}};
string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void put(int a, int b, int type, int t){
    if(type==1){
        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                g[a+i][b+j]=aa[i][j]+t;
            }
        }
    }
    else if(type==2){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                g[a+i][b+j]=bb[i][j]+t;
            }
        }
    }
    else{
        for(int i=0; i<5; i++){
            for(int j=0; j<9; j++){
                g[a+i][b+j]=cc[i][j]+t;
            }
        }
    }
}

void fill(int a, int b, int x, int y, int delta){
    //delta is for not repeating letter for adjacent piece
    if(x==2){//2*y board
        for(int i=0; i<y; i+=3){
            put(a, b+i, 1, delta);
        }
        return;
    }
    if(x%2==0){//2k*y board
        int temp1=delta;
        for(int i=0; i<x; i+=2){
            if(i%4==0) fill(a+i, b, 2, y, temp1);
            else fill(a+i, b, 2, y, temp1+2);
        }
        return;
    }
    else if(y%2==0){//x*2k board
        int temp2=delta;
        for(int i=0; i<y; i+=2){
            if(i%4) put(a, b+i, 2, temp2+4);
            else put(a, b+i, 2, temp2+6);
        }
        fill(a+3, b, x-3, y, temp2);
    }
    else{
        //for other board, decompose them into
        //one 5*9, one (x-5)*9, and one remaining chunk.
        int temp3=delta;
        put(a, b, 3, temp3+16);
        fill(a+5, b, x-5, 9, temp3+12);
        fill(a, b+9, x, y-9, temp3);
    }
}

void say(int x, int y, bool trans){
    if(trans){
        for(int i=0; i<y; i++){
            for(int j=0; j<x; j++){
                cout<<s[g[j][i]-1];
            }
            cout<<'\n';
        }
    }
    else{
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                cout<<s[g[i][j]-1];
            }
            cout<<'\n';
        }
    }
}

int32_t main(){
    int qq;
    cin>>qq;
    int m, n;
    for(int i=1; i<=qq; i++){
        cin>>m>>n;
        if(m%3&&n%3){
            cout<<"NO\n";
        }
        else if(m%2&&n%2&&(m==3||n==3)){
            cout<<"NO\n";
        }
        else if(m==1||n==1){
            cout<<"NO\n";
        }
        else if(n%3==0){
            cout<<"YES\n";
            fill(0,0,m,n,0);
            say(m,n,false);
        }
        else{
            cout<<"YES\n";
            fill(0,0,n,m,0);
            say(n,m,true);
        }
    }
}