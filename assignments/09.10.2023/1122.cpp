#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
    {
        map<int, int> mp;
        for (auto i : arr1)
            mp[i]++;
        vector<int> ans;
        for (auto i : arr2)
        {
            for (int j = 0; j < mp[i]; j++)
                ans.push_back(i);
        }
        map<int, int> mp2;
        for (auto i : arr2)
            mp2[i]++;
        int sz = ans.size();
        for (auto i : arr1)
            if (mp2[i] == 0)
                ans.push_back(i);
        sort(ans.begin() + sz, ans.end());
        return ans;
    }
};