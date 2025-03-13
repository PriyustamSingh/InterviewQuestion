#include<iostream>
using namespace std;
void ReverseString(int arr[],int size)
{
    int start=0,end=size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[]={4,2,7,8,1,2,9};
    int size=7;

  ReverseString(arr,size);

for(int i=0;i<size;i++)
{
    cout<<arr[i]<<"\t";
}
cout<<endl;
return 0;
}