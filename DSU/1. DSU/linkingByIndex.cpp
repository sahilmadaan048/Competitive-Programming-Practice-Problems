#include <bits/stdc++.h>
using namespace std;

void make_sets(int v) {
    parent[v] = v;
    index[v] = rand();
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);

    if(a != b) {
        if(index[a] < index[b]) {
            swap(a, b);
        }
        parent[b] = a;
    }
}

int main() {
    // todo
}

/*

NEED - 
    - have to store and mantain data for each set during every operation
    - lets optimise it a little bit using linking by index

WHAT WE DO-
    - assign each set with a random value called index and attach the smaller index to the largee inidexed tree
    - pretty much the same as unnion by size

*/