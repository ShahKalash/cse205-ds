#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int ans = 0;
        int n = tickets.size();
        int i = 0;
        while (tickets[k])
        {
            if (tickets[i % n])
            {
                ans++;
                tickets[i % n]--;
            }
            i++;
        }
        return ans;
    }
};