int max_gain(int arr[], int sz)
{
    // DEFINE PAIR: (value, position)
    int min[2];
    int max[2];
    
    min[0] = arr[0];
    max[0] = arr[0];
    min[1] = 0;
    max[1] = 0;
    
    for(int i = 1; i < sz; i++)
    {
        if(arr[i] < min[0])
        {
            min[0] = arr[i];
            min[1] = i;
        }
        if(arr[i] > max[0])
        {
            max[0] = arr[i];
            max[1] = i;
        }
    }
    
    if(max[1] > min[1]) return max[0] - min[0];
    
    return 0;
}