// https://cses.fi/problemset/task/1713

#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL); cout.tie(NULL);
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		int count = 0;
		for(int i=1; i*i<=n; i++) {
			if((n%i) == 0){
				count++;
				if(i != n/i){
					count ++;
				}
			}
		}
		cout << count << endl;
	}
}
