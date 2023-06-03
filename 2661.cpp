class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        map<int,pair<int,int>>mpp;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                mpp[mat[i][j]]=make_pair(i,j);
            }
        }
        vector<int>r(mat.size(),mat[0].size());
        vector<int>c(mat[0].size(),mat.size());
        for(int i=0;i<arr.size();i++){
            r[mpp[arr[i]].first]--;
            if(r[mpp[arr[i]].first]==0) return i;
            c[mpp[arr[i]].second]--;
            if(c[mpp[arr[i]].second]==0) return i;
            
        }
        // for(int i=0;i<mat.size();i++){
        //     for(int j=0;j<mat[0].size();j++){
        //         cout<<mpp[mat[i][j]].first<<" ";
        //         cout<<mpp[mat[i][j]].second<<"\n";
        //     }
        // }
        return 0;
        
    }
};
