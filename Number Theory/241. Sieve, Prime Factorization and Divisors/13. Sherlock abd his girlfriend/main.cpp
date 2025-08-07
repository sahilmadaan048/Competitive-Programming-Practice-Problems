// https://codeforces.com/contest/776/problem/A

// #include <bits/stdc++.h>
// using namespace std;

// #define fast ios_base::sync_with_stdio(false); cin.tie(0);

// void print(const vector<string>& temp) {
//     for (auto ele : temp) cout << ele << " ";
//     cout << endl;  // Using endl to flush the output buffer and move to the next line
// }

// int main() {
//     fast;
//     vector<string> temp;
//     string s1, s2;
//     cin >> s1 >> s2;  // Read initial names
//     temp.push_back(s1);
//     temp.push_back(s2);
//     print(temp);
    
//     int t; 
//     cin >> t;
//     for (int i = 0; i < t; i++) {
//         string str1, str2;
//         cin >> str1 >> str2;
        
//         // Find and replace the name
//         if (temp[0] == str1) {
//             temp[0] = str2;
//         } else if (temp[1] == str1) {
//             temp[1] = str2;
//         }

//         print(temp);
//     }
//     return 0;
// }


// https://codeforces.com/contest/776/problem/B

// #include <bits/stdc++.h>
// using namespace std;

// int sieve[100005];

// int main()
// {
// 	int i, n, j;
// 	cin>>n;
// 	for(i=2; i<=n+1; i++)
// 	{
// 		if(!sieve[i])
// 			for(j=2*i; j<=n+1; j+=i)
// 				sieve[j]=1;
// 	}
	
// 	if(n>2)
// 		cout<<"2\n";
// 	else
// 		cout<<"1\n";

// 	for(i=2; i<=n+1; i++)
// 	{
// 		if(!sieve[i])
// 			cout<<"1 ";
// 		else
// 			cout<<"2 ";
// 	}

// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// const int sqrt_lim = 1000001;

// set<long long> prime_squares()
// {
//     static bool arr[sqrt_lim];

//     for (int i = 2; i*i < sqrt_lim; i++)
//     {
//         if (!arr[i])
//         {
//             for (int j = i*i; j < sqrt_lim; j += i)
//             {
//                 arr[j] = true;
//             }
//         }
//     }

//     set<long long> res;
//     for (int i = 2; i < sqrt_lim; i++)
//     {
//         if (!arr[i])
//             res.insert((long long)i * i);
//     }
//     return res;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     set<long long> sq(prime_squares());
//     int n; cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         long long x; cin >> x;

//         if (sq.find(x) != sq.end())
//         {
//             cout << "YES\n";
//         }
//         else
//         {
//             cout << "NO\n";
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define fast ios_base::sync_with_stdio(false); cin.tie(0);

// bool check(vector<int>& temp, int ind){
// 	bool flag = false;
// 	int rest = ind-1;
// 	if(rest<5) return false;
// 	int prev = 2;
// 	int curr = 3;
// 	for(int i=0; i<temp.size()-1; i++){
// 		if(temp[i]+temp[i+1] == rest){
// 			return true;
// 		}	
// 	}
// 	return false;
// }

// int main(){
// 	fast;
// 	int n, k; cin >> n >> k;
// 	vector<bool> temp(n, true);
// 	temp[0] = temp[1] = 0;
// 	for(int i=2; i*i<=n; i++){
// 		if(temp[i]){
// 			for(int j=2*i; j<n; j+=i){
// 				temp[j] = false;
// 			}
// 		}
// 	}

// 	//we have the sieve
// 	vector<int> temp2;
// 	for(int i=2; i<=n; i++){
// 		if(temp[i]) temp2.push_back(i);
// 	}
// 	int count = 0 ;
// 	for(int i=2; i<=n; i++){
// 		if(temp[i] and check(temp2, i)){
// 			count++;
// 		}
// 	}
// 	bool flag = count>=k;
// 	if(flag) cout << "YES" << "\n";
// 	else cout << "NO" << "\n" ;
// 	return 0;
// }


// https://codeforces.com/contest/17/problem/B

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n; cin >> n;
// 	vector<int> temp(n);
// 	int m; cin >> m;
// 	return 0;
// }

// https://codeforces.com/problemset/problem/1933/B

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int k;
//         cin>>k;
//         int ACC=0;
//         bool hv=false;
//         for(int i=0;i<k;i++){
//             int x;
//             cin>>x;
//             ACC+=x;
// 	    if(x%3==1){
// 			hv=true;
// 	    }
//         }
//         if(ACC%3==0){
//             cout<<0<<endl;
//         }else if(ACC%3==2){
//             cout<<1<<endl;
//         }else{
//             if(hv==true){
//                 cout<<1<<endl;
//             }else{
//                 cout<<2<<endl;
//             }
//         }
//     }
// }


