class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),c=nums[0];
        vector<int> vec(n);
        vec[n-1]=nums[n-1];
        for(int i=nums.size()-2;i>=0;i--){
            vec[i]=nums[i]*vec[i+1];
        }
        vec[0]=vec[1];
        for(int i=1;i<n-1;i++){
            vec[i]=c*vec[i+1];
            c*=nums[i];
        }
        vec[n-1]=c;
        return vec;
    }
};