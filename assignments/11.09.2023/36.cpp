#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool solve(int i, int j, vector<vector<char>> &board)
    {
        map<char, int> mp;
        for (int I = i; I < i + 3; I++)
        {
            for (int k = j; k < j + 3; k++)
            {
                mp[board[I][k]]++;
                if (mp[board[I][k]] > 1 && board[I][k] != '.')
                {
                    cout << I << " " << k << endl;
                    return 0;
                }
            }
        }
        return 1;
    }
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            map<char, int> mp;
            for (int j = 0; j < 9; j++)
            {
                mp[board[i][j]]++;
                if (mp[board[i][j]] > 1 && board[i][j] != '.')
                {
                    return 0;
                }
            }
        }
        for (int i = 0; i < 9; i++)
        {
            map<char, int> mp;
            for (int j = 0; j < 9; j++)
            {
                mp[board[j][i]]++;
                if (mp[board[j][i]] > 1 && board[j][i] != '.')
                {
                    return 0;
                }
            }
        }
        for (int i = 0; i < 9; i += 3)
        {
            for (int j = 0; j < 9; j += 3)
            {
                if (!solve(i, j, board))
                {
                    cout << i << " " << j;
                    return 0;
                }
            }
        }
        return 1;
    }
};