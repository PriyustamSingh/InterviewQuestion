#include<iostream>
#include<string>
using namespace std;
string reverseString(string s)
{
    int n=s.length();
    int st=0,end=n-1;
    while(st<end)
    {
       
        swap(s[st],s[end]);
        st++;
        end--;
    }
    return s;
}
int main()
{
    string s;
    cin>>s;
    string s2=reverseString(s);
    if(s2==s)
    {
        cout<<s2<<" Palendrone";
    }
    else
    {
        cout<<s2<<" Not Palindrone";
    }
    return 0;
}