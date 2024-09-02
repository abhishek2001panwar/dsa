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
     int o;
   cout << " enter the size of rows";
   cin >> o;
   int p ;
   cout << " enter the size of columns";
   cin >> p;

   int arr[o][p];

   for(int i =0; i<= o-1; i++){
    for(int j = 0 ; j <= p-1 ; j++){
        cin>> arr[i][j];
    }
   }

int max = 0;
 for(int i =0; i<= o-1; i++){
    for(int j = 0 ; j <= p-1 ; j++){
       max += arr[i][j];
    }
   }
   cout << max;



}