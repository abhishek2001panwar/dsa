#include <iostream>
#include <vector>
using namespace std;
// int main(){

//     int arr[] = { 0, 1, 2, 3, 4, 8 ,6, 7 };
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int n = size;

//      for(int i = 0 ; i < n ; i++){
//         if(i != arr[i]){
//              cout << i ;
//               break ;
//         }

//      }

// }

int main()
{
    int arr[] = { 1, 2, 3, 4, 8 ,6, 7};
   
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;
 int ans  = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if(arr[mid] == mid){
            start= mid+1;
        }
        else{
            ans = mid;
            end = mid-1;
        }
    }
    cout << ans;
}