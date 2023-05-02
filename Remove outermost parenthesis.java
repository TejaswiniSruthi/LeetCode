class Solution {
    public String removeOuterParentheses(String s) {
        String res="";
        int i=0;
        Stack<Character>st=new Stack<>();
        while(i<s.length()){
            char ch=s.charAt(i);
            if(st.isEmpty()==true){
                st.push(ch);
                i++;
                continue;
            }
            
            if(s.charAt(i)=='('){
                st.push(ch);
            }
            else{
                st.pop();
            }
            if(st.isEmpty()==true){
                st.push('(');
                i++;
            }
            else{
                res+=ch;
            }
            i++;
        }
        return res;
    }
}
