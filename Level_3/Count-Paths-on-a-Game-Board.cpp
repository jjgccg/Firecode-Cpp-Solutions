#include <vector>

/*Use DP to get result*/
int count_paths(int rows, int cols)
{
    vector<vector<int>> dpVec;
    dpVec.resize(rows, vector<int>(cols, 0));
    
    /*Prefill first row and column with 1's*/
    for(int j = 0; j < rows; j++)
    {
        dpVec[j][0] = 1;
    }
    for(int i = 0; i < cols; i++) 
    {
        dpVec[0][i] = 1;
    }

    for(int i = 1; i < rows; i++)
    {
        for(int j = 1; j < cols; j++)
        {
            dpVec[i][j] = dpVec[i][j - 1] + dpVec[i - 1][j];
        }
    }
    
    return dpVec[rows - 1][cols - 1];
}