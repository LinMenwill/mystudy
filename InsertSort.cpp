void InsertSort(vector<int> list)
{
    if(list.empty())
        return;
    int temp = 0;
    for(int i = 0; i < list.size(); ++i)
    {
        if(list[i+1]<list[i])
        {
            temp = list[i+1];
            for(int j = i; list[j]>temp&&j>=0; --j)
            {
                list[j+1] = list[j];
            }
            list[j] =temp;
        }
    }
}
