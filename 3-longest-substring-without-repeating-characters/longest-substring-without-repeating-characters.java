class Solution {
    public int lengthOfLongestSubstring(String s) {
        int x=0,y=0,l=s.length(),max=-1;
        if(l==0) return 0;
        Map<Character, Integer> mp = new HashMap<>();
        while(y<l){
            char c = s.charAt(y);
            mp.put(c,mp.getOrDefault(c,0)+1);
            if(mp.get(c)>1){
                while(x<=y){
                    mp.put(s.charAt(x),mp.get(s.charAt(x))-1);
                    if(c==s.charAt(x)){
                        x++;
                        break;
                    }
                    x++;
                }
            }
            max = max < y-x+1 ? y-x+1 : max;
            y++;
        }
        return max;
    }
}