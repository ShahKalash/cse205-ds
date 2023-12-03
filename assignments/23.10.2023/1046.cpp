#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        priority_queue<int> q;
        for (auto &i : stones)
            q.push(i);
        while (q.size() > 1)
        {
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            if (a != b)
                q.push(a - b);
        }
        if (q.size())
            return q.top();
        else
            return 0;
    }
};