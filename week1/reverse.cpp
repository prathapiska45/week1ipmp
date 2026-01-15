#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>& v)
{
       int n=v.size();

       for(int i=0;i<n/2;i++)
       {
          swap(v[i],v[n-1-i]);
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
         reverse(v);

         for(auto x:v)
           cout<<x << " ";
}
