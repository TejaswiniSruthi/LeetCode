class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i=0,o=0,n=0;
        while(i!=32){
            o=0;
            for(auto j:nums){
                if((j>>i)&1) o++;
            }
            if(o%3) n=(1<<i)|n;
            
            i++;
        }
        return n;
    }
};