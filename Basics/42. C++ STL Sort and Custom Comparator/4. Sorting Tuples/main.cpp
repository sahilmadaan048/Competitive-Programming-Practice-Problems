// https://vjudge.net/problem/Aizu-ITP2_5_B
#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tc int t; cin >> t;
#define vi vector<int>

const int N = 25;

void solve() {
    int n;
    cin >> n;
    
    vector<tuple<int, int, char, long long, string>> temp;
    
    for (int i = 0; i < n; i++) {
        int num, weight;
        long long dist;
        char type;
        string s;

        cin >> num >> weight >> type >> dist >> s;
        temp.push_back(make_tuple(num, weight, type, dist, s));
    }
    
    sort(temp.begin(), temp.end(), [&](const tuple<int, int, char, long long, string>& t1, const tuple<int, int, char, long long, string>& t2) {
        if(get<0>(t1) != get<0>(t2)){
        	return get<0>(t1) < get<0>(t2); //compare by num
        }else if(get<1>(t1) != get<1>(t2)) {
            return get<1>(t1) < get<1>(t2); // Compare by weight
        } else if (get<2>(t1) != get<2>(t2)) {
            return get<2>(t1) < get<2>(t2); // Compare by char
        } else if (get<3>(t1) != get<3>(t2)) {
            return get<3>(t1) < get<3>(t2); // Compare by distance
        } else {
            return get<4>(t1) < get<4>(t2); // Compare by string
        }
    });
    
    // Output the sorted tuples
    for (const auto& t : temp) {
        cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << " " << get<3>(t) << " " << get<4>(t) << "\n";
    }
}

int main() {
    fast;
    int t = 1; // Default to 1 test case unless specified
    while (t--) {
        solve();
    }
    return 0;
}


