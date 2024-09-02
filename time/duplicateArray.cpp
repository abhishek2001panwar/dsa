#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << " enter the array";
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
  
    int count = 0 ;
        for (int i = 0; i < v1.size(); i++)
        {
            for (int j = i + 1; j < v1.size(); j++)
            {
                if (v1[i] != v1[j])
                {
                   count += v1[i];
                }

            }
        }
        cout << count ;
    // more efficeint
    // int sum = 0 ;
    // int n1 = v1.size()-1;

    // for(int i =  0 ; i< n1 ;i++){
    //     sum += v1[i];
    // }
    // int max = n1*(n1+1)/2;
    // cout << sum -max;

}
