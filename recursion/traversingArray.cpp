#include <iostream>
using namespace std;
void traverse(int arr[], int n, int idx, int min)
{
    if (idx == n)
    {
        cout << min << endl;
    }
    if (min > arr[idx])
        min = arr[idx];
    traverse(arr, n, idx + 1, min);
}

int main()
{
    int arr[] = {
        2,
        10,
        4,
        5,
        
        5,
        2,
    };
    int n = sizeof(arr) / sizeof(arr[0]);
    traverse(arr, n, 0, INT_MAX);
}