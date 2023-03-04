//#include <cstdio>
//#include <string.h>
//#include <iostream>
//using namespace std;
//
//int getBigNum(int num[], int l, int r) {
//	if (num[l] > num[r])
//		return -1;
//	if (num[l] < num[r])
//		return 1;
//	if (num[l] == num[r])
//		return getBigNum(num, l + 1, r - 1);
//}
//
//int main1513()
//{
//	int i, j, k, n, m = 0, count = 0, num[105] = { 0 }, num1[105] = { 0 };
//	char ch[105] = { '\0' };
//	gets_s(ch);
//	n = strlen(ch);
//	for (i = 0; ch[i] != '\0'; i++)
//	{
//		if (ch[i] >= 'a' && ch[i] <= 'z')
//			count++;
//	}
//	if (n == count)
//		printf("%d\n", 0);
//	else
//	{
//		for (i = 0, j = 0; ch[i] != '\0'; i++)
//		{
//			if (ch[i] >= '1' && ch[i] <= '9')
//			{
//				num1[j] = ch[i] - 48;
//				j++;
//			}
//		}
//		i = 0, k = j;
//		while (1) {
//			if (getBigNum(num1, i, k - 1) == -1)
//				printf("%d", num1[i++]);
//			else {
//				printf("%d", num1[k - 1]);
//				k--;
//			}
//			if (i == k)
//				break;
//		}
//	}
//	return 0;
//}