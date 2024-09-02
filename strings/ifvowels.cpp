#include <iostream>
#include <climits>
using namespace std;

int main()
{

string str ;
cout << "enter the string";
cout << endl;
getline(cin , str);

for(int i = 0 ; str[i] != '\0' ; i++){
  if(i%2 == 0){
    str[i] = 'a';
  }
    
}
cout << str;
// cout << count  ;
// string str ;
// cout << "enter the string";
// getline(cin , str);
// int count  = 0;
// for(int i = 0 ; str[i] != '\0' ; i++){
//     if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'  ){
//         count++;
    
//     }
// }
// cout << count  ;


}
