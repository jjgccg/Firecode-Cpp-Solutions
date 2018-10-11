int max_profit(int prices[], int sz)
{
    int maxProfit = 0;
    for(int i = 1; i < sz; i++)
    {
        int currProfit = prices[i] - prices[i - 1];
        if(currProfit > 0)
        {
            maxProfit += currProfit;
        }
    }
    
    return maxProfit;
}