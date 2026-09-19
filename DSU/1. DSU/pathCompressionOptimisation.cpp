#include <bits/stdc++.h>
using namespace std;

int find_set(int v) {
    if (v == parent[v]) {
        return v;
    } 
    return parent[v] = find_set(parent[v]);
}

int main() {
    // todo
}


/*

for speeding up find_set 

this is O(log n)
*/