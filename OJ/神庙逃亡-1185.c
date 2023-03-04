#include<stdio.h>

int main1185() 
{
	int N;
	double S, H, X, Y, h;
	scanf("%d", &N);
	while (N--)
	{
		scanf("%lf%lf%lf%lf", &S, &H, &X, &Y);
		h = Y * (S / X * 1.0) - 10.0 * (S / X) * (S / X) * 0.5;
		if (h >= H)
			printf("P\n");
		else
			printf("F\n");
	}
	return 0;
}
