#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int count = 0;
void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            res[k] = a[i];
            i++;
            k++;
        }
        else
        {
            res[k] = b[j];
            j++;
            k++;
        }
    }
    if (i == a.size())
    {
        while (j < b.size())
        {
            /* code */
            res[k] = b[j];
            k++;
            j++;
        }
    }
    if (j == b.size())
    {
        while (i < a.size())
        {
            /* code */
            res[k] = a[i];
            k++;
            i++;
        }
    }
}

int inversion(vector<int> &a, vector<int> &b)
{
    // Your implementation of inversion function here

    int i = 0;
    int j = 0;

    while (i < a.size() && j < b.size())
    {
        if (a[i] > b[j])
        {
            count += (a.size() - i);
            j++;
        }
        else
        {
            i++;
        }
    }
    return 0;
}
void mergeSort(vector<int> &a)
{

    int n = a.size();
    if (n == 1)
        return;
    int n1 = n / 2;
    int n2 = n - n / 2;
    vector<int> arr(n1), brr(n2);

    for (int i = 0; i < n1; i++)
    {
        /* code */
        arr[i] = a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        /* code */
        brr[i] = a[i + n1];
    }
    mergeSort(arr);
    mergeSort(brr);
    count += inversion(arr, brr);
}
int main()
{
    int arr[] = {3, 5, 4, 1, 5, 2};
    int n1 = sizeof(arr) / sizeof(arr[0]);
    vector<int> a(arr, arr + n1);

    cout << " Inversion pair of : ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    mergeSort(a);

    cout << count;

    return 0;
}