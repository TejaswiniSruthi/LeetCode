class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int k=m+n;
        while(k--){
            if(j==-1){
                nums1[k]=nums1[i];
                i--;
                continue;
            }
            if(i==-1){
                nums1[k]=nums2[j];
                j--;
                continue;
            }
            if(nums1[i]<=nums2[j]){
                nums1[k]=nums2[j];
                cout<<nums1[k]<<" ";
                j--;
            }
            else{
                nums1[k]=nums1[i];
                i--;
                cout<<nums1[k]<<" ";
            }
        }
    }
};