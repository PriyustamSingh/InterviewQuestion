#include<iostream>
using namespace std;
int Prime(int n)
{
    bool isPrime=true;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            
            isPrime=false;
           // break;
        }
    }
     if(isPrime==true)
     {
    cout<<"Prime no.= "<<n;
     }
     else
     cout<<"Not Prime= "<<n;
    return 0;
     
}
int main()
{
    int n;
    cin>>n;
   Prime(n);
   
    return 0;
}