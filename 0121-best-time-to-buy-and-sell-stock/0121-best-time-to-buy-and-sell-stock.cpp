class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0],max=prices[0],ms=0;
        for (int i:prices){
            if(min>i){
                max=i;
                min=i;
            }
            if(max<i){
                max=i;
            }
            if(max-min>ms){
                ms=max-min;
            }
        }
        return ms;
    }
};