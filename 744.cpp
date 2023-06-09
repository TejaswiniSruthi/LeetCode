class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0,h=letters.size()-1,r=(l+h)/2,m;
        if(letters[letters.size()-1]-target<=0) return letters[0];
        while(l<=h){
            m=(l+h)/2;
            if(letters[m]==target){
                
                if(letters[m+1]!=target)return letters[m+1];
                l=m+2;
            }
            else if((letters[m]-target)>0){
                if(letters[m]-target<letters[r]-target || letters[r]-target<=0) r=m;
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        
        return letters[r];
        
    }
};
