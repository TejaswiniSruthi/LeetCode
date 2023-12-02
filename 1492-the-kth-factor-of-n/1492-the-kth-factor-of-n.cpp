class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>v={1};
        vector<int>vb;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                v.push_back(i);
                if((n/i)!=i) vb.push_back(n/i);
            }
            
        }
        
        for(int i=vb.size()-1;i>=0;i--){
            v.push_back(vb[i]);
        }
        v.push_back(n);
        if(v.size()<k) return -1;
        return v[k-1];
    }
};