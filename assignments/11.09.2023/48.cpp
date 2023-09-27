class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        vector<vector<int>> ans(matrix.size(), vector<int>(matrix.size()));
        int ii = 0, jj = 0;
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                ans[ii % n][jj % n] = matrix[j][i];
                jj++;
            }
            ii++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                matrix[i][j] = ans[i][j];
        }
    }
};