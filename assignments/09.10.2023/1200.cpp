#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr)
    {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int minn = INT_MAX;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            // minn = min(minn, arr[i+1]-arr[i]);
            if (arr[i + 1] - arr[i] < minn)
            {
                minn = arr[i + 1] - arr[i];
                vector<int> v = {arr[i], arr[i + 1]};
                ans.clear();
                ans.push_back(v);
            }
            else if (arr[i + 1] - arr[i] == minn)
            {
                vector<int> v = {arr[i], arr[i + 1]};
                ans.push_back(v);
            }
        }
        return ans;
    }
};