#include <algorithm>    // std::sort
#include <vector>       // std::vector

int* remove_dup(int A[], int sz)
{
    int *output = NULL;
    map<char, int> chars;
    vector<int> dupVec;
    
    // Create count of characters
    for(int i = 0; i < sz; i++)
    {
        if(chars.find(A[i]) == chars.end())
        {
            chars[A[i]] = 1;
        }
        else
        {
            chars[A[i]] += 1;
        }
    }
    
    // Append duplicates to vector
    for(auto i = chars.begin(); i != chars.end(); i++)
    {
        if(i->second > 1) dupVec.push_back(i->first);
    }
    
    // Put vector values inside of array
    if(dupVec.size() > 0)
    {
        sort(dupVec.begin(), dupVec.end());
        output = new int[dupVec.size()];
        for(int i = 0; i < dupVec.size(); i++)
        {
            output[i] = dupVec[i];
        }    
    }
    
    return output;
}