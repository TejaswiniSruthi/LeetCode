class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0,p=i+1;
        while(i<haystack.size()){
            if(haystack[i]==needle[j]){
                if(j==0) p=i+1;
                j++;
            }
            else{
                if(j!=0){
                    i=p;
                }
                j=0;
                if(haystack[i]==needle[j]){
                    if(j==0) p=i+1;
                    j+=1;
                }
            }
            if(j==needle.size()) return i-j+1;
            i++;
        }
        return -1;
    }
};