#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (mp.find(nums[i]) != mp.end())
            {
                if (i - mp[nums[i]] <= k)
                    return 1;
            }
            mp[nums[i]] = i;
        }
        return 0;
    }
};