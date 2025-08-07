// https://vjudge.net/problem/CodeForces-26A

#include<bits/stdc++.h>
using namespace std;

bool check(int i, vector<bool>& temp){
	int count = 0 ;	
	for(int j=2; j<=i; j++){
		if(temp[j]==true and i%j == 0) { //if j is prime and divides i
			count++;

			//remove all occurences of j from i
			while(i%j == 0){
				i /= j;
			}
		}
	}

	return count == 2;
}

int main() {
	int n; cin >> n;
	//lets use the sieve algo here
	vector<bool> temp(n,true);
	temp[0]= temp[1] = false;	
	for(int i=2; i*i<=n; i++){
		if(temp[i] == true){
			for(int j=2*i; j<n; j+=i){
				temp[j] = false;
			}
		}
	}
	//now we have the number swhich are prime
	int count = 0 ;
	for(int i=1; i<=n; i++ ){
		if(check(i, temp)){
			count++;
		}
	}
	cout << count << "\n";
	return 0 ;
}