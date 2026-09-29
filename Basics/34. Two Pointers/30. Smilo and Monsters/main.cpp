// https://codeforces.com/problemset/problem/1891/C

// Author - sahilmadaan048

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
 
int main()
{
    _test
    {
        int n;
        cin>>n;
 
        vector<ll int> a(n);
        for(auto &e: a)     cin>>e;
 
        sort(a.begin(), a.end());
 
        ll int tot = accumulate(a.begin(), a.end(), 0ll);
        ll int ans = tot;
        ll int sum = 0;
        ll int cnt = n;
 
        for(auto e: a)
        {
            sum += e;
            tot -= e;
            cnt--;
 
            if(tot <= sum)
            {
                if(tot < sum)
                {
                    ll int x = sum-tot;
                    x /= 2;
 
                    if(x)
                    {
                        cnt++;
                        tot += x;
                        sum -= x;
                    }
                }
 
                ans = sum + cnt;
                break;
            }
        }
 
        cout<<ans<<"\n";
    }
}