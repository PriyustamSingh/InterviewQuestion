#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cin>>n;
    for(int i=0;i<n;i++)   //outer loop
    {
        for(int j=0;j<n-i-1;j++) //spaces loop
        cout<<' ';

        for(int k=1;k<=i+1;k++)  //1st side loop
        cout<<k;

        for(int m=i;m>=1;m--)    //2nd side loop
        cout<<m;
        
        cout<<endl;
    }
    return 0;
}