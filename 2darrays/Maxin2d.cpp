#include<iostream>
#include<climits>
using namespace std;

int main(){
   int m;
   cout << " enter the size of rows";
   cin >> m;
   int n ;
   cout << " enter the size of columns";
   cin >> n;

   int arr[m][n];

   for(int i =0; i<= m-1; i++){
    for(int j = 0 ; j <= n-1 ; j++){
        cin>> arr[i][j];
    }
   }

int max = INT_MIN;
 for(int i =0; i<= m-1; i++){
    for(int j = 0 ; j <= n-1 ; j++){
       if(arr[i][j] > max) max = arr[i][j];
    }
   }
   cout << max;



}