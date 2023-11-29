class MyCircularQueue {
public:
    vector<int>cirque;
    int capacity = 0;
    int front = 0;
    int rear = 0;
    MyCircularQueue(int k) 
    {
        capacity = k + 1;
        cirque.resize(capacity);
        front = 0;
        rear = 0;
    }

    bool enQueue(int value) 
    {
        if (isFull())
            return false;
        rear = (rear + 1) % capacity;
        cirque[rear] = value;
        return  true;
    }

    bool deQueue() 
    {
        if (isEmpty())
            return  false;
        front = (front + 1) % capacity;
        return  true;
    }

    int Front() 
    {
        if (isEmpty())
            return  -1;
        return  cirque[(front + 1) % capacity];
    }

    int Rear() 
    {
        if (isEmpty())
            return  -1;
        return  cirque[rear];
    }

    bool isEmpty() 
    {
        return  front == rear;
    }

    bool isFull() 
    {
        return  ((rear + 1) % capacity) == front;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */