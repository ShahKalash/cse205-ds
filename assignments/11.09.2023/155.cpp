class MinStack
{
public:
    vector<int> v;
    vector<int> minn;
    int mini = INT_MAX;
    MinStack()
    {
    }

    void push(int val)
    {
        v.push_back(val);
        if (val <= mini)
        {
            mini = val;
            minn.push_back(val);
        }
    }

    void pop()
    {
        if (v[v.size() - 1] == mini)
        {
            minn.pop_back();
            if (minn.size())
                mini = minn[minn.size() - 1];
            else
                mini = INT_MAX;
        }
        v.pop_back();
    }

    int top()
    {
        return v[v.size() - 1];
    }

    int getMin()
    {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */