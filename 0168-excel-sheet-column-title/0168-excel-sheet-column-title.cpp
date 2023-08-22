class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        
        while(columnNumber>26){
            if(columnNumber%26==0){
                s='Z'+s;
                columnNumber/=26;
                columnNumber--;
            }
            else{
                s=char((columnNumber%26)+64)+s;
                columnNumber/=26;
            }
            
            
        }
        if((columnNumber%26)==0){
            s='Z'+s;
            return s;
        }
        s=char((columnNumber%26)+64)+s;
        return s;
    }
};