// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y

#include <iostream>
using namespace std;

int countWays(int current, int end) {
    // Base cases
    if (current == end) return 1; // Reached the destination
    if (current > end) return 0;  // Overshot the destination

    // Recursive calls for each step possibility
    return countWays(current + 1, end) + 
           countWays(current + 2, end) + 
           countWays(current + 3, end);
}

int main() {
    int S, E;
    cin >> S >> E;
    
    // Compute the number of ways to reach E from S
    int result = countWays(S, E);
    
    // Output the result
    cout << result << endl;
    
    return 0;
}
