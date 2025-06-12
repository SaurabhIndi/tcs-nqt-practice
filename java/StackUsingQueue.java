import java.util.*;

public class StackUsingQueue {
    Queue<Integer> q1=new LinkedList<Integer>();
    void push(int x){
        int s=q1.size();
        q1.add(x);
        for(int i=0;i<s;i++){
            q1.add(q1.remove());
        }
    }
    void pop(){
        if(q1.isEmpty()) return;
        q1.remove();
    }
    int top(){
        if (q1.isEmpty()) return -1;
        return q1.peek();
    }
    int size(){
        return q1.size();
    }
    public static void main(String[] args)
    {
        StackUsingQueue s = new StackUsingQueue();
        s.push(1);
        s.push(2);
        s.push(3);

        System.out.println("current size: " + s.size());
        System.out.println(s.top());
        s.pop();
        System.out.println(s.top());
        s.pop();
        System.out.println(s.top());

        System.out.println("current size: " + s.size());
    }
}
