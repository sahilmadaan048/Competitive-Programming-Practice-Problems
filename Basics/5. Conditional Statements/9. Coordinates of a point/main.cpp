// https://vjudge.net/problem/Gym-287306P

#include <iostream>
using namespace std;
typedef double db;
int main() {
	db X, Y;

    // Input: Read two integers from the user
    cin >> X >> Y;

    // Determine the position of the point
    if (X == 0.0 && Y == 0.0) {
        cout << "Origem" ; // Point is at the origin
    } else if (X == 0.0) {
        cout << "Eixo Y" ; // Point is on the Y axis
    } else if (Y == 0.0) {
        cout << "Eixo X" ; // Point is on the X axis
    } else if (X > 0 && Y > 0) {
        cout << "Q1" ; // First quadrant
    } else if (X < 0 && Y > 0) {
        cout << "Q2" ; // Second quadrant
    } else if (X < 0 && Y < 0) {
        cout << "Q3" ; // Third quadrant
    } else if (X > 0 && Y < 0) {
        cout << "Q4" ; // Fourth quadrant
    }

    return 0;
}