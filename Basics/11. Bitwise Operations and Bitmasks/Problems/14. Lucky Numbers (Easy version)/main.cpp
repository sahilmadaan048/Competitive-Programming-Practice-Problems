// https://codeforces.com/problemset/problem/96/B

#include <bits/stdc++.h>
 
using namespace std;
 
vector<long long> pb;
 
long long n;
void dfs(long long now, int fours, int sevens)
{
    if (now >= 100000000000ll)
    {
        return;
    }
    if (fours == sevens)
    {
        pb.push_back(now);
    }
 
    dfs(now * 10 + 4, fours + 1, sevens);
    dfs(now * 10 + 7, fours, sevens + 1);
}
 
int main()
{
 
    cin >> n;
    pb.clear();
    dfs(0, 0, 0);
    sort(pb.begin(), pb.end());
    int i = 0;
 
    for (; pb[i] < n; ++i);
 
    cout << pb[i] << endl;
}