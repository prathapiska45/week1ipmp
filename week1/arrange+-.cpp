#include<bits/stdc++.h>
using namespace std;

void rearrange(vector<int>& nums)
{
    vector<int> positive,negative;

    for(int i=0;i<nums.size();i++)
    {
          if(nums[i]>0)
          positive.push_back(nums[i]);

          else 
          negative.push_back(nums[i]);
    }
      
       int i=0,j=0,index=0;
       bool rotate=true;
       while(i<positive.size() && j<negative.size())
       {
           if(rotate)
            nums[index++]=positive[i++];
            
            else
            nums[index++]=negative[j++];
            rotate=!rotate;
       }

       while(i<positive.size())
       {
             nums[index++]=positive[i++];
       }

       while(j<negative.size())
       {
            nums[index++]=negative[i++];
       }

       for(int i=0;i<nums.size();i++)
         cout<< nums[i] << " ";

}

int main()
{
      int n;
      cout<<"enter no of elements=";
      cin>>n;
      vector<int>v(n);
      for(int i=0;i<n;i++)
         {
              cout<<"enter an element=";
              cin>>v[i];
         }

         rearrange(v);
}