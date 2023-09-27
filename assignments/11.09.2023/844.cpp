class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> st1;
        stack<char> st2;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '#')
            {
                if (st1.size())
                    st1.pop();
            }
            else
                st1.push(s[i]);
        }
        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] == '#')
            {
                if (st2.size())
                    st2.pop();
            }
            else
                st2.push(t[i]);
        }
        if (st1 == st2)
            return 1;
        return 0;
    }
};