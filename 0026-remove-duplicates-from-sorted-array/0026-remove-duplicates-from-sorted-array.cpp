class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1,n=nums.size();
        if(n==1 || nums[i]==nums[n-1]) return 1;
        while(i<n){
            if(nums[i]==nums[j] || nums[i+1]<nums[i]){
                i+=1;
                j+=1;
                while(nums[j]<=nums[i-1] ){
                    j+=1;
                }
                nums[i]=nums[j]; 
            }
            else{
                i+=1;
            }
            if(nums[i]==nums[n-1]){
                break;
            }
        }
        return i+1;
    }
};