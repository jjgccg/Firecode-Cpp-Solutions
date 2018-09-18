bool is_isomorphic(string input1, string input2)
{
    if(input1.length() != input2.length()) return false;

    map<char, int> map1;
    map<char, int> map2;


    for(int i = 0; i < input1.length(); i++)
    {
        //first string
        if(map1.find(input1.at(i)) == map1.end())
        {
            map1[input1.at(i)] = 1;
        }
        else
        {
            map1[input1.at(i)] += 1;
        }

        //second string
        if(map2.find(input2.at(i)) == map2.end())
        {
            map2[input2.at(i)] = 1;
        }
        else
        {
            map2[input2.at(i)] += 1;
        }

        if(map1[input1.at(i)] != map2[input2.at(i)]) return false;
    }

    return true;
}
