#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        int n = nums.size();
        stack<int> st;
        st.push(nums[n - 1]);
        for (int i = n - 2; i >= 0; i--)
        {
            if (st.top() < nums[i])
            {
                while (st.size() && st.top() <= nums[i])
                    st.pop();
                st.push(nums[i]);
            }
            else
            {
                st.push(nums[i]);
            }
        }
        vector<int> output(n);
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] < st.top())
            {
                output[i] = st.top();
                st.push(nums[i]);
            }
            else
            {
                while (st.size() && st.top() <= nums[i])
                {
                    st.pop();
                }
                if (st.size() == 0)
                    output[i] = -1;
                else
                    output[i] = st.top();
                st.push(nums[i]);
            }
        }
        return output;
    }
};