// {'Check'} if the given array is sorted or not
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
    bool flag = false;
    for(int i =0; i<= v1.size()-1 ; i++){
        if(v1[i] <= v1[i+1]){
           flag == true;
           break;
        }
    }

if(flag == true){
    cout << "array is sorted";
}else{
    cout << "array is not sorted";
}
    // Print the maximum element
    // cout << "The maximum element is: " << max << endl;

    return 0;
}
