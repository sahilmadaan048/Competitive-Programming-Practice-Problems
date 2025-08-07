// https://vjudge.net/problem/Gym-287309E#google_vignette


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the number of elements

    vector<int> numbers(N);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i]; // Read each number
    }

    // Initialize the maximum number with the first element
    int maxNumber = numbers[0];
    
    // Iterate through the numbers to find the maximum
    for (int i = 1; i < N; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    // Print the maximum number
    cout << maxNumber << endl;

    return 0;
}
