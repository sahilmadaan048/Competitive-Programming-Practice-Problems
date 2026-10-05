// https://cses.fi/problemset/task/3423

// Author - sahilmadaan048

#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

bool isprime(int n){
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0) return false;
    }
    return true;
}

pair<vi,vi> build(int l,int r){
    if(l > r) return {{},{}};  
    int sum = l + r;
    while(!isprime(sum)) sum++;

    int L = sum - r;   
    auto prev = build(l, L - 1);
    vi a = prev.first;
    vi b = prev.second;

    for(int i = L; i <= r; i++){
        a.push_back(i);
        b.push_back(sum - i);
    }

    return {a,b};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    auto k = build(1,n);
    vi a = k.first;
    vi b = k.second;

    for(auto x:a) cout<<x<<" ";
    cout<<"\n";
    for(auto x:b) cout<<x<<" ";
}