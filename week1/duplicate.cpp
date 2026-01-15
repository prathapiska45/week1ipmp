class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;

        for(auto x: nums)
          freq[x]++;

         int maxfreq=0,result=0;

         for(auto it: freq)
         {
              if(it.second>maxfreq)
              {
                  maxfreq=it.second;
                  result=it.first;
              }
         }
         return result;
    }
};