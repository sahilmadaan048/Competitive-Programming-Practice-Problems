// https://vjudge.net/problem/Gym-287309S
#include <iostream>
using namespace std;

int sumOfOddNumbers(int X, int Y) {
    int sum = 0;

    // Ensure X is smaller than Y
    if (X > Y) {
        swap(X, Y);
    }

    // Loop through the numbers between X and Y (exclusive)
    for (int i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        cout << sumOfOddNumbers(X, Y) << endl;
    }

    return 0;
}
