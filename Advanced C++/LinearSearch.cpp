#include<iostream>
using namespace std;
int LinearSearch(int arr[],int size,int target)
{
for(int i=0;i<size;i++)
{
    if(arr[i]==target)
    return 1;
}
return -1;
}
int main()
{
    int arr[]={4,2,7,8,1,2,5};
    int size=7,target=8;
    cout<<LinearSearch(arr,size,target);
    return 0;

}