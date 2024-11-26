#include <bits/stdc++.h>
using namespace std;

int main() {
    // Vector of vectors declaration
    vector<vector<int>> vec;

    // Adding rows to the vector
    vec.push_back({1, 2, 3}); // Row 1
    vec.push_back({4, 5});    // Row 2
    vec.push_back({6, 7, 8, 9}); // Row 3

    // Accessing and printing elements
    cout << "Element at (0, 1): " << vec[0][1] << endl; // Output: 2

    // Iterating through the vector of vectors
    for (const auto& row : vec) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
