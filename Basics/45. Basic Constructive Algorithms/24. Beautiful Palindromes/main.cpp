// https://codeforces.com/contest/2162/problem/E

#include <bits/stdc++.h>
using namespace std;

struct PalTree {
    struct Node {
        unordered_map<int,int> next; 
        int len;      
        int suffLink; 
    };
    vector<Node> nodes;
    vector<int> s;  
    int last;       
    int n;          

    PalTree(int maxn = 0) {
        nodes.reserve(maxn+3);
        Node rootNeg; rootNeg.len = -1; rootNeg.suffLink = 0;
        nodes.push_back(rootNeg);
        Node root0;   root0.len = 0;  root0.suffLink = 0;
        nodes.push_back(root0);
        last = 1;
        s.push_back(-1); 
        n = 0;
    }
    void add(int c) {
        s.push_back(c);
        n++;
        int cur = last;
        while (true) {
            int curlen = nodes[cur].len;
            if (n - 1 - curlen >= 1 && s[n - 1 - curlen] == c) {
                break;
            }
            cur = nodes[cur].suffLink;
        }
        if (nodes[cur].next.count(c)) {
            last = nodes[cur].next[c];
            return;
        }
        Node newNode; 
        newNode.len = nodes[cur].len + 2;
        newNode.suffLink = 0;
        nodes.push_back(newNode);
        int newIdx = nodes.size() - 1;
        nodes[cur].next[c] = newIdx;
        if (newNode.len == 1) {
            nodes[newIdx].suffLink = 1;
            last = newIdx;
            return;
        }
        int temp = nodes[cur].suffLink;
        while (true) {
            int templen = nodes[temp].len;
            if (n - 1 - templen >= 1 && s[n - 1 - templen] == c) {
                nodes[newIdx].suffLink = nodes[temp].next[c];
                break;
            }
            temp = nodes[temp].suffLink;
        }
        last = newIdx;
    }
};

static int visited[200005];
static int stamp = 1;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        PalTree pt(n + k + 5);
        for(int i = 1; i <= n; i++){
            pt.add(a[i]);
        }

        vector<int> answer;
        answer.reserve(k);
        while(k--) {
            stamp++;
            int curr = pt.last;
            int lastVal = pt.s[pt.n];
            visited[lastVal] = stamp;
            while (pt.nodes[curr].len > 0) {
                int L = pt.nodes[curr].len;
                int pos = pt.n - L;
                if (pos >= 1) {
                    visited[ pt.s[pos] ] = stamp;
                }
                curr = pt.nodes[curr].suffLink;
            }

            int pick = 1;
 
            while (pick <= n && visited[pick] == stamp) pick++;
  
            if (pick > n) pick = 1; // wapas
   
            answer.push_back(pick);
            pt.add(pick);
        }

        // ye hai output
        for(int i = 0; i < (int)answer.size(); i++){
            cout << answer[i] << (i+1<answer.size() ? ' ' : '\n');
        }
    }
    return 0;
}