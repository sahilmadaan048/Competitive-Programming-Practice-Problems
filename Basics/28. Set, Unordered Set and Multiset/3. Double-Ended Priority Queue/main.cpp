// https://vjudge.net/problem/Yosupo-double_ended_priority_queue

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n,q ; cin >> n >> q;
// 	vector<int> temp(n);
// 	for(int i=0; i<n; i++) cin >> temp[i];
// 	while(q--){
// 		int a; cin >> a;
// 		if(a == 0){
// 			int b; cin >> b;
// 			temp.push_back(b);
// 		}
// 		else if(a == 1){
// 			auto mini = min_element(temp.begin(), temp.end());
// 			cout << *mini <<  endl;
// 			temp.erase(mini);
// 		}
// 		else if(a == 2){
// 			auto maxi = max_element(temp.begin(), temp.end());
// 			cout << *maxi << endl;
// 			temp.erase(maxi);
// 		}
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    multiset<int> s; // Use a multiset to handle elements efficiently
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s.insert(x);
    }

    while (q--) {
        int a;
        cin >> a;
        if (a == 0) {
            int b;
            cin >> b;
            s.insert(b);
        } else if (a == 1) {
            if (!s.empty()) {
                // Print and erase the smallest element
                cout << *s.begin() << endl;
                s.erase(s.begin());
            }
        } else if (a == 2) {
            if (!s.empty()) {
                // Print and erase the largest element
                cout << *s.rbegin() << endl;
                s.erase(prev(s.end()));
            }
        }
    }
    return 0;
}
