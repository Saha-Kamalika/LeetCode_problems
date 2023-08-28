class MyStack {
    Queue<Integer> q1=new LinkedList<>();
    Queue<Integer> q2=new LinkedList<>();
    public MyStack() {
        
    }
    
    public void push(int x) {
        q2.add(x);
        while(!q1.isEmpty()){
            q2.add(q1.peek());
            q1.remove();
        }
        Queue<Integer> q=q1;
        q1=q2;
        q2=q;
    }
    
    public int pop() {
        if(q1.isEmpty()) return -1;
        else return q1.remove();
    }
    
    public int top() {
        if(q1.isEmpty()) return -1;
        else return q1.peek();
    }
    
    public boolean empty() {
        if(q1.isEmpty()) return true;
        else return false;
    }
}
