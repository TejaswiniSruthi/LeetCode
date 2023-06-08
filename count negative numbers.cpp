class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i=0,s=0,j=(grid[0].size())-1;
        int n=j,m=grid.size();
        while(i<m and j>=0){
            if(grid[i][j]>=0){
                i+=1;
                
            }
            else{
                s+=((m)-i);
                j-=1;
                if(j<0) break;
                if(grid[i][j]>=0) {
                    
                    i+=1;
                    if(i>=m) break;
                }
            }
        }
        return s;
    }
};
