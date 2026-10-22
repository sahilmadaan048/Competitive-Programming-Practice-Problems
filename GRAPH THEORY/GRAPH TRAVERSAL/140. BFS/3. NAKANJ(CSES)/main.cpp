/*
https://www.spoj.com/problems/NAKANJ/
*/
 
#include<bits/stdc++.h>
using namespace std;
 
const int INF = 1e9+10;
int vis[8][8];
int level[8][8];
 
int getx(string s){
    return s[0] - 'a';
}
 
int gety(string s){
    return s[1] - '1';
}
 
void reset(){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            level[i][j] = INF;
            vis[i][j] = 0;
        }
    }
}
 
vector<pair<int, int>> movements = {
    {-1, 2}, {1, 2},
    {-1, -2}, {1, -2},
    {2, -1}, {2, 1},
    {-2, -1}, {-2, 1}
};
 
bool isvalid(int x, int y){
    return x >= 0 && y >= 0 && x < 8 && y < 8;
}
 
int bfs(string source, string dest){
    reset();
    int sourcex = getx(source);
    int sourcey = gety(source);
    int destx = getx(dest);
    int desty = gety(dest);
    queue<pair<int, int>> q;
 
    q.push({sourcex, sourcey});
    vis[sourcex][sourcey] = 1;
    level[sourcex][sourcey] = 0;
 
    while(!q.empty()){
        pair<int, int> v = q.front();
        int x = v.first;
        int y = v.second;
        q.pop();
 
        for(auto movement : movements){
            int childx = movement.first + x;
            int childy = movement.second + y;
            if(!isvalid(childx, childy)) continue;
            if(!vis[childx][childy]){
                q.push({childx, childy});
                level[childx][childy] = level[x][y] + 1;
                vis[childx][childy] = 1;
            }
        }
        if(level[destx][desty] != INF) break;  // optimization
    }
    return level[destx][desty];
}
 
int main(){
    int n;
    cin >> n;
    while(n--){
        string s1, s2;
        cin >> s1 >> s2;
 
        cout << bfs(s1, s2) << endl;
    }
 
    return 0;
}