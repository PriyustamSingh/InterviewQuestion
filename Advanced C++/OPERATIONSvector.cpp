//Input a vector 1001001 so the output is 6 
//If input 000 so the output is 0

#include<iostream>
#include<vector>
using namespace std;
int find_N_Operations(vector<int> nums,int n)
{ 
    int sum=0;
     for(int i=n-1;i>=0;i--)
     {    
        sum++;
        if(nums[i]==1)
        {
          break;
        }
     }
     return (n-sum);
}
int main()
{    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int result=find_N_Operations(nums,n);
    cout<<result;
    return 0;
}