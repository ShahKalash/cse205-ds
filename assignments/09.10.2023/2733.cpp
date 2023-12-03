#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findNonMinOrMax(vector<int> &nums)
    {
        set<int> s;
        sort(nums.begin(), nums.end());
        for (auto i : nums)
            s.insert(i);
        if (s.size() <= 2)
            return -1;
        int a = nums[0];
        for (auto i : nums)
            if (i != a)
            {
                return i;
            }
        return 0;
    }
};