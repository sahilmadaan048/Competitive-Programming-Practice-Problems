// // https://codeforces.com/contest/24/problem/A

// #include<bits/stdc++.h>
// using namespace std;

// int dfs(int node,vector<int>&vis, vector<vector<pair<int, int>>>& graph){
// 	vis[node]=1;
// 	int total = 0;
// 	for(auto it: graph[node]){
// 		if(!vis[it.first]){
// 			total += it.second + dfs(it.first, vis, graph);
// 		}
// 	}
// 	return total;
// }

// int main(){
// 	int n;
// 	cin >> n;
// 	vector<vector<pair<int, int>>> graph(n+1);
// 	vector<int> vis(n+1, 0);
// 	int total_wt=0;
// 	for(int i=1; i<=n ; i++){
// 		int u,v,wt;
// 		cin >> u  >> v >> wt;
// 		graph[u].push_back({v, wt});
// 		graph[v].push_back({u, 0});
// 		total_wt+=wt;
// 	}

// 	//now we have the adjacancy list
// 	vis[1]=1;
// 	int ans1 = dfs(graph[1][0].first, vis, graph);

// 	fill(vis.begin(), vis.end(), 0); // Reset visited array
//     vis[1] = 1;
// 	int ans2 = dfs(graph[1][1].first, vis, graph);
// 	cout << min(ans1, ans2) << endl;
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// // Function to perform DFS and return total weight of edges traversed
// int dfs(int node, int wt, vector<int>& vis, vector<vector<pair<int, int>>>& graph) {
//     int total = wt;
//     if(vis[node]) return total;
//     vis[node] = 1;
    
    
//     for (auto it : graph[node]) {
//         if (!vis[it.first]) {
//             total += dfs(it.first, it.second,vis, graph); // Accumulate weights as you traverse
//         }
//     }

//     return total;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<vector<pair<int, int>>> graph(n + 1);
//     vector<int> vis(n + 1, 0);

//     int total_weight = 0; // To calculate total weight of the graph

//     // Input graph and create adjacency list
//     for (int i = 0; i < n; i++) {
//         int u, v, wt;
//         cin >> u >> v >> wt;
//         graph[u].push_back({v, wt});
//         graph[v].push_back({u, 0}); // In reverse direction, cost is zero
//         total_weight += wt; // Track total weight of all edges
//     }

//     // Now we have the adjacency list
//     // Start DFS from node 1
//     vis[1] = 1;
//     int total_cost_1 = dfs(graph[1][0].first,graph[1][0].second, vis, graph); // First direction

//     fill(vis.begin(), vis.end(), 0); // Reset visited array
//     vis[1] = 1;
//     int total_cost_2 = dfs(graph[1][1].first,graph[1][1].second, vis, graph); // Second direction

//     // The answer is the minimum of going in one direction or the other
//     cout << min(total_cost_1,total_cost_2) << endl;

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

int main() 
{
    fast
    int n;
    int a, b, c;
    int total_cost=0;
    int cost=0;
    int from[101] = {0};
    int to[101] = {0};
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b>>c;
        total_cost += c;
        if(from[a] || to[b])
        {
            from[b] = 1;
            to[a] = 1;
            cost += c;
        }
        else
        {
            from[a] = 1;
            to[b] = 1;
        }
    }
    if(total_cost - cost >= cost)
    {
        cout<<cost;
    }
    else
    {
        cout<<total_cost - cost;
    }
    return 0;
}

