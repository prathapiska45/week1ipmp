class Solution {
public:
    bool isPalindrome(int x) {
           int reverse=0;
           if(x==0)
           return true;
           if(x%10==0  || x<0)
             return false;
           while(x>reverse)
           {
               int r=x%10;
               reverse=reverse*10+r;
               x=x/10;
           }
           if(x==reverse || x==reverse/10)
           return true;
           else
           return false;
    }
};