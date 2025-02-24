#include<iostream>
using namespace std;
int fact(int n)
{
   int fact1=1;
    for(int i=1;i<=n;i++)
    {                                  //factorial Function
        fact1=fact1*i;
    }
    return fact1;
}
long int nCr(int n,int r)
{
  long  int fact_n=fact(n);
   long   int fact_r=fact(r);                //Calculate nCr using Fact()
    long  int fact_nmr=fact(n-r);
    return fact_n/(fact_r*fact_nmr);

}
int main()
{
   int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;        //Calling nCr to find final value
    return 0;

}