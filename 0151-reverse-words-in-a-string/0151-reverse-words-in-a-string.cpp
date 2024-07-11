class Solution {
public:
    string reverseWords(string s) {
        string c="",e="";
        bool b=true;
        if(s.size()==1 and s[0]!=' ') return s;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                if(b==false and s[i+1]==' '){
                    e = e+c+" ";
                    c="";
                }
                c=s[i]+c;
                b=false;
            }
        }
        return e+c;
    }
};