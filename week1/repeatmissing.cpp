vector<int> Solution::repeatedNumber(const vector<int> &A) {
      vector<int>v=A;
      sort(v.begin(),v.end());
      int repeated=-1,missing=-1;
      
      if(v[0]!=1)
      missing=1;
      
      for(int i=0;i<A.size()-1;i++)
      {
              if(v[i]==v[i+1])
              repeated=v[i];
              
              if(v[i+1]-v[i]>1)
              missing=v[i]+1;
      }
      if(missing==-1)
        missing=A.size();
      
      return {repeated,missing};
}
