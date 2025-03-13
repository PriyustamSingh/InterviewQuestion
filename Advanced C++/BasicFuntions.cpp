#include<iostream>
using namespace std;
double SumOfTwo(int a,int b)  //Sum Of Two Numbers
{
    int s=a+b;
    return s;
}
int MinOfTwo(int a,int b)    //Min Of Two Numbers
{
    if(a>b)
    return b;
    else
    return a;
}
double SumOfNo(int n)       //Sum Of Two Numbers
{   int sum=0;
  for(int i=0;i<=n;i++)
  {
     sum=sum+i;
  }
   return sum;

}
int fact(int n)           //Factorial Of Number
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
      fact=fact*i;
    }
    return fact;
}
int main()
{ 

  cout<<"Sum Of Two Numbers :"<<SumOfTwo(5,9)<<endl;  //Function 1
  cout<<"Min :"<<MinOfTwo(5,9)<<endl;                   //Function 2
  cout<<"Sum Of 1 to N Numbers :"<<SumOfNo(9)<<endl;    //Function 3
  cout<<"Factorial Of 9 :"<<fact(9)<<endl;              //Function 4
  return 0;
}