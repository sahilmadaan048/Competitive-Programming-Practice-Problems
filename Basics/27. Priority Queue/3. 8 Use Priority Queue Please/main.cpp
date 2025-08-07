// https://vjudge.net/problem/CodeChef-CCOP8



#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    priority_queue<int> p;
    int t, n, element;
        cin >> t;
        while (t--) {
            cin >> n;
            for (int i = 0; i < n; i++) {
                cin >> element;
                p.push(element);
            }
            while ((p.top() / 2) != 0) {
                cout << p.top() << " ";
                p.push(p.top()/2);
                p.pop();
            }
            while (!p.empty()) { 
                cout << p.top() << " ";
                p.pop();
            }
            cout << "\n";
        }
    return 0; 
}


// https://codeforces.com/contest/903/problem/A

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t; cin >> t;
// 	while(t--){
// 		int x; cin >> x;
// 		bool flag = false;
// 		for(int i=0; i*i<=x; i++){
// 			int rem = x-i*3;
// 			if(rem%7 == 0){
// 				flag = true;
// 				break;
// 			}
// 		}
// 		if(flag) cout << "YES" << "\n";
// 		else cout << "NO" << "\n";
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n; // Number of test cases
//     while (n--) {
//         int x;
//         cin >> x; // The number of chunks Ivan wants to eat
        
//         bool possible = false;
//         // Check all possible values of 'a' (number of small portions)
//         for (int a = 0; a * 3 <= x; ++a) {
//             int remainder = x - a * 3; // Remaining chunks after using 'a' small portions
//             if (remainder % 7 == 0) { // Check if remaining chunks can be covered by large portions
//                 possible = true;
//                 break;
//             }
//         }
        
//         if (possible) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }
    
//     return 0;
// }


// https://codeforces.com/contest/903/problem/B


// #include<bits/stdc++.h>
// #include <iostream>
// #include <vector>
// using namespace std;

// void simulate_battle(int h1, int a1, int c1, int h2, int a2) {
//     vector<string> actions; // Store the sequence of actions
//     int vova_health = h1;
//     int monster_health = h2;

//     while (monster_health > 0) {
//         if (vova_health > a2 || monster_health <= a1) {
//             // Attack if Vova can survive the monster's next attack
//             // or if Vova's attack is enough to defeat the monster
//             actions.push_back("STRIKE");
//             monster_health -= a1;
//             // If monster is defeated, break the loop
//             if (monster_health <= 0) {
//                 break;
//             }
//             // Monster attacks Vova
//             vova_health -= a2;
//         } else {
//             // Heal if Vova cannot survive the monster's next attack
//             actions.push_back("HEAL");
//             vova_health += c1;
//             // Monster attacks Vova after healing
//             vova_health -= a2;
//         }
//     }

//     // Output the results
//     cout << actions.size() << endl;
//     for (const string& action : actions) {
//         cout << action << endl;
//     }
// }

// int main() {
//     int h1, a1, c1, h2, a2;
//     cin >> h1 >> a1 >> c1 >> h2 >> a2;

//     simulate_battle(h1, a1, c1, h2, a2);

//     return 0;
// }




// https://codeforces.com/contest/903/problem/D

//ALMOST DIFFERENCE

// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long 

// int main(){
// 	int n; cin >> n;
// 	vector<int> temp(n);
// 	for(int i=0; i<n; i++) cin >> temp[i];

// 	ll sum =0 ;
// 	for(int i=0; i<n-1; i++){
// 		for(int j=i+1; j<n; j++){
// 			if(abs(temp[i]-temp[j]) > 1){
// 				sum += (temp[j]-temp[i]);
// 			}
// 			else sum += 0;
// 		}
// 	}
// 	cout << sum << endl;
// 	return 0;
// }



