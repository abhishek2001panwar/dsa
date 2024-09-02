// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.
#include <iostream>
#include <vector>
#include <climits> // Include this for INT_MIN
#include <algorithm>

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
     // find pivot index
     int pivot = -1;
     for (int i = n - 2; i > 0; i--)
     {
          if (v1[i] < v1[i +1])
          {
               pivot = i - 1;
               break;
          }
     }
   
   if(pivot == -1){
        sort(v1.begin(), v1.end());
        for (int i = 0; i < n; i++)
     {
          cout << v1[i] << " ";
     }
   }
   else{
     for (int i = 0; i < n; i++)
     {
          if (i == pivot)
          {
               for (int j = pivot + 1; j < n; j++)
               {
                    sort(v1.begin() + pivot + 1, v1.end());
                    if (v1[j] > v1[pivot])
                    {
                         swap(v1[j], v1[pivot]);
                         break;
                    }
               }
          }
     }

     for (int i = 0; i < n; i++)
     {
          cout << v1[i] << " ";
     }

   }
     
}
