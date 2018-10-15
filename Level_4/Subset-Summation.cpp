bool groupSum(int arr[], int size, int target)
{
    if(size == 0) return false;

    //ROWS: elements inside of the set
    //COLS: 0...sum
    bool setAndSum[size + 1][target + 1];

    /* Initialize first column with TRUE, since the
    empty set is a subset of each element */
    for(int row = 0; row < size - 1; row++)
    {
        setAndSum[row][0] = true;
    }

    /* Initialize each number in sum row that is not 0 with False,
    since the subset [0] will sum to none of these.*/
    for(int col = 1; col < target + 1; col++)
    {
        setAndSum[0][col] = false;
    }

    for(int setVal = 1; setVal <= size; setVal++)
    {
        for(int curTarget = 1; curTarget <= target; j++)
        {
            // 1) Is there a subset previous to the current value which
            // equals the target sum?
            // 2) Does the current sum - current value in the set work?
            if(curTarget < arr[curTarget - 1])
            {
                setAndSum[setVal][curTarget] = setAndSum[setVal - 1][curTarget];
            }
            if(curTarget >= arr[curTarget - 1])
            {
                setAndSum[setVal][curTarget] = setAndSum[setVal - 1][curTarget] || 
                                               setAndSum[setVal - 1][curTarget - arr[setVal - 1]];
            }
        }
    }
}