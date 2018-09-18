bool are_all_characters_unique(string str)
{
    if(str == "" || str.length() == 1) return true;

    int chars[256] = {0};

    for(int i = 0; i < str.length(); i++)
    {
        chars[str.at(i)] += 1;
        if(chars[str.at(i)] > 1) return false;
    }

    return true;
}
