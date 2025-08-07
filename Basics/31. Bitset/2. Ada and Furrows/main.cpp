// https://vjudge.net/problem/SPOJ-ADAFUROW


#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

const int MAX_FURROWS = 20001;
const int MAX_VEGETABLES = 20001;

vector<bitset<MAX_VEGETABLES>> furrows(MAX_FURROWS);

int main() {
    int Q;
    cin >> Q;

    while (Q--) {
        char op;
        int x, y;
        cin >> op >> x >> y;

        if (op == '+') {
            // Plant vegetable y in furrow x
            furrows[x].set(y);
        } 
        else if (op == '-') {
            // Harvest vegetable y from furrow x
            furrows[x].reset(y);
        } 
        else if (op == 'v') {
            // Find the union of furrows x and y
            bitset<MAX_VEGETABLES> result = furrows[x] | furrows[y];
            cout << result.count() << endl;
        } 
        else if (op == '^') {
            // Find the intersection of furrows x and y
            bitset<MAX_VEGETABLES> result = furrows[x] & furrows[y];
            cout << result.count() << endl;
        } 
        else if (op == '!') {
            // Find the symmetric difference between furrows x and y
            bitset<MAX_VEGETABLES> result = furrows[x] ^ furrows[y];
            cout << result.count() << endl;
        } 
        else if (op == '\\') {
            // Find the difference of furrow x - furrow y
            bitset<MAX_VEGETABLES> result = furrows[x] & ~furrows[y];
            cout << result.count() << endl;
        }
    }

    return 0;
}
