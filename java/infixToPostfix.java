import java.util.Stack;

public class infixToPostfix{
    static int prec(char c){
        if (c == '^') return 3;
        else if (c=='/' || c=='*') return 2;
        else if (c=='+' || c=='-') return 1;
        else return -1;
    }
    static String InfToPost(String s){
        Stack<Character> st=new Stack<>();
        StringBuilder str=new StringBuilder();

        for (char c : s.toCharArray()){
            if(Character.isLetterOrDigit(c)){
                str.append(c);
            }
            else if(c=='('){
                st.push(c);
            }
            else if(c==')'){
                while(!st.isEmpty() && st.peek()!='('){
                    str.append(st.pop());
                }
                st.pop();
            }
            else{
                while(!st.isEmpty() && prec(c)<=prec(st.peek())){
                    str.append(st.pop());
                }
                st.push(c);
            }

        }
        while(!st.isEmpty()){
            str.append(st.pop());
        }
        return str.toString();
    }
    public static void main(String[] args){
        String s= "a+b*(c^d-e)^(f+g*h)-i";
        System.out.println(InfToPost(s));
    }
}