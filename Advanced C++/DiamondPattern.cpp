#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   for(int i=0;i<n;i++)      //outer side
   {
    for(int k=0;k<n-i-1;k++)  // Left side spaces
     cout<<' ';
     cout<<"*";
     if(i!=0)
     {
     for(int j=0;j<2*i-1;j++) //right side spaces
     cout<<' ';
      cout<<"*";
     
     }
     cout<<endl;
   }
   //bottom
   for(int i=0;i<n-1;i++) //0 to n-2
   {
    for(int k=0;k<i+1;k++)   //spaces 1
     cout<<' ';
     cout<<'*';
     if(i!=n-2)
     {
        for(int j=0;j<2*(n-i)-5;j++)  //spaces 2 
        cout<<' ';
        cout<<'*';
     }
     cout<<endl;
   }
    return 0;
}