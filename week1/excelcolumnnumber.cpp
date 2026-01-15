class Solution {
public:
    int titleToNumber(string columnTitle) {
          int x=columnTitle.size()-1;
         int y=0,result=0;

         while(y!=columnTitle.size())
         {
              char ch=columnTitle[x];
              result=result+pow(26,y)*(ch-'A'+1);
              y++;
              x--;
         }
         return result;
    }
};