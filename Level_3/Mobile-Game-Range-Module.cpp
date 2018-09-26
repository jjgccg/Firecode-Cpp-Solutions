bool compare(Interval i1, Interval i2)
{
    return (i1.start < i2.start);    
}

vector<Interval> merge_intervals(vector<Interval> intervals_list)
{
    if(intervals_list.size() == 1 || intervals_list.size() == 0) return intervals_list;
    
    sort(intervals_list.begin(), intervals_list.end(), compare);
    vector<Interval> merged;
    
    Interval prevInterval = intervals_list[0];
    for(int i = 1; i < intervals_list.size(); i++)
    {
        Interval currInterval = intervals_list[i];
        if(currInterval.start <= prevInterval.end)
        {
            Interval* newInterval = new Interval(prevInterval.start, max(currInterval.end, prevInterval.end));
            prevInterval = *newInterval;
        }
        else
        {
            merged.push_back(prevInterval);
            prevInterval = currInterval;
        }
    }
    
    merged.push_back(prevInterval);
    
    return merged;
}