#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minSetSize(vector<int> &arr)
    {
        map<int, int> mp;
        for (auto i : arr)
            mp[i]++;
        vector<pair<int, int>> v;
        for (auto i : mp)
        {
            v.push_back({i.second, i.first});
        }
        sort(v.rbegin(), v.rend());
        int ans = 0;
        int n = arr.size();
        int cnt = 0;
        for (auto i : v)
        {
            ans++;
            cnt += i.first;
            if (cnt >= n / 2)
                break;
        }
        return ans;
    }
};