typedef struct
{
	int CoefArray[MaxDegree+1];
	int HighPower;
} * Polynomial;

void ZeroPolynomial(Polynomial Poly)
{
	int i;

	for(i=0;i<=MaxDegree;i++)
		Poly->CoefArray[i]=0;
	Poly->HighPower=0;
}

void AddPolynomial(const Polynomial Poly1,const Polynomial Poly2,Polynomial PolySum)
{
	int i;

	ZeroPolynomial(PolySum);
	PolySum->HighPower=Max(Poly1->HighPower,Poly2->HighPower);

	for(i=PolySum->HighPower;i>=0;i--)
		PolySum->CoefArray[i]=Poly1->CoefArray[i]+Poly2->CoefArray[i];
}

void MultPolynomial(const Polynomial Poly1,const Polynomial Poly2,Polynomial PolyProd)
{
	int i,j;

	ZeroPolynomial(PolyProd);
	PolyProd=Poly1->HighPower+Poly2->HighPower;

	if(PolyProd->HighPower>MaxDegree)
		Error("Exceeded array size");
	else
		for(i=0;i<=Poly1->HighPower;i++)
			for(j=0;j<=Poly2->HighPower;j++)
				PolyProd->CoefArray[i+j]+=Poly1->CoefArray[i]*Poly2->CoefArray[j];
}
