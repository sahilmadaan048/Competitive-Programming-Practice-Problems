// https://codeforces.com/gym/105666/problem/B

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        multiset<int> light;
        multiset<int> dark;
        priority_queue<pair<int,int>> e;
        for (int i=1; i<=n; i++)
        {
            int x,y;
            cin >> x >> y;
            if (y) dark.insert(x);
            else light.insert(x);
        }
        for (int i=1; i<=n; i++)
        {
            int x,y;
            cin >> x >> y;
            e.push(make_pair(x,y));
        }
        bool hz=true;
        while(!e.empty())
        {
             auto x=e.top().first;
             auto y=e.top().second;
             if (y)
             {
                 x=(x+1)/2;
                 auto x1=dark.lower_bound(x);
                 if (x1!=dark.end())
                 {
                     e.pop();
                     dark.erase(x1);
                 }
                 else
                 {
                     x=e.top().first;
                     x1=light.lower_bound(x);
                     if (x1!=light.end())
                     {
                        e.pop();
                        light.erase(x1);
                     }
                     else
                     {
                         hz=false;
                         break;
                     }
                 }
             }
             else
             {
                 x=(x+1)/2;
                 auto x1=light.lower_bound(x);
                 if (x1!=light.end())
                 {
                     e.pop();
                     light.erase(x1);
                 }
                 else
                 {
                     x=e.top().first;
                     x1=dark.lower_bound(x);
                     if (x1!=dark.end())
                     {
                        e.pop();
                        dark.erase(x1);
                     }
                     else
                     {
                         hz=false;
                         break;
                     }
                 }
             }
        }
        if (hz) cout << "YES" ;
        else cout << "NO";
        cout << '\n';
    }
}
