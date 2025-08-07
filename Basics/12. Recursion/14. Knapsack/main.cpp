// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n, w; cin >> n >> w;
// 	vector<pair<int,int>> temp(n);
// 	int total_sum = 0 ;
// 	for(int i=0; i<n; i++) {
// 		cin >> temp[i].first >> temp[i].second;
// 		// total_sum += temp[i].second;
// 	}
// 	int maxsum = INT_MIN;
// 	for(int mask = 0; mask<(1<<n); mask++){
// 		int subset_sum = 0 ;
// 		int weight_sum = 0;
// 		for(int i=1; i<n; i++) {
// 			if((mask & (1 << i))){
// 				weight_sum += temp[i].first;
// 				subset_sum += temp[i].second;
// 			}
// 		}
// 		if(weight_sum <= w) maxsum = max(maxsum, subset_sum);
			
// 	}
// 	cout << maxsum << endl;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, w;
    cin >> n >> w;
    
    vector<pair<int, int>> temp(n);
    int total_sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> temp[i].first >> temp[i].second;
        total_sum += temp[i].second;
    }
    
    int maxsum = INT_MIN;
    
    for (int mask = 0; mask < (1 << n); mask++) {
        int subset_sum = 0;
        int weight_sum = 0;
        
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                subset_sum += temp[i].second;
                weight_sum += temp[i].first;
            }
        }
        
        if (weight_sum <= w) {
            maxsum = max(maxsum, subset_sum);
        }
    }
    
    cout << maxsum << endl;
    return 0;
}
