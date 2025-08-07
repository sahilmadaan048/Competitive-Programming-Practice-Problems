// https://vjudge.net/problem/CodeForces-762A




#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    i64 n, k;
    cin >> n >> k;
    vector<i64> v;
    for (i64 i=1;i*i<=n;++i)
        if (n % i == 0)
        {
            v.emplace_back(i);
            if (i * i != n) v.emplace_back(n / i);
        }
    sort(v.begin(), v.end());
    if (k > v.size()) cout << "-1\n";
    else cout << v[k - 1] << '\n';
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, k;
//     cin >> n >> k;
//     vector<int> temp;

//     for (int i = 1; i * i <= n; i++) {
//         if (n % i == 0) {
//             temp.push_back(i);
//             if (i != n / i) {
//                 temp.push_back(n / i);
//             }
//         }
//     }

//     if (k > temp.size()) {
//         cout << -1 << endl;
//     } else {
//         if (k <= temp.size() / 2) {
//             cout << temp[k - 1] << endl;
//         } else {
//             cout << temp[temp.size() - k] << endl;
//         }
//     }

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, k;
//     cin >> n >> k;
//     vector<int> temp;

//     for(int i = 1; i*i <= n; i++){
//         if(n % i == 0){
//             temp.push_back(i);
//             if(i != n/i) {
//                 temp.push_back(n/i);
//             }
//         }
//     }

//     sort(temp.begin(), temp.end());

//     if(k > temp.size()) {
//         cout << -1 << endl;
//         return 0;
//     }
//     cout << temp[k-1] << endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n, k; cin >> n >> k;
// 	vector<int> temp;
// 	for(int i=1; i<=n; i++){
// 		if((n%i) == 0) temp.push_back(i);
// 	}
// 	if(k>temp.size()) {
// 		cout << -1 << endl;
// 		return 0 ;
// 	}
// 	cout << temp[k-1] << endl;
// 	return 0;
// }