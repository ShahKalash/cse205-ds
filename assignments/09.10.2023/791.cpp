#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string customSortString(string order, string s)
    {
        map<char, int> mp;
        for (auto i : s)
            mp[i]++;
        string ans;
        for (auto i : order)
        {
            for (int j = 0; j < mp[i]; j++)
                ans += i;
            mp[i] = 0;
        }
        for (auto i : mp)
        {
            if (i.second)
            {
                for (int j = 0; j < i.second; j++)
                    ans += i.first;
            }
        }
        return ans;
    }
};