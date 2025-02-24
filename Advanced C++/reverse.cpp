#include<iostream>
using namespace std;
int reverse(int n)
{
    int rem,rev=0;
    while(n>0){
    rem=n%10;
    n=n/10;
    rev=rev*10+rem;
    
    }
    return rev;
}
int main()
{
    int n;
    cin>>n;
    cout<<reverse(n);
    return 0;

}