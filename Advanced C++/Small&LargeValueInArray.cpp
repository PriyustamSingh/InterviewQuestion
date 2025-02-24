#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int Small=INT_MAX;    //store highest integer
    int Large=INT_MIN;    //store lowest integer
    for(int i=0;i<5;i++)    //Initialize array values
    {
        cin>>arr[i];
    } 
   
     for(int i=0;i<5;i++)
    {
      if(arr[i]<Small)   //method 1
      Small=arr[i];
      if(arr[i]>Large)
      Large=arr[i];
      //or
     Small= min(arr[i],Small); //method 2
     Large=max(arr[i],Large);
    }
  //  cout<<arr[i];
    cout<<Small<<endl<<Large;
    return 0;
}