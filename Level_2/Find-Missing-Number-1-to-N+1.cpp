int find_missing_number(int arr[], int n)
{
    int expectedSum = 0;
    for(int i = 1; i < n+2 ; i++ )
    {
        expectedSum +=i;
    }


    int actualSum = 0;
    for(int i = 0; i < n; i++)
    {
        actualSum += arr[i];
    }

    return  expectedSum - actualSum;
}
