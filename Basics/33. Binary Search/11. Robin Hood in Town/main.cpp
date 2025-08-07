// https://codeforces.com/contest/2014/problem/C


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"

 
bool badF(vector<ll> &given, ll n, ll currSum, ll ele)
{
    ll sumT = currSum + ele;
    ll cnt = 1;
    double newAverage = static_cast<double>(sumT) / n;
    double halfAverage = newAverage / 2.0;
 
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        if (given[i] < halfAverage)
        {
            count++;
        }
 
        if(count == cnt){
            cnt++;
        }
    }
 
    if(count > n / 2){
        return true;
    }
 
    return false;
}
 
ll solve(vector<ll> &given, ll n)
{
    if (n == 1)
    {
        return -1;
    }
 
    if (n == 2)
    {
        return -1;
    }
 
    ll cnt = 0;
    ll givenSum = 0;
    ll maxi = *max_element(given.begin(), given.end());
    vector<ll> temp;
    for (int i = 0; i < n; i++)
    {
        givenSum += given[i];
        temp.push_back(givenSum);
    }
 
    ll left = 0, right = 1e12, ans = -1;
    while (left <= right)
    {
        ll mid = left + (right - left) / 2;
 
        if (badF(given, n, givenSum, mid))
        {
            cnt += 2;
            ans = mid;
            right = mid - 1;
        }
        else
        {
            temp.push_back(cnt);
            cnt--;
            left = mid + 1;
        }
    }
 
    if(ans != -1){
        return ans;
    }
    
    return -1;
}
 
void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    sort(arr.begin(), arr.end());
 
    ll ans = solve(arr, n);
 
    if (ans == -1)
    {
        cout << -1 << nline;
        return;
    }
    
    cout << ans << nline;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}