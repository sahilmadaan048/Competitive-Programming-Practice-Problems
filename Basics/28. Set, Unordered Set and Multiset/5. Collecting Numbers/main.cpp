// https://cses.fi/problemset/task/2216


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    map<int, int> mp;
    for(int i=0 ;i<n; i++) mp[array[i]] = i;
    int count = 1;
	for(int i=1; i<n; i++){
		if(mp[i] > mp[i+1]){
			count++;
		}
	}
	cout << count << endl;

    return 0;
}
