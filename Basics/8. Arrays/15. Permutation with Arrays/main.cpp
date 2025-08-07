// https://vjudge.net/problem/Gym-287310R#google_vignette

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int> temp1(n), temp2(n);
	unordered_map<int, int> mpp1, mpp2;
	for(int i=0; i<n; i++){
		cin >> temp1[i];
		mpp1[temp1[i]]++;
	}
	for(int i=0; i<n; i++){
		cin >> temp2[i];
		mpp2[temp2[i]]++;
	}
	bool flag = true;
	for(auto pair: mpp1){
		if(mpp2.find(pair.first) == mpp2.end() || mpp2[pair.first] != pair.second){
			flag = false;
			break;
		}
	}
	if(flag) cout << "yes" << endl;
	else cout << "no" << endl;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     vector<int> temp1(n), temp2(n);
//     unordered_map<int, int> mpp1, mpp2;

//     // Reading first array and updating frequency in mpp1
//     for (int i = 0; i < n; i++) {
//         cin >> temp1[i];
//         mpp1[temp1[i]]++;
//     }

//     // Reading second array and updating frequency in mpp2
//     for (int i = 0; i < n; i++) {
//         cin >> temp2[i];
//         mpp2[temp2[i]]++;
//     }

//     // Comparing the frequency maps
//     bool flag = (mpp1 == mpp2); // Comparing if both maps are the same

//     if (flag)
//         cout << "yes" << endl;
//     else
//         cout << "no" << endl;

//     return 0;
// }
