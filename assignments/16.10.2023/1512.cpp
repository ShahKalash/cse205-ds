#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        map<int, int> mp;
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(nums[i]) == mp.end())
                mp[nums[i]]++;
            else
            {
                ans += mp[nums[i]];
                mp[nums[i]]++;
            }
        }
        return ans;
    }
};