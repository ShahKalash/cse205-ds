#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        vector<int> v = score;
        vector<string> ans;
        sort(score.rbegin(), score.rend());
        map<int, int> mp;
        for (int i = 0; i < v.size(); i++)
            mp[score[i]] = i + 1;
        for (auto &i : v)
            if (mp[i] == 1)
                ans.push_back("Gold Medal");
            else if (mp[i] == 2)
                ans.push_back("Silver Medal");
            else if (mp[i] == 3)
                ans.push_back("Bronze Medal");
            else
                ans.push_back(to_string(mp[i]));
        return ans;
    }
};