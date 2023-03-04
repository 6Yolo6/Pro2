#include <stdio.h>

int main1007()
{
	int n;
	int i = 1;
	int a = 1; //µÚÒ»Ïî
	int j = 1; //·ûºÅ
	double sum = 0.0;
	scanf("%d", &n);
	while (i <= n)
	{
		sum = sum + (j * 1.0) / a;
		a += 3;
		j = -j;
		i++;
	}
	printf("%.3f", sum);
	return 0;
}