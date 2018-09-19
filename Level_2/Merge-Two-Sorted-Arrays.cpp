// Shitty overly complex O(n) solution
int* merge(int arr_left[],int sz_left, int arr_right[], int sz_right){
    int* arr_merged = new int [sz_left+sz_right];
    
    int leftInd = 0;
    int rightInd = 0;
    int mergedInd = 0;
    
    while(mergedInd < sz_left + sz_right)
    {
        // leftInd at the end - add rest of right arr to merged
        if(leftInd == sz_left && rightInd < sz_right)
        {
            while(rightInd < sz_right)
            {
                arr_merged[mergedInd] = arr_right[rightInd];
                mergedInd++;
                rightInd++;
            }
        }
        // rightInd at the end - add rest of left arr to merged
        else if(rightInd == sz_right && leftInd < sz_left)
        {
            while(leftInd < sz_left)
            {
                arr_merged[mergedInd] = arr_left[leftInd];
                mergedInd++;
                leftInd++;
            }
        }
        else if(leftInd < sz_left && rightInd < sz_right)
        {
            if(arr_left[leftInd] > arr_right[rightInd])
            {
                arr_merged[mergedInd] = arr_right[rightInd];
                mergedInd++;
                rightInd++;
            }
            else if(arr_left[leftInd] < arr_right[rightInd])
            {
                arr_merged[mergedInd] = arr_left[leftInd];
                mergedInd++;
                leftInd++; 
            }
            else
            {
                arr_merged[mergedInd] = arr_left[leftInd];
                mergedInd++;
                arr_merged[mergedInd] = arr_right[rightInd];
                mergedInd++;
                
                leftInd++;
                rightInd++;
            }
        }
        else
        {
            break;
        }
    }
    
    return arr_merged;
}