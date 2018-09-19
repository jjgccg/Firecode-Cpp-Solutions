void swap(int* arr, int firstPos, int secondPos)
{
    int temp = arr[firstPos];
    arr[firstPos] = arr[secondPos];
    arr[secondPos] = temp;
}

int* selection_sort_array(int arr[], int size)
{
    // at each pass, find min value and swap 
    // with the current element
    for(int i = 0; i < size - 1; i++)
    {
        int min = arr[i];
        int minIndex = i;
        for(int j = i; j < size; j++)
        {
            if(arr[j] < min)
            {
                min = arr[j];
                minIndex = j;
            }
        }
        
        if(minIndex > i) swap(arr, i, minIndex);
    }
    
    return arr;
}