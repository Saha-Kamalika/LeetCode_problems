class MyCircularQueue {
    int front,rear;
    int a[];
    public MyCircularQueue(int k) {
        a=new int[k];
        front=-1;
        rear=-1;
    }
    
    public boolean enQueue(int value) {
        int len=a.length;
        if((rear+1)%len==front) return false;
        if(front==-1) front=0;
        rear=(rear+1)%len;
        a[rear]=value;
        return true;
    }
    
    public boolean deQueue() {
        int len=a.length;
        if(front==-1) return false;
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else front=(front+1)%len;
        return true;
    }
    
    public int Front() {
        if(front==-1) return -1;
        return a[front];
    }
    
    public int Rear() {
        if(rear==-1) return -1;
        return a[rear];
    }
    
    public boolean isEmpty() {
        if(front==-1) return true;
        return false;
    }
    
    public boolean isFull() {
        int len=a.length;
        if((rear+1)%len==front)return true;
        return false;
    }
}
