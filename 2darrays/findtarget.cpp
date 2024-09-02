#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int m;
    cout << " enter the size of rows";
    cin >> m;
    int n;
    cout << " enter the size of colums";
    cin >> n;
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // sasta method
    // int target;
    // cout << "enter the target";
    // cin >> target;

    // int flag = false;

    // // find target
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i][j] == target)
    //         {
    //             flag = true;
    //         }
    //     }
    // }

    // cout << flag;
    int target;
    cout << "enter the target";
    cin >> target;

    // find target
    int i = 0 ;
    int j = n-1;
    while(i<= m-1 && i>=0){
         if (target == arr[i][j])
                return true;
            else if (target > arr[i][j])
                j--;
            else
                i++;

    }
    return false;
}
