#include <stdio.h>

int A[100] = {0}, B[10000] = {0};
int main1266()
{
	/*int n, i, A, B, num, time;
	scanf("%d", &n);
	scanf("%d%d", &A, &B);
	for (i = 1; i < n; i++)
	{
		scanf("%d%d", &num, &time);
		if (A < num)
		{
			A = num;
			B = time;
		}
		else if (A == num)
			if (B > time)
				B = time;
	}
	printf("%d %d", A, B);
	return 0;*/
	int i, n;
	scanf("%d", &n);
	scanf("%d%d", &A[0], &B[0]);
	for (i = 1; i < n; i++)
	{
		scanf("%d%d", &A[i], &B[i]);
		if (A[0] < A[i])
		{
			A[0] = A[i];
			B[0] = B[i];
		}
		else if (A[0] == A[i])
			if (B[0] > B[i])
				B[0] = B[i];
	}
	printf("%d %d", A[0], B[0]);
	return 0;
}