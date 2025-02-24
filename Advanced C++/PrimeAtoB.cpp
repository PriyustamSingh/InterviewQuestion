#include<iostream>
using namespace std;
int Prime(int n)
{
    bool isPrime=true;
    if(n<2)
    {
        return 0;
    }
    else
    {
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            isPrime=false;
        }
    }
    }
    if(isPrime==true)
    {
        cout<<n<<"\t";
    }
return 0;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        Prime(i);
    }
    return 0;
}