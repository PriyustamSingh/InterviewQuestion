#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr = &a;
    int **ptr2 = &ptr;

   cout<<a<<endl;
    cout<<*(&a)<<endl;
    cout<<(*ptr)<<endl;
    cout<<*(&ptr)<<endl;
    cout<<(*ptr2)<<endl;
    cout<<*(&ptr2)<<endl;
    cout<<**(&ptr2)<<endl;
    ptr++;          //increment or decrement
    cout<<ptr<<endl;
    ptr--;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&(*ptr)<<endl;
    ptr = ptr + 2; //increment in number
    cout<<ptr<<endl; //increment by 8 in output 
    cout<<*(&ptr)<<endl;
    cout<<*ptr<<endl;
   cout<<**(&ptr2);
    return 0;
}