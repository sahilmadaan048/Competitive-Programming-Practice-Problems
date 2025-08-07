// https://vjudge.net/problem/Gym-287306V

#include <iostream>
#include <sstream> // For string stream
#include <string>  // For string manipulation

using namespace std;

int main() {
    // Declare variables for A, B, C and the operator S
    int A, B, C;
    char S, Q; // Q is the '=' sign

    // Read the entire expression as a string
    string expression;
    // cout << "Enter the expression (A S B = C): ";
    getline(cin, expression);

    // Use string stream to parse the input
    stringstream ss(expression);
    ss >> A >> S >> B >> Q >> C;

    // Check if the '=' sign is correct
    // if (Q != '=') {
        // cout << "Invalid expression format." << endl;
        // return 1;
    // }

    // Variable to store the result of the operation
    int result;

    // Perform the operation based on the operator S
    switch (S) {
        case '+':
            result = A + B;
            break;
        case '-':
            result = A - B;
            break;
        case '*':
            result = A * B;
            break;
        // default:
            // cout << "Invalid operator." << endl;
            // return 1;
    }

    // Check if the calculated result matches C
    if (result == C) {
        cout << "Yes" ;
    } else {
        cout << result ; // Print the correct result
    }

    return 0;
}