// https://codeforces.com/contest/1933/problem/A


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t; cin >> t;
// 	while(t--){
// 		int n; cin >> n;
// 		vector<int> temp(n);
// 		int total = 0;
// 		for(int i=0; i<n; i++) {
// 			cin >> temp[i];
// 			total += abs(temp[i]);
// 		}
// 		cout << total << "\n";
// 	}	
	
// 	return 0;
// }



// https://codeforces.com/contest/17/problem/B

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <limits.h>
// #include <bits/stdc++.h>
// using namespace std;

// struct Application {
//     int supervisor, subordinate, cost;
// };

// int n, m; // number of employees, number of applications
// vector<int> qualifications;
// vector<Application> applications;
// vector<vector<pair<int, int>>> graph; // adjacency list for (subordinate, cost)
// vector<int> visited;
// vector<int> parent; // stores supervisor for each employee
// int totalCost = 0;
// bool found = false;

// void dfs(int employee, int &edges) {
//     visited[employee] = 1;
//     for (auto &[subordinate, cost] : graph[employee]) {
//         if (visited[subordinate] == 0) {
//             parent[subordinate] = employee;
//             totalCost += cost;
//             edges++;
//             dfs(subordinate, edges);
//         }
//     }
// }

// int main() {
//     cin >> n;
//     qualifications.resize(n);
//     graph.resize(n);
//     visited.resize(n, 0);
//     parent.resize(n, -1);

//     for (int i = 0; i < n; i++) {
//         cin >> qualifications[i];
//     }

//     cin >> m;
//     for (int i = 0; i < m; i++) {
//         int a, b, c;
//         cin >> a >> b >> c;
//         a--; b--; // zero-based indexing
//         if (qualifications[a] > qualifications[b]) {
//             applications.push_back({a, b, c});
//         }
//     }

//     // Build the graph: for each employee b, find the minimum cost a -> b
//     for (auto &app : applications) {
//         int a = app.supervisor;
//         int b = app.subordinate;
//         int c = app.cost;
//         graph[a].push_back({b, c});
//     }

//     // Start DFS from any node (root candidate)
//     int root = 0;
//     int edges = 0;
//     dfs(root, edges);

//     // Check if we have n-1 edges and all nodes are visited
//     bool isTree = (edges == n - 1);
//     for (int i = 0; i < n; i++) {
//         if (!visited[i]) {
//             isTree = false;
//             break;
//         }
//     }

//     if (isTree) {
//         cout << totalCost << endl;
//     } else {
//         cout << -1 << endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// struct Application {
//     int supervisor, subordinate, cost;
// };

// int n, m; // number of employees, number of applications
// vector<int> qualifications;
// vector<Application> applications;
// vector<vector<pair<int, int>>> graph; // adjacency list for (subordinate, cost)
// vector<int> visited;
// vector<int> parent; // stores supervisor for each employee
// int totalCost = 0;
// bool found = false;

// void dfs(int employee, int &edges) {
//     visited[employee] = 1;
//     for (auto &p : graph[employee]) {
//         int subordinate = p.first;
//         int cost = p.second;
//         if (visited[subordinate] == 0) {
//             parent[subordinate] = employee;
//             totalCost += cost;
//             edges++;
//             dfs(subordinate, edges);
//         }
//     }
// }

// int main() {
//     cin >> n;
//     qualifications.resize(n);
//     graph.resize(n);
//     visited.resize(n, 0);
//     parent.resize(n, -1);

//     for (int i = 0; i < n; i++) {
//         cin >> qualifications[i];
//     }

//     cin >> m;
//     for (int i = 0; i < m; i++) {
//         int a, b, c;
//         cin >> a >> b >> c;
//         a--; b--; // zero-based indexing
//         if (qualifications[a] > qualifications[b]) {
//             applications.push_back({a, b, c});
//         }
//     }

//     // Build the graph: for each employee b, find the minimum cost a -> b
//     for (auto &app : applications) {
//         int a = app.supervisor;
//         int b = app.subordinate;
//         int c = app.cost;
//         graph[a].push_back({b, c});
//     }

//     // Start DFS from any node (root candidate)
//     int root = 0;
//     int edges = 0;
//     dfs(root, edges);

//     // Check if we have n-1 edges and all nodes are visited
//     bool isTree = (edges == n - 1);
//     for (int i = 0; i < n; i++) {
//         if (!visited[i]) {
//             isTree = false;
//             break;
//         }
//     }

//     if (isTree) {
//         cout << totalCost << endl;
//     } else {
//         cout << -1 << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// string solve (int n) {
//     // Define the vowel pattern
//     string org = "aeiou";
//     string temp;


