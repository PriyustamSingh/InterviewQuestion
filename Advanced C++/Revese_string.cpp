#include<iostream>
using namespace std;
string reversestring(string str)
{
   // str.insert(str.end(),' ');
    int j=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' '){
        reverse(str.begin()+j,str.begin()+i);
        j=i+1;
        }
    }
   // str.pop_back();
    reverse(str.begin(),str.end());
    return str;
}
int main()
{
    string str="The Sky is the blue ";
    cout<<reversestring(str);
    return 0;
}