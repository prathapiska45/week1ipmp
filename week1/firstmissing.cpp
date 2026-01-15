int Solution::firstMissingPositive(vector<int> &A) {
      vector<int>v;
      
      for(int i=0;i<A.size();i++)
      {
           if(A[i]>0)
            v.push_back(A[i]);
      }
      
      sort(v.begin(),v.end());
      int expected=1;
      for(int i=0;i<v.size();i++)
      {
           if(v[i]==expected)
            expected++;
            
            if(v[i]>expected)
             return expected;
      }
      
      return expected;
      
}
