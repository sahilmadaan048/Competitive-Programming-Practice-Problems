// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	cin >> n;
	vector<int> temp;
	int num = n;

	// if (n == 0) { // Handling n = 0 edge case
	// 	cout << "YES" << "\n";
	// 	return 0;
	// }

	// Convert n to binary and store it in reverse order
	while(n > 0){
		temp.push_back(n & 1);
		n >>= 1;
	}

	int i = 0, j = temp.size() - 1;
	bool flag = true;

	// Check if the binary number is a palindrome
	while(i < j){
		if(temp[i] != temp[j]){
			flag = false;
			break;
		}
		i++;
		j--;
	}
	// cout << n << endl;
	if(flag and (num%2) != 0) cout << "YES" << "\n";
	else cout << "NO" << "\n";

	return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n; cin >> n;
// 	vector<int> temp;
// 	while(n>0){
// 		temp.push_back(n&1);
// 		n >>= 1;
// 	}
// 	int i=0, j=temp.size()-1;
// 	bool flag = true;
// 	while(i<j){
// 		if(temp[i] != temp[j]){
// 			flag=false;
// 			break;
// 		}

// 		i++;
// 		j--;
// 	}
// 	if(flag) cout << "YES"  << "\n";
// 	else cout << "NO" << "\n";
// }