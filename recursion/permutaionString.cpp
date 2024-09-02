#include <iostream>
#include <string>
using namespace std;

void permut(string ans, string original)
{
    if (original == "")
    {
        cout << ans << endl;
    }
    for (int i = 0; i < original.length(); i++)
    {
        char ch = original[i];
        string left = original.substr(0, i);
        string right = original.substr(i + 1);
        permut(ans + ch, left + right);
    }
}
int main()
{
    string str = "abc";
   permut("", str);
}