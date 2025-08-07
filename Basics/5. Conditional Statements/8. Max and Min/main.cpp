// https://vjudge.net/problem/Gym-287306J

#include <iostream>
#include <algorithm> // For std::min and std::max
using namespace std;

int main() {
    int A, B, C;

    // Input: Read three integers from the user
    cin >> A >> B >> C;

    // Calculate minimum and maximum
    int minimum = min({A, B, C});
    int maximum = max({A, B, C});

    // Output: Print the minimum and maximum numbers
    std::cout << minimum << " " << maximum << std::endl;

    return 0;
}