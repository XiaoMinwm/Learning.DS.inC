/*O(logN)*/
/*Assume:M>=N*/

unsigned int Gcd(unsigned int M,unsigned int N)
{
	unsigned ine Rem;

	while(N>0)
	{
		Rem=M%N;
		M=N;
		N=Rem;
	}
	return M;
}
