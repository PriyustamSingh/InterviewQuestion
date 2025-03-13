#include<iostream>
#include<vector>
using namespace std;
int main()
{ 
    int n;
   
    cin>>n;
    vector<int> nums(n);
  for(int i=0;i<n;i++)
  {
    int a;
    cin>>nums[i];
  
  }
    for(int val:nums)
    {
    cout<<val<<" ";
    }
    return 0;
}