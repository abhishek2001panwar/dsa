#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
            bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j]> arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp ;
                flag = false;
                break;
            }
    
        }
    }
        if(flag == true) cout << "array is sorted";
}