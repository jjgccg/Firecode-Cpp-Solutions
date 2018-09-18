bool permutation(string input1, string input2)
{
    if(input1.length() != input2.length()) return false;
    
    int buffer[256] = {0};
    
    for(int i = 0; i < input1.length(); i++)
    {
        buffer[input1.at(i)]++;
        buffer[input2.at(i)]--;
    }
    
    for(int i = 0; i < 256; i++)
    {
        if(buffer[i] != 0) return false;
    }
    
    return true;
}