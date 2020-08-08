void HeapSort(vector<int> list)
{
	if(list.empty())
		return;
	int length = list.size();
	for(int i = length/2; i>=0; --i)
	{
		HeapBuild(list,0,length-1);
	}
	for(int i = length-1; i>=0; --i)
	{
		int temp = list[i]；
		list[i] = list[0];
		list[0] = temp;
		HeapBulid(list,0,i)
	}
}

void HeapBuild(vector<int> list, int s, int e)
{
	for(int i = 2*s; i < length; i *= 2)
	{
		int temp = list[s];
		if(list[i]<list[i+1])
			++i;
		if(temp > list[i])
			break;
		list[s] = list[i];
		s = i;
	}
	list[s] = temp;
}
