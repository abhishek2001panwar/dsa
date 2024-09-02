// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.
#include <iostream>
#include <vector>
#include <climits> // Include this for INT_MIN

using namespace std;

int main()
{
    vector<int> v1;
    int n;
    cout << "Enter the size: ";
    cin >> n;
    // Read n integers and add them to the vector
    for (int i = 1; i <= n; i++)
    {
        int x;
        cout << "enter the element : " << i << " ";
        cin >> x;
        v1.push_back(x);
    }
    vector<int> v2;
    int m;
    cout << "Enter the size: ";
    cin >> m;
    // Read m integers and add them to the vector
    for (int i = 1; i <= m; i++)
    {
        int x;
        cout << "enter the element : " << i << " ";
        cin >> x;
        v2.push_back(x);
    }

    vector<int> v3(n + m);
   

   int i = n-1;
   int j = m-1;
   int k = n+m-1;
    while(i>=0 && j>=0){
         if(v1[i] > v2[j]){
              v3[k] = v1[i];
              i--;
              k--;
         }
         else{
              v3[k] = v2[j];
              j--;
              k--;
         }
    }
    while(i>=0){
         v3[k] = v1[i];
         i--;
         k--;
    }
    while(j>=0){
         v3[k] = v2[j];
         j--;
         k--;
    }
   cout << "the median of arrrray " << v3[(n+m)/2];
    return 0;
}
