class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n=arr.size();
        int s=arr[n-1];
        vector<int>res={-1};
        for(int i=n-2;i>=0;i--){
            
            res.insert(res.begin(),s);
            s=max(s,arr[i]);
        }
        return res;
    }
};