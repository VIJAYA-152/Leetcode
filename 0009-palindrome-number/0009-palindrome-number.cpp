class Solution {
public:
    bool isPalindrome(int x) {
        long long temp=x;
         long long revnum=0;
         long long last=0;
         while(x>0){
            last=x%10;
            x=x/10;
            revnum=revnum*10+last;
         }
         if(temp==revnum)
         return true;
         return false;
        
    }
};