class MyCircularDeque {
public:
    vector<int>cirque;
    int capacity;
    int front;
    int rear;
    MyCircularDeque(int k)
    {
        capacity = k + 1;
        cirque.resize(capacity);
        front = 0;
        rear = 0;
    }

    bool insertFront(int value)
    {
        if (isFull())
            return  false;
        else
        {
            front = (front - 1 + capacity) % capacity;
            cirque[front] = value;
        }
        return  true;
    }

    bool insertLast(int value)
    {
        if (isFull())
            return  false;
        else
        {
            cirque[rear] = value;
            rear = (rear + 1) % capacity;
        }
        return  true;
    }

    bool deleteFront()
    {
        if (isEmpty())
            return  false;
        else
        {
            front = (front + 1) % capacity;
            return  true;
        }
    }

    bool deleteLast()
    {
        if (isEmpty())
            return  false;
        else
        {
            rear = (rear - 1 + capacity) % capacity;
            return  true;
        }
    }

    int getFront()
    {
        if (isEmpty())
            return  -1;
        return  cirque[front];
    }

    int getRear()
    {
        if (isEmpty())
            return  -1;
        return  cirque[(rear - 1 + capacity) % capacity];
    }

    bool isEmpty()
    {
        if (front == rear)
            return  true;
        return  false;
    }

    bool isFull()
    {
        if ((rear + 1) % capacity == front)
            return  true;
        return  false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */