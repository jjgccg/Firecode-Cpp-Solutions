int single_number(int arr[], int sz)
{
    if(sz == 0) return sz;

    map<int, int> intCount;

    for(int i = 0; i < sz; i++)
    {
        if(intCount.find(arr[i]) == intCount.end())
        {
            intCount[arr[i]] = 1;
        }
        else
        {
            intCount[arr[i]] += 1;
        }
    }

    for(auto it = intCount.begin(); it != intCount.end(); it++)
    {
        if(it->second == 1) return it->first;
    }

    return 0;
}
