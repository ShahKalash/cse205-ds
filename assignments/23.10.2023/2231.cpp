#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largestInteger(int num)
    {
        string h = to_string(num);
        string even, odd;
        for (auto &i : h)
        {
            int a = i - '0';
            if (a % 2)
                odd += i;
            else
                even += i;
        }
        sort(odd.rbegin(), odd.rend());
        sort(even.rbegin(), even.rend());
        string ans;
        int k = 0, j = 0;
        for (auto &i : h)
        {
            int a = i - '0';
            cout << a << endl;
            if (a % 2)
                ans += odd[k++];
            else
                ans += even[j++];
        }
        cout << ans << endl;
        int anss = stoi(ans);
        return anss;
    }
};