#include<bits/stdc++.h>
using namespace std;

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

         sort(v.begin(),v.end());

         int min=INT_MAX,max=INT_MIN;

         for(int i=0;i<n;i++)
         {
              if(v[i]>max)
                max=v[i];
              if(v[i]<min)
                min=v[i];
         }

         cout<<"max of array is ="<<max << "and"<< "minimum of array is="<< min;
}