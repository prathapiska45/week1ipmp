#include<bits/stdc++.h>
using namespace std;

void arrange012(vector<int>& nums)
{
      sort(nums.begin(),nums.end());

      for(auto x: nums)
      {
          cout<< x << " ";
      }
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
         arrange012(v);
}