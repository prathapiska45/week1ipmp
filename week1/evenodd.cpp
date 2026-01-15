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
        int i=0,j=n-1;

        while(i<j)
        {
              if(v[i]%2!=0)
              {
                    if(v[j]%2==0)
                    {
                          swap(v[i],v[j]);
                          i++;
                          j--;
                    }
                    else
                    j--;
              }

              else
                  i++;
              
        }

        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<"";
        }
}