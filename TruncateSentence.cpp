class Solution {
public:
    string truncateSentence(string s, int k) {
        string s1="";
        string st="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                st+=s1;
                s1="";
                k--;
                if(k==0){
                    break;
                }
                else{
                    st+=" ";
                }
            }
            else{
                s1+=s[i];
            }
        }
        if(k==1){
            st+=s1;
        }
        return st;
    }
};
