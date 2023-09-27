#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        int n = s.length();
        stack<char> st1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st1.push(s[i]);
            else if (s[i] == ')')
            {
                if (st1.size() && st1.top() == '(')
                {
                    st1.pop();
                }
                else
                    return 0;
            }
            else if (s[i] == '}')
            {
                if (st1.size() && st1.top() == '{')
                {
                    st1.pop();
                }
                else
                    return 0;
            }
            else if (s[i] == ']')
            {
                if (st1.size() && st1.top() == '[')
                {
                    st1.pop();
                }
                else
                    return 0;
            }
            else
                return 0;
        }
        if (st1.size())
            return 0;
        return 1;
    }
};