#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int j = 0;
        for (auto i : nums)
            if (i == j)
                j++;
        return j;
    }
};