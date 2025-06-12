import java.util.*;

public class QueueUsingStack {
    static class Queue{
    Stack<Integer> s1=new Stack<>();
    Stack<Integer> s2=new Stack<>();
    void enqueue(int x){
        while(!s1.isEmpty()){
            s2.push(s1.peek());
            s1.pop();
        }
        s1.push(x);
        while(!s2.isEmpty()){
            s1.push(s2.peek());
            s2.pop();
        }
    }
    int dequeue(){

        if(s1.isEmpty()){
            return -1;
        }

        int x=s1.peek();
        s1.pop();
        return x;
    }
}
    public static void main(String[] args) {
        Queue q = new Queue();
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);

        System.out.println(q.dequeue());
        System.out.println(q.dequeue());
        System.out.println(q.dequeue());
    }

}
