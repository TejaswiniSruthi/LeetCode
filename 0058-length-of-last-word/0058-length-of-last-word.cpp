class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0,i;
        bool b=true;
        for(i=s.size()-1;i>=0;i--){
            if(s[i]==' '){
                c++;
            }
            else{
                b=false;
            }
            if(b==false and s[i]==' '){
                break;
            }
        }
        if(i==-1 && s[0]!=' ') return s.size()-i-c-1;
        if(c==0) return s.size();
        return s.size()-i-c;
    }
};