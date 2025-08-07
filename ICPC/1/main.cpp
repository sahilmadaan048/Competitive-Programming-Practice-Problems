
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

// void solve(){
// 	string s;
// 	getline(cin,s);
// 	int n = s.size();
// 	string word;
// 	vector<string> temp;
// 	vi temp2;
// 	stringstream ss;
// 	while(ss >> word){
// 		temp.push_back(word);
// 		temp2.push_back(word2.size());
// 	}	

// }

// int main(){
// 	fast;
// 	int t=8;
// 	while(t--){
// 		solve();
// 	}
// 	return 0;
// }




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

// void solve(){
// 	string s; cin>>s;
// 	int n1 = s[0]-'0';
// 	char c = s[1];
// 	int n2 = s[2]-'0';
// 	if(n1>n2){
// 		if(c == '='){
// 			s[0] = s[2];
// 		}else if(c =='<'){
// 			s[0] = char(s[2]-'0'-1);
// 		}
// 		else cout << s << endl;
// 	}
// 	else if(n1<n2){
// 		if(c == '='){
// 			s[0] = s[2];
// 		}else if(c == '>'){
// 			s[0] = (char)s[2]-+1;
// 		}else cout << s << endl;
// 	}
// 	else{
// 		if(c == '='){
// 			cout << s << endl;
// 		}
// 		else s[1] == '=';
// 	}

// }

// int main(){
// 	fast;
// 	int t; cin >> t;
// 	while(t--){
// 		solve();
// 	}
// 	return 0;
// }




#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

void solve(){
    string s; cin>>s;
    int n = s.size();
    unordered_set<char> st;
    for(auto ele: s) st.insert(ele);
    if(st.size() == 1) {
        cout<<"NO\n";
        return;
    }
    cout << "YES\n";
    sort(s.begin(), s.end());
    swap(s[0], s[n-1]);
    cout << s << endl;
    return;
}

int main(){
    fast;
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
