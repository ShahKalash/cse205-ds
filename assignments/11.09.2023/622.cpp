#include <bits/stdc++.h>
using namespace std;
class MyCircularQueue
{
    int front = 0, rear = -1;
    int cnt = 0;
    int *v;
    int size = 0;

public:
    MyCircularQueue(int k)
    {
        v = new int[k];
        size = k;
    }
    bool enQueue(int value)
    {
        if (cnt < size)
        {
            v[++rear % size] = value;
            rear %= size;
            cnt++;
            return 1;
            // cout<<cnt<<endl;
        }
        return 0;
    }

    bool deQueue()
    {
        if (cnt > 0)
        {
            cnt--;
            front++;
            front %= size;
            return 1;
        }
        return 0;
    }

    int Front()
    {
        if (cnt == 0)
            return -1;
        return v[front];
    }

    int Rear()
    {
        if (cnt == 0)
            return -1;
        return v[rear];
    }

    bool isEmpty()
    {
        if (cnt == 0)
            return 1;
        return 0;
    }

    bool isFull()
    {
        if (cnt == size)
            return 1;
        return 0;
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