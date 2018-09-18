bool binary_search(int arr[], int size, int n)
{
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        int mid = (start + end)/2;

        if(arr[mid] == n) return true;
        else if(arr[mid] > n) //search lower half
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return false;
}
