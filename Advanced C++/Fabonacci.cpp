#include<iostream>
using namespace std;
int Fabonacci(int n)
{  int a=0,b=1,c;
    cout<<a<<" "<<b;
    for(int i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<" "<<c;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    Fabonacci(n);
    return 0;
}
