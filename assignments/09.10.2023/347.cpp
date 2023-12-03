#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> res;
        map<int, int> mp;
        for (int n : nums)
        {
            mp[n]++;
        }
        auto comp = [&](int const &a, int const &b)
        {
            return mp[a] <= mp[b];
        };
        priority_queue<int, vector<int>, decltype(comp)> pq(comp);
        for (auto it : mp)
        {
            pq.push(it.first);
        }
        while (k--)
        {
            res.push_back(pq.top());
            pq.pop();
        }
        return res;
    }
};