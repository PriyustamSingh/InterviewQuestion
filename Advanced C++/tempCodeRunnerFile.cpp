#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;  
    cout<<(&arr[0])<<endl;
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;;
    cout<<*(arr+1)<<endl;
    
    return 0;
}