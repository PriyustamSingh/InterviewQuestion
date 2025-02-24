#include<iostream>
using namespace std;
int DecimalToBinary(int n)     //Function Decimal To Binary
{
    int pow=1,rem=0,DecNum=0;   
    while(n>0)
    {
        rem=n%2;              //Methodology Decimal to Binary
        n=n/2;
      DecNum+=(rem*pow);
      pow=pow*10;
    }
    return DecNum;
}
int BinaryToDecimal(int n)      //Function Binary To Decimal
{
    int BinNum=0,pow=1,rem=0;
    while(n>0)
    {
      rem=n%10;
      n=n/10;
      BinNum+=(rem*pow);
      pow*=2;
    }
return BinNum;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)               //Ranges From a to b
    {
     cout<<DecimalToBinary(i)<<"\t";    //Calling DecimalToBinary()
    } 
   int n;
   cin>>n;
   cout<<"\n"<<BinaryToDecimal(n)<<endl; //Calling BinaryToDecimal()
    return 0;
}