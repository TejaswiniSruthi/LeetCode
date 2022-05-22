class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0){
            return true;
        }
        if(x<0 || x%10==0){
            return false;
        }
        long long rev=0;
        while(x>rev){
            rev=rev*10 + (x%10);
            x/=10;
        }
        if(rev==x||x==rev/10){
            return true;
        }
        else{
            return false;
        }
    }
};
