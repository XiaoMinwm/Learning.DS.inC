/*Online Algorithm
 *O(N)*/

int MaxSubsequenceSum(const A[],int N)
{
	int MaxSum,ThisSum,i;

	ThisSum=MaxSum=0;
	for(i=0;i<N;i++)
	{
		ThisSum+=A[i];

		if(ThisSum>MaxSum)
			MaxSum=ThisSum;
		else if(ThisSum<0)
			ThisSum=0;
	}
	return MaxSum;
}
