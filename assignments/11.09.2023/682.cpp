#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        stack<int> st;
        int ans = 0;
        for (auto &i : operations)
        {
            if (i == "D")
            {
                int top = st.top();
                st.push(2 * top);
            }
            else if (i == "C")
                st.pop();
            else if (i == "+")
            {
                int t1 = st.top();
                st.pop();
                int t2 = st.top();
                st.push(t1);
                st.push(t1 + t2);
            }
            else
            {
                st.push(stoi(i));
            }
        }
        while (st.size())
        {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};