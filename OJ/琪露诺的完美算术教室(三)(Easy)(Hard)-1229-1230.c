#include <stdio.h>

typedef long long LL;
LL pow_mod(LL a, LL n, LL m)
{
	LL res = 1;
	while (n)
	{
		if(n&1)  
			res = res * a % m;
		a = a * a % m;	 
		n >>= 1;	
	}
	return res ;
}
int main1229()
{
	LL a, b, c;
	scanf("%I64d%I64d%I64d",&a, &b, &c);
	printf("%I64d\n",pow_mod(a, b, c));
	return 0;
}