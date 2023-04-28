class Solution {
public:
    void seq(vector<vector<int>> &fres,int n,int i,vector<int> &res,vector<int>&nums){
        if(i>=n){
            fres.push_back(res);
            return;
        }
        res.push_back(nums[i]);
        seq(fres,n,i+1,res,nums);
        res.pop_back();
        seq(fres,n,i+1,res,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>fres;
        vector<int>res;
        seq(fres,nums.size(),0,res,nums);
        return fres;
    }
};
