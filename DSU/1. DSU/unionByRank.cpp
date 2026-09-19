#include <bits/stdc++.h>
using namespace std;

void make_set(int v) {
    parent[v] = v;
    rank[v] = 0;
}

// union by rank / depth
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);

    if(a != b) {
        if(rank[a] < rank[b]) {
            swap(a, b);
        }
        parent[b] = a;
        if(rank[a] == rank[b]) {
            rank[a]++;
        }
    }
} 

int main() {
    // todo
}


/*
this has similar time and space complexity as of the 
rank by size methos


*/