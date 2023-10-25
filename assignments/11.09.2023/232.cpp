#include <bits/stdc++.h>
using namespace std;
class MyQueue
{
    stack<int> input;
    stack<int> output;

public:
    MyQueue()
    {
    }

    void push(int x)
    {
        input.push(x);
    }

    int pop()
    {
        if (output.size())
        {
            int top = output.top();
            output.pop();
            return top;
        }
        else
        {
            while (input.size())
            {
                output.push(input.top());
                input.pop();
            }
            int top = output.top();
            output.pop();
            return top;
        }
        return 0;
    }

    int peek()
    {
        if (output.size())
        {
            return output.top();
        }
        else
        {
            while (input.size())
            {
                output.push(input.top());
                input.pop();
            }
            return output.top();
        }
    }

    bool empty()
    {
        if (!output.size() && !input.size())
            return 1;
        return 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */