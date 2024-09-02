// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.
#include <iostream>
#include <vector>
#include <climits>  // Include this for INT_MIN

using namespace std;

int main() {
    vector<int> v1;
    int n;

    cout << "Enter the size: ";
    cin >> n;

    // Read n integers and add them to the vector
    for (int i = 1; i <= n; i++) {
        int x;
        cout << "enter the element : " << i << " ";
        cin >> x;
        v1.push_back(x);
    }
int sumeven = 0;
int sumodd = 0;
   for(int i =0 ; i<= v1.size()-1 ; i = i+2){
  sumeven += v1[i];
   }
       for(int j = 1; j<= v1.size()-1; j=j+2 ){
        sumodd += v1[j];
       }

 
   cout << "sum of even indices is :" << sumeven  << endl <<  "sum at odd indices is :" <<  sumodd;
    return 0;
}
