// https://codeforces.com/contest/242/problem/A


#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int x,y,a,b;
  cin>>x>>y>>a>>b;
  set<pair<int, int>> st;
  int count = 0 ;
  for(int i=a; i<=x; i++){
    for(int j=b; j<=y; j++){
      if(i>j){
        st.insert({i, j});
        count++;
      }
    } 
  }
cout << count << endl;
for(auto pair:  st){
  cout << pair.first << " " << pair.second << endl;
}
return 0;
}