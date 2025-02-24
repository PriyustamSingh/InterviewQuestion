#include<iostream>
#include<string>
using namespace std;
int SumOfDigit(int n){
    int DigitSum=0;
    while(n>0){
        int LastDigit= n%10;             //Remainder(Last Digit)
        n=n/10;                         //All Previous Digits
        DigitSum=DigitSum +LastDigit;  //Sum of All Last Digits
      
    }
     return DigitSum;
}
int main()
{
 int n;
 cin>>n;
 cout<<SumOfDigit(n)<<endl;
    return 0;
}