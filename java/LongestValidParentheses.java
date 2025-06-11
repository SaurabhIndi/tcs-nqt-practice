import java.util.Stack;

class LongestValidParentheses{
    static int maxLen(String s){
        Stack<Integer> stack= new Stack<>();
        
        stack.push(-1);
        int maxLen = 0;

        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='('){
                stack.push(i);
            }
            else{
                stack.pop();
                if(stack.empty()){
                    stack.push(i);
                }
                else{
                    maxLen=Math.max(maxLen,i-stack.peek());
                }
            }
        }
        return maxLen;
    }
    public static void main(String[] args){
        String s = ")()())";
        System.out.println(maxLen(s));
    }

}