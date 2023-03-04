#include <stdio.h>

int main1627()
{
	int N, i, height, t, flag = 0, count = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &height);
		if (i)
		{
			if (height < t)
				flag = 1;
			if (height > t && flag)
			{
				flag = 0; 
				count++;
			}
		}
		else
			t = height;
	}
	printf("%d", count);
	return 0;
}
//#include<stdio.h>
//
//int main()
//{
//	int N, i, h[1000] = { 0 }, cnt = 0, l;
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &h[i]);
//	}
//	for (i = 1; i < N - 1; i++)
//	{
//		if (h[i] < h[i - 1] && h[i] < h[i + 1])
//		{
//			cnt++;
//		}
//		else if (h[i] < h[i - 1] && h[i] == h[i + 1])
//		{
//			for (l = i; l < N; l++)
//			{
//				if (h[l] < h[i])
//				{
//					break;
//				}
//				else if (h[l] > h[i])
//				{
//					cnt++;
//					break;
//				}
//
//			}
//		}
//	}
//	printf("%d", cnt);
//	return 0;
//}
