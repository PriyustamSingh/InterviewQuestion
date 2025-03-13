#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>Pairsum(vector<int> vec,int n,int tar)
{
   vector<vector<int>> ans;
   for(int i=0;i<n;i++)
   {
      for(int j=i+1;j<n;j++)
      {
         if(vec[i]+vec[j]==tar)
         {
         ans.push_back({vec[i],vec[j]});
         }
      }
   }
   return ans;
}
void Display(vector<vector<int>> ans)
{   
   int n=ans.size();
   
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<2;j++)
      cout<<ans[i][j]<<" ";
      cout<<endl;
   }
}
int main()
{
   int n,tar=9;
cin>>n;
vector<int> nums(n);

for(int i=0;i<n;i++)
{
   cin>>nums[i];
}
vector<vector<int>> ans=Pairsum(nums,n,tar);
Display(ans);
return 0;
}