#include <algorithm>
int make_change(int coins[], int n, int amount)
{
    if(amount < 0) return 0;
    
    int combinations[amount + 1];
    fill_n(combinations, amount + 1, 0); //initialize array with zeroes
    combinations[0] = 1;
    
    for(int coin = 0; coin < n; coin++)
    {
        for(int i = 1; i < amount + 1; i++)
        {
            if(i >= coins[coin]) //if amount >= COIN VALUE
            {
                combinations[i] += combinations[i - coins[coin]];
            }
        }
    }
    
    return combinations[amount];
}