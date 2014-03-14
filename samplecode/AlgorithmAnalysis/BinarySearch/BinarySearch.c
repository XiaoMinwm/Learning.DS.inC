/*O(logN)*/

#define NOTFOUND -1

int BinarySearch(const ElementType A[],ElementType X,int N)
{
	int Low,High,Mid;

	Low=0;High=N-1;
	while(Low<=High)
	{
		Mid=(Low+High)/2;
		if(X>A[Mid])
		{
			Low=Mid+1;
		}
		else if(X<A[Mid])
		{
			High=Mid-1;
		}
		else
			return mid;
	}

	return NOTFOUND;
}
