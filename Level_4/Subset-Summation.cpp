bool group_sum_with_num(int arr[], int sz, int must_have, int target_sum)
{
    if(sz == 0) return false;
    
    // ROWS: elements inside of set
    // COLS: 0...sum 
    bool setAndSum[sz + 1][target_sum + 1];
    
    /* Initialize first column with TRUE, since the
       empty set is a subset of each element */
    for(int row = 0; row < sz - 1; row++)
    {
        setAndSum[row][0] = true;
    }
    
    /* Initialize each number in sum row that is not 0 with False,
       since the subset [0] will sum to none of these.*/
    for(int col = 1; col < target_sum + 1; col++)
    {
        setAndSum[0][col] = false;
    }
    
    /* First row and column filled out, start with i=1, j=1 */
    for(int i = 1; i <= sz; i++)
    {
        for(int j = 1; j <= target_sum; j++)
        {
            /* QUESTION: Is there a subset previous to current value which equals
               the target sum, OR does the currentSum - currentSetVal work?*/
            if(j < arr[i - 1])
            {
                setAndSum[i][j] = setAndSum[i - 1][j];
            }
            if(j >= arr[i - 1])
            {
                setAndSum[i][j] = setAndSum[i - 1][j] || setAndSum[i - 1][j - arr[i - 1]];
            }
        }
    }
    
    return setAndSum[sz][target_sum];
}