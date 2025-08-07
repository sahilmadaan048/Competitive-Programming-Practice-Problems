// https://cses.fi/problemset/task/1068



#include <iostream>
using namespace std;

void solve(long long n) {
    cout << n <<  " ";
    if(n==1) return;
    if((n&1)) n=3*n+1;
    else n/=2;
    solve(n);
}

int main() {
    long long n;
    cin >> n;
    solve(n);
    return 0;
}
