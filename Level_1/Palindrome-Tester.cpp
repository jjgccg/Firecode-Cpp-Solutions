bool is_string_palindrome(string str)
{
    if(str.length() == 0) return true;

    int j = str.length() - 1;
    for(int i = 0; i < str.length()/2; i++)
    {
        if(str[i] != str[j]) return false;
        j--;
    }

    return true;
}
