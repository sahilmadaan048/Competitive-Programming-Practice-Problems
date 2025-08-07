#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
    	
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        ll moves = 0;

        if(s[0] == '1') moves++;

        for(int i = 1; i < n; i++){
            if(s[i] != s[i-1]) moves++;
        }
        
        vector<int> pos01, pos10;
  		
        if(s[0] == '1') pos01.push_back(0);
 
 		// for(auto ele: pos01) cout << ele << " ";
        for(int i = 1; i < n; i++){
            if(s[i-1]=='0' && s[i]=='1') pos01.push_back(i);
            else if(s[i-1]=='1' && s[i]=='0') pos10.push_back(i);
        }
 		// for(auto ele: pos01) cout << ele << " ";
 		// for(auto ele: pos10) cout << ele << " ";
    
        int gain = 0;
     
        auto can2 = [&](const vector<int>& v){
            return v.size() >= 2 && v.back() - v.front() >= 2;
        };
      
        //make the gain =2 in case this happens
        if(can2(pos01) || can2(pos10)){
            gain = 2;
        } else {
        
            vector<int> next0(n+1, n), next1(n+1, n);
            for(int i = n-1; i >= 0; i--){
                next0[i] = next0[i+1];
                next1[i] = next1[i+1];
                if(s[i]=='0') next0[i] = i;
                else          next1[i] = i;
            }
      
            vector<int> prev0(n, -1), prev1(n, -1);
            for(int i = 0; i < n; i++){
                if(s[i]=='0') prev0[i] = i;
                else           prev0[i] = i>0 ? prev0[i-1] : -1;
                if(s[i]=='1') prev1[i] = i;
                else           prev1[i] = i>0 ? prev1[i-1] : -1;
            }
      
            //here is the dikkat
            for(int b: pos01){
                if(gain) break;
                if(b+1 < n && next0[b+1] < n) gain = 1;
                if(b-2 >= 0 && prev1[b-2] >= 0) gain = 1;
            }
       
            for(int b: pos10){
                if(gain) break;
                if(b+1 < n && next1[b+1] < n) gain = 1;
                if(b-2 >= 0 && prev0[b-2] >= 0) gain = 1;
            }
        }
        ll cost = (ll)n + moves - gain;
        cout << cost << "\n";
    }
    return 0;
}
