class Solution {
    public boolean isValid(String s) {
        int n = s.length();
        if(n%2!=0){
            return false;
        }
        Stack<Character> st = new Stack<>();
        st.push(s.charAt(0));
        for(int i=1;i<n;i++){
            if(s.charAt(i)==')' && st.isEmpty()==false && st.peek()=='('){
                st.pop();
            }
            else if(s.charAt(i)=='}' && st.isEmpty()==false && st.peek()=='{'){
                st.pop();
            }
            else if(s.charAt(i)==']' && st.isEmpty()==false && st.peek()=='['){
                st.pop();
            }
            else{
                st.push(s.charAt(i));
            }
        }
        return !(st.size()>0);
    }
}