#include<iostream>
using namespace std;
int PowerOfTwo(int n)
{
 int i=0;
 while(n>1)
 {
      
   if(n%2!=0)         //Find the Power Of 2
   return 0;
   n=n/2;
   i++;
 }
 cout<<"Power 0f Two :"<<i<<endl;
 return 1;
}
int main()
{
    int n;
    cin>>n;
   // cout<<PowerOfTwo(n)<<endl;      //Shows in 0 or 1
    PowerOfTwo(n)?cout<<"Yes\n":cout<<"No\n";  //Shows in True or False
  
    return 0;
}