#include<bits/stdc++.h>
using namespace std;

void movezeroesend(vector<int>& vec)
{
      int j=0;
      for(int i=0;i<vec.size();i++)
      {
           if(vec[i]!=0)
            {
                 vec[j]=vec[i];
                 j++;
            }
      }

      while(j<vec.size())
      {
           vec[j]=0;
           j++;
      }

      for(auto x: vec)
      {
          cout<< x<< " ";
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

        movezeroesend(v);
}