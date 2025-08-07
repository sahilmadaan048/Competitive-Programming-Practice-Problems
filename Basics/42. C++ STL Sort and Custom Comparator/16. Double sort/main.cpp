// // https://codeforces.com/problemset/problem/1681/C



// #include <bits/stdc++.h>
// using namespace std;
// #define ll             long long int 
// #define ulli           unsigned long long int 
// #define li             long int 
// #define ff(i,a,b)      for(int i=a;i<b;i++)
// #define fb(i,b,a)      for(int i=b;i>=a;i--)
// #define w(t)           while(--t >= 0)
// #define l(s)           s.length()
// #define ci(n)          cin>>n;
// #define fast           ios_base::sync_with_stdio(false);
// #define sa(a,n)        sort(a,a+n)
// #define sv(v)          sort(v.begin(),v.end())
// #define cy             cout<<"YES\n"
// #define cn             cout<<"NO\n"
// #define nl             cout<<"\n"
// #define minus          cout<<"-1\n";
// #define vi             vector<int>
// #define pb             push_back
// #define tc             int t; cin>>t;
// #define pp             pair<int,int>
// #define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
// #define mod            1000000007
// #define co(n)          cout<<n;
// #define ret            return 0
// #define mi             map<int,int>
// #define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
// #define forn(i, n)     ff(i, 0, n)
// #define sz(v)          int((v).size())


// void count(vi & temp1, vi & temp2){
// 	int n = temp1.size();
// 	unordered_map<int,int> mp1, mp2;
// 	ff(i,0,n){
// 		mp1[i] = temp1[i];
// 		mp2[i] = temp2[i];
// 	}
// 	//minimum no of swaos to make it sorted how
// 	vector<pair<int,int>> pairs;
// 	for(int i=0; i<n-1; i++){
// 		for(int j=0; j<n; j++){
// 			if((mp1[i]<mp1[j] and mp2[i]<mp2[j]) or (mp1[i]>mp2[j] and mp2[i]>mp2[j])){
// 				pairs.push_back({i+1, j+1});
// 			}
// 		}
// 	}
// 	cout << pairs.size() << "\n";
// 	for(auto pair: pairs){
// 		cout << pair.first << " " << pair.second << "\n";
// 	}
// 	cout << endl;
// }

// void solve(){
// 	int n; cin>>n;
// 	vi temp1(n), temp2(n);
// 	ff(i,0,n) ci(temp1[i]);
// 	ff(i,0,n) ci(temp2[i]);
// 	if(is_sorted(temp1.begin(), temp1.end()) and is_sorted(temp2.begin(), temp2.end())){
// 		cout << "0\n";
// 		return;
// 	}
// 	else if((is_sorted(temp2.begin(), temp2.end()) and !is_sorted(temp1.begin(), temp1.end())) or (!is_sorted(temp2.begin(), temp2.end()) and is_sorted(temp1.begin(), temp1.end()))){
// 		cout << "-1\n";
// 		return;
// 	}
// 	else{
// 		count(temp1, temp2);
// 	}
// 	return;
// }

// int main(){
// 	fast;
// 	int t; cin >> t;
// 	while(t--){
// 		solve();
// 	}
// 	return 0;
// }


// // 3 2 1 2 
// // 3 2 2 3 

// // 2 3 1 2 
// // 2 3 2 3 

// // 2 1 3 2
// // 2 3 3 2 



#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define ff(i,a,b) for(int i=a;i<b;i++)
#define ci(n) cin >> n

void countSwaps(vi &temp1, vi &temp2) {
    int n = temp1.size();
    vector<pair<int, int>> swaps;
    vector<pair<int, int>> combined(n);

    for (int i = 0; i < n; i++) {
        combined[i] = {temp1[i], temp2[i]};
    }

    vector<pair<int, int>> sorted_combined = combined;
    sort(sorted_combined.begin(), sorted_combined.end());
    for (int i = 0; i < n; i++) {
        if (combined[i] != sorted_combined[i]) {
            for (int j = i + 1; j < n; j++) {
                if (combined[j] == sorted_combined[i]) {
  
                    swap(combined[i], combined[j]);
                    swaps.push_back({i + 1, j + 1});
                    break;
                }
            }
        }
    }

    cout << swaps.size() << "\n";
    for (auto &swap_pair : swaps) {
        cout << swap_pair.first << " " << swap_pair.second << "\n";
    }
}

void solve() {
    int n;
    ci(n);
    vi temp1(n), temp2(n);
    
    for (int i = 0; i < n; i++) ci(temp1[i]);
    for (int i = 0; i < n; i++) ci(temp2[i]);

// 	ff(i,0,n) ci(temp1[i]);
// 	ff(i,0,n) ci(temp2[i]);
	if(is_sorted(temp1.begin(), temp1.end()) and is_sorted(temp2.begin(), temp2.end())){
		cout << "0\n";
		return;
	}
	else if((is_sorted(temp2.begin(), temp2.end()) and !is_sorted(temp1.begin(), temp1.end())) or (!is_sorted(temp2.begin(), temp2.end()) and is_sorted(temp1.begin(), temp1.end()))){
		cout << "-1\n";
		return;
	}
    countSwaps(temp1, temp2);
}

int main() {
    fast;
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
