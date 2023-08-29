class MyQueue {
    Stack<Integer> s1=new Stack<>();
    Stack<Integer> s2=new Stack<>();
    int front;
    public MyQueue() {
        
    }
    
    public void push(int x) {
        if(s1.isEmpty()) front=x;
        s1.push(x);
    }
    
    public int pop() {
        while(!s1.isEmpty()) s2.push(s1.pop());
        int del=s2.pop();
        while(!s2.isEmpty()) s1.push(s2.pop());
        return del;
    }
    
    public int peek() {
        while(!s1.isEmpty()) s2.push(s1.pop());
        int p=s2.peek();
        while(!s2.isEmpty()) s1.push(s2.pop());
        return p;
    }
    
    public boolean empty() {
        return s1.isEmpty();
    }
}
