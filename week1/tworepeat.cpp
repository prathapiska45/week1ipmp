#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cout<<"enter no of elements";
     cin>>n;
     int a=n+2;
     vector<int>vec(a);
     unordered_map<int,int>mp;
     
     for(int i=0;i<a;i++)
     {
           cin>>vec[i];
           mp[vec[i]]++;
     }
     vector<int>v;
     for(auto x: mp)
     {
          if(x.second>1)
           v.push_back(x.first);
     }

     cout<<"elements which are repeated are ="<<v[0] << "and" <<v[1];
}