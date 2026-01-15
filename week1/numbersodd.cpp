#include<bits/stdc++.h>
using namespace std;

void oddoccurences(vector<int>& v)
{
      unordered_map<int,int>mp;
        vector<int> c;
      for(int i=0;i<v.size();i++)
       mp[v[i]]++;

       for(auto x: mp)
       {
           if(x.second%2!=0)
           {
                c.push_back(x.first);   
           }
       }

       for(auto x: c)
       cout<<x<< " ";
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
           oddoccurences(v);
}