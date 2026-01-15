#include<bits/stdc++.h>
using namespace std;

int oddnoofoccurs(vector<int>&arr)
{
      unordered_map<int,int>freq;

      for(int i=0;i<arr.size();i++)
      {
            freq[arr[i]]++;
      }

      for(auto x: freq)
      {
          if((x.second)%2!=0)
           return x.first;
      }

      return -1;
}

int main()
{
    int n;
    cout<<"enter no of elements";
    cin>>n;
     vector<int>arr(n);
     for(int i=0;i<n;i++)
     {
          cout<<"enter an element=";
          cin>>arr[i];
     }
     int x=oddnoofoccurs(arr);
     cout<<"element which occured odd no of times="<<x;
     return 0;
}