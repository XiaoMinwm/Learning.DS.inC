/*O(logN)*/

bool isEven(int N)
{
	if(N%2)
		return false;
	else
		return true;
}

long int Pow(long int X,int N)
{
	if(N==0)
		return 1;
	if(N==1)
		return X;
	if(isEven(N))
		return Pow(X*X,N/2);
	else
		return Pow(X*X,N/2)*X;
		//return Pow(X,N-1)*X;
}
