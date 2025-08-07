// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/E

#include<bits/stdc++.h>
using namespace std;

double find_x(double c) {
    double low = 0, high = c, mid;
    double eps = 1e-7;  // to ensure the error is not more than 1e-6

    while (high - low > eps) {
        mid = (low + high) / 2;
        double f_mid = mid * mid + sqrt(mid);

        if (f_mid < c) {
            low = mid;  // move the lower bound up
        } else {
            high = mid;  // move the upper bound down
        }
    }

    return low;
}

int main() {
    double c;
    cin >> c;

    double result = find_x(c);
    cout << fixed << setprecision(10) << result << endl;

    return 0;
}
