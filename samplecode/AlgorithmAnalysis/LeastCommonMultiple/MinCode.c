/*Assume:M>=N*/

unsigned int Gcd(unsigned int M,unsigned int N)
{
	return N? Gcd(N,M%N):M;
}

unsigned int Lcm(unsigned int M,unsigned int N)
{
	return M/Gcd(M,N)*N;
}
