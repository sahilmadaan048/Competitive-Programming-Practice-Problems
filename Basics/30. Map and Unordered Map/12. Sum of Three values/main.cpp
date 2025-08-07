// https://cses.fi/problemset/task/1641

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    vector<pair<int, int>> temp(n);
    for(int i=0; i<n; i++) {
        cin >> temp[i].first;
        temp[i].second = i+1;
    }

    sort(temp.begin(), temp.end());

    for(int i=0; i<n; i++){
        if(i>0 and temp[i] == temp[i-1]) continue;

        int left = i+1, right = n-1;
        int temp_sum = x-temp[i].first;
        while(left<right){
            int sum = temp[left].first + temp[right].first;

            if(sum == temp_sum){
                cout << temp[i].second << " " << temp[left].second << " " << temp[right].second;
                return 0;
            }
            else if(sum < temp_sum){
                left++;
            }
            else right--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;

}

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, x; 
//     cin >> n >> x;
//     vector<pair<int, int>> temp(n);  // To store both value and original index

//     // Reading input and storing value with original index
//     for (int i = 0; i < n; i++) {
//         cin >> temp[i].first;
//         temp[i].second = i + 1;  // Store the original 1-based index
//     }

//     // Sort the vector based on the values
//     sort(temp.begin(), temp.end());

//     for (int i = 0; i < n; i++) {
//         if (i > 0 && temp[i].first == temp[i - 1].first) continue; // Skip duplicates

//         for (int j = i + 1; j < n; j++) {
//             if (j > i + 1 && temp[j].first == temp[j - 1].first) continue; // Skip duplicates

//             int third = x - temp[i].first - temp[j].first;

//             // Use binary search to find the third element
//             int left = j + 1, right = n - 1;
//             while (left <= right) {
//                 int mid = left + (right - left) / 2;
//                 if (temp[mid].first == third) {
//                     cout << temp[i].second << " " << temp[j].second << " " << temp[mid].second << "\n";
//                     return 0;
//                 } else if (temp[mid].first < third) {
//                     left = mid + 1;
//                 } else {
//                     right = mid - 1;
//                 }
//             }
//         }
//     }

//     cout << "IMPOSSIBLE" << "\n";
//     return 0;
// }
