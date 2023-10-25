#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        stack<int> st;
        int n = nums2.size();
        vector<int> output(n);
        st.push(nums2[n - 1]);
        output[n - 1] = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (st.top() > nums2[i])
            {
                output[i] = st.top();
                st.push(nums2[i]);
            }
            else
            {
                while (st.size() && st.top() <= nums2[i])
                    st.pop();
                if (!st.size())
                    output[i] = -1;
                else
                    output[i] = st.top();
                st.push(nums2[i]);
            }
        }
        for (auto i : output)
            cout << i << " ";
        map<int, int> mp;
        for (int i = 0; i < n; i++)
            mp[nums2[i]] = i;
        vector<int> ans;
        for (auto i : nums1)
        {
            ans.push_back(output[mp[i]]);
        }
        return ans;
    }
};