//     for (int i = 0; i < n; ++i) {
//         temp += org[i % org.length()];
//     }

//     return temp;
// }

// int main() {
//     int t;
//     cin >> t;
//     vector<string> ans;
    
//     while (t--) {
//         int n;
//         cin >> n;
//         ans.push_back(solve(n));
//     }
    
//     for (const string &res : ans) {
//         cout << res << endl;
//     }
    
//     return 0;
// }




// https://codeforces.com/contest/2005/problem/B1




// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n, m, q;
//         cin >> n >> m >> q;
        
//         vector<int> teachers(m);
//         for (int i = 0; i < m; ++i) {
//             cin >> teachers[i];
//         }
        
//         while (q--) {
//             int david;
//             cin >> david;

//             int dist1 = abs(david - teachers[0]);
//             int dist2 = abs(david - teachers[1]);
            

//             int min_dist = min(dist1, dist2);

//             cout << min_dist << endl;
//         }
//     }
    
//     return 0;
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// // Directions for moving in the grid: down, up, right, left
// const vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

// // DFS function to explore the grid
// bool dfs(int x, int y, int health, const vector<vector<int>>& grid, vector<vector<vector<bool>>>& visited) {
//     int m = grid.size();
//     int n = grid[0].size();
    
//     // Base case: If we've reached the bottom-right corner with positive health
//     if (x == m - 1 && y == n - 1 && health > 0) {
//         return true;
//     }
    
//     // Mark this cell with the current health as visited
//     visited[x][y][health] = true;
    
//     // Explore all possible directions
//     for (const auto& dir : directions) {
//         int nx = x + dir.first;
//         int ny = y + dir.second;
//         int next_health = health - grid[nx][ny];
        
//         // Check if the new position is within bounds and if the health is positive
//         if (nx >= 0 && nx < m && ny >= 0 && ny < n && next_health > 0 && !visited[nx][ny][next_health]) {
//             if (dfs(nx, ny, next_health, grid, visited)) {
//                 return true;
//             }
//         }
//     }
    
//     return false;
// }

// bool canReach(const vector<vector<int>>& grid, int health) {
//     int m = grid.size();
//     int n = grid[0].size();
    
//     // 3D visited vector to keep track of visited cells with specific health values
//     vector<vector<vector<bool>>> visited(m, vector<vector<bool>>(n, vector<bool>(health + 1, false)));
    
//     // Start DFS from the top-left corner (0, 0)
//     return dfs(0, 0, health, grid, visited);
// }

// int main() {
//     int m, n, initial_health;
//     cin >> m >> n >> initial_health;
    
//     vector<vector<int>> grid(m, vector<int>(n));
    
//     for (int i = 0; i < m; ++i) {
//         for (int j = 0; j < n; ++j) {
//             cin >> grid[i][j];
//         }
//     }
    
//     if (canReach(grid, initial_health)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
    
//     return 0;
// }
















// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <numeric>

// using namespace std;

// // Function to calculate the maximum value of any subsequence of size 2 * k
// int maxValue(vector<int>& nums, int k) {
//     int n = nums.size();
//     int max_value = 0;

//     // Generate all combinations of indices for subsequences of length 2 * k
//     for (int i = 0; i < (1 << n); ++i) {
//         // Count the number of selected elements
//         vector<int> selected;
//         for (int j = 0; j < n; ++j) {
//             if (i & (1 << j)) {
//                 selected.push_back(nums[j]);
//             }
//         }

//         // Check if the selected size is 2 * k
//         if (selected.size() == 2 * k) {
//             // Split the sequence into two halves
//             int first_half_or = 0;
//             int second_half_or = 0;

//             // Calculate OR for the first half
//             for (int j = 0; j < k; ++j) {
//                 first_half_or |= selected[j];
//             }

//             // Calculate OR for the second half
//             for (int j = k; j < 2 * k; ++j) {
//                 second_half_or |= selected[j];
//             }

//             // Calculate the value for this subsequence
//             int value = first_half_or ^ second_half_or;

//             // Update max_value if this value is greater
//             max_value = max(max_value, value);
//         }
//     }

//     return max_value;
// }

// // Example usage
// int main() {
//     vector<int> nums = {2, 6, 7};
//     int k = 2;
//     cout << "Maximum value: " << maxValue(nums, k) << endl; // Output the result
//     return 0;
// }




#include <iostream>
#include <string>

using namespace std;

string simple_palindrome(int n) {
    string vowels = "aeiou";
    string result = "";
    
    for (int i = 0; i < n; ++i) {
        result += vowels[i % 5]; // Cycle through the vowels
    }
    
    return result;
}

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the size of the string for each test case
        cout << simple_palindrome(n) << endl; // Output the result
    }
    return 0;
}