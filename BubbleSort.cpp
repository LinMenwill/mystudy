void BubbleSort(vector<int> list)
{
  int i,j;
  bool flag = true;
  for(i = 0; i< list.size()&&flag; ++i)
  {
    flag = false;
    for(j=list.size()-1; j>=0; --j)
    {
      if(list[j]<list[j-1])
      {
        int temp = list[j];
        list[j] = list[j-1];
        list[j-1] = temp;
        flag = true;
      }
    }
  }
}
