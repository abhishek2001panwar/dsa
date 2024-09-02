#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int m;
    cout << " enter the size of rows";
    cin >> m;

    int arr[m][m];

    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = i + 1; j <= m - 1; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
// reverse
   for (int k = 0; k <= m - 1; k++)
    {
        int i = 0;
        int j = m-1;
        while(i<=j){
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            j--;
            i++;
        }
        
    }

     for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
           cout << arr[i][j] << " ";
        }
        
    }

}