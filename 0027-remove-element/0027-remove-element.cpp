class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=n,j=n-1,k=0;
        while(i--){
            if(nums[i]==val){
                k+=1;
                nums[i]=nums[j];
                j--;
            }
        }
        return n-k;
    }
};