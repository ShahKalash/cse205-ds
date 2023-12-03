#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> maxSubsequence(vector<int> &nums, int k)
    {
        vector<pair<int, int>> v;
        for (int i = 0; i < nums.size(); i++)
            v.push_back({nums[i], i});
        sort(v.rbegin(), v.rend());
        vector<int> idx;
        vector<int> ans;
        for (int i = 0; i < k; i++)
            idx.push_back(v[i].second);
        sort(idx.begin(), idx.end());
        for (int i = 0; i < k; i++)
            ans.push_back(nums[idx[i]]);
        return ans;
    }
};