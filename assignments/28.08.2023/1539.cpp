#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {

        // Simple Linar Search Method

        for (int i = 0; i < arr.size(); i++)
        {
            int x = arr[i] - (i + 1);

            if (x >= k)

                return i + k;
        }
        return arr.size() + k;
    }
};