#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
   
    for(i=1;i<=n;i++)
    {  char ch='A';
        for(j=1;j<=n;j++)
        {
        cout<<ch<<' ';
        ch=ch+1;
        }
        cout<<endl;
    }
}