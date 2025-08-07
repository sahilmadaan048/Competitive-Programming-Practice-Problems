// https://vjudge.net/problem/Gym-287306Y


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    // Calculate B * log(A) and D * log(C)
    double left = B * log(A);
    double right = D * log(C);

    // Compare the two values
    if (left > right) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
