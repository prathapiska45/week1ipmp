#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cout<<"enter no of elements=";
      cin>>n;
      int x=n-1;
      vector<int>v(x);
      for (int i = 0; i < x; i++)
        cin >> v[i];

       int sum=0,sum1=0;

      for(int i=1;i<=n;i++)
         sum+=i;
      for(int i=0;i<x;i++)
      {
           sum1+=v[i];
      }
      int y=sum-sum1;

      cout<<"missing element in that array =" <<y;
      return 0;
}