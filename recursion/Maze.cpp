#include <iostream>
using namespace std;
int mazePath(int row, int col, string s)
{
    if (row == 1 && col == 1)
    {
        cout << s << endl;
      
    }
    if (row < 1 || col < 1)
        return 0;
    int right = mazePath(row, col - 1, s + 'R');
    int down = mazePath(row - 1, col, s + 'D');
    return right + down;
}

int main()
{
    cout << mazePath(3, 3, "");
}