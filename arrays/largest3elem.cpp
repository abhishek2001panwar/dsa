#include <iostream>
#include <vector>
#include <climits>  // Include this for INT_MIN

using namespace std;

int main() {
    vector<int> v1;
    int max = INT_MIN;  // Use INT_MIN to initialize max to the smallest possible integer value
    int n;

    cout << "Enter the size: ";
    cin >> n;

    // Read n integers and add them to the vector
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    // Find the maximum element in the vector
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] > max && v1[i] != max) {
            max = v1[i];
        }
    }

    // Print the maximum element
    cout << "The maximum element is: " << max << endl;

    return 0;
}
