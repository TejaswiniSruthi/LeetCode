class Solution {
public:
    void recur(vector<string>&v,vector<string>&al,int n,string s){
        if(n==0){
            v.push_back(s);
            return;
        }
        int num=n%10;
        string p=al[num];
        for(int i=0;i<p.size();i++){
            recur(v,al,n/10,p[i]+s);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>v;
        if(digits.size()==0) return v;
        vector<string>al={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int n=stoi(digits);
        recur(v,al,n,"");
        return v;
    }
};