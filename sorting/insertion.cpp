#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {1, 9, 3, 6, 5};
    int n = 5;

    for (int i = 1; i < n; i++)
    {

         int j = i  ;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
