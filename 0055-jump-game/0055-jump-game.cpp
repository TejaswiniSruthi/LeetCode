class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mI=0;
        for(int i=0;i<nums.size();i++){
            if(i>mI) return false;
            if(i+nums[i]>mI) mI= i+nums[i];
        }
        return true;
    }
};