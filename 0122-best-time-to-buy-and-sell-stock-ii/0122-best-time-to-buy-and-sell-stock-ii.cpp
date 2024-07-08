class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0],max=prices[0],ms=0;
        int cmax=max,cmin=min,es=0;
        for (int i:prices){
            if(min>i){
                max=i;
                min=i;
            }
            if(max<i){
                max=i;
            }
            if(cmax<i){
                cmax=i;
                es+=(cmax-cmin);
                cmin=i;
            }
            if(cmin>i){
                cmax=i;
                cmin=i;
            }
            if(max-min>ms){
                ms=max-min;
            }
        }
        if(es>ms){
            return es;
        }
        return ms;
    }
};
