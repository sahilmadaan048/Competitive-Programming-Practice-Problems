// https://cses.fi/problemset/result/10142743/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int n = s.size();
    int mxlen=1, len=1;
    int i=0;
    while(i<n-1){
        if(s[i]==s[i+1]){
            len++;
        }
        else{
            mxlen = max(mxlen, len);
            len=1;
        }
        i++;
    }
    cout << max(mxlen, len) << endl;

    return 0;
}