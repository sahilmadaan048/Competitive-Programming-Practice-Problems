// https://vjudge.net/problem/USACO-572
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, q;
//     cin >> n >> q;

//     vector<int> temp(n+1, 0);
//     for(int i = 1; i <= n; ++i) cin >> temp[i];

//     vector<int> t1(n+1, 0), t2(n+1, 0), t3(n+1, 0);
//     for(int i = 1; i <= n; ++i) {
//         if(temp[i] == 1) {
//             t1[i]++;
//         } else if(temp[i] == 2) {
//             t2[i]++;
//         } else if(temp[i] == 3) {
//             t3[i]++;
//         }
//     }

//     vector<int> p1(n+1, 0), p2(n+1, 0), p3(n+1, 0);
//     for(int i = 1; i <= n; ++i) {
//         p1[i] = p1[i-1] + t1[i];
//         p2[i] = p2[i-1] + t2[i];
//         p3[i] = p3[i-1] + t3[i];
//     }

//     while(q--) {
//         int a, b;
//         cin >> a >> b;
     
//         cout << p1[b] - p1[a-1] << " " << p2[b] - p2[a-1] << " " << p3[b] - p3[a-1] << endl;
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> temp(n+1, 0);
    for(int i = 1; i <= n; ++i) cin >> temp[i];

    vector<int> t1(n+1, 0), t2(n+1, 0), t3(n+1, 0);
    for(int i = 1; i <= n; ++i) {
        if(temp[i] == 1) {
            t1[i]++;
        } else if(temp[i] == 2) {
            t2[i]++;
        } else if(temp[i] == 3) {
            t3[i]++;
        }
    }

    vector<int> p1(n+1, 0), p2(n+1, 0), p3(n+1, 0);
    for(int i = 1; i <= n; ++i) {
        p1[i] = p1[i-1] + t1[i];
        p2[i] = p2[i-1] + t2[i];
        p3[i] = p3[i-1] + t3[i];
    }

    while(q--) {
        int a, b;
        cin >> a >> b;
        // Ensure a is within bounds
        if (a > 1) {
            cout << p1[b] - p1[a-1] << " " << p2[b] - p2[a-1] << " " << p3[b] - p3[a-1] << endl;
        } else {
            cout << p1[b] << " " << p2[b] << " " << p3[b] << endl;
        }
    }

    return 0;
}
