#include <bits/stdc++.h>
using namespace std;

void make_set(int v) {
    parent[v] = v;
    size[v] = 1;
}


// union by size
void union_set(int a,  int b) {
    a = find_set(a);
    b = find_set(b);

    if(a != b) {
        if(size[a] < size[b]) {
            swap(a, b);
        }
        parent[b] = a;
        size[a] += size[b];
    } 
}

int main() {
    //  todo   
}


/*


union by size or rank
this is optimisation for union set
here we choose which tree gets attached


there are 2 ways to do this
1. size of the tree as rank
2. depth of the tree as rank (the upper bound og the tree depth, beacuse the depth will get smalelr when applyijg path compression)

*/

/*


we attach the one tree with the lower rank to the one with the bigger rank


*/