class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>>res;
        
        int i=rStart,j=cStart,s=rStart,e=cStart,k=1;
        while(res.size()<rows*cols){
            while(j<=cStart+k){
                if(i<rows and i>=0 and j<cols and j>=0){
                    res.push_back({i,j});
                }
                j++;
                
            }
            //return res;
            j=j-1;
            i=i+1;
            while(i<=rStart+k){
                if(i<rows and i>=0 and j<cols and j>=0){
                    res.push_back({i,j});
                }
                i++;
                
            }
           // return res;
            i=i-1;
            j=j-1;
            while(j>=cStart-k){
                if(i<rows and i>=0 and j<cols and j>=0){
                    res.push_back({i,j});
                }
                j--;
                
            }
            //return res;
            i=i-1;
            j=j+1;
            while(i>=rStart-k){
                if(i<rows and i>=0 and j<cols and j>=0){
                    res.push_back({i,j});
                }
                i--;
                
            }
            i=i+1;
            j=j+1;
            k++;
        }
        return res;
    }
};
