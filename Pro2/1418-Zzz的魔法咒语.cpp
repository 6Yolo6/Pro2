//#include <iostream>
//#include <cstdio>
//
//
//int main1418()
//{
//	int T, i, j, n, m, k, count, flag, a[1005] = { 0 };
//	scanf("%d", &T);
//	//cin >> T;
//	while (T--)
//	{
//		count = 0;
//		flag = 0;
//		i = 0;
//		memset(a, 0, sizeof(int) * 1005);
//		scanf("%d%d%d", &n, &m, &k);
//		//cin >> n >> m >> k;
//		while (n--)
//			scanf("%d", &a[i++]);
//			//cin >> a[i++];
//		for (n = 0; n < i; n++)
//		{
//			if (a[n] == 1)
//				j = -10;
//			else if (a[n] == 2 || a[n] == 3)
//				j = -5;
//			else if (a[n] == 4)
//				j = -3;
//			else if (a[n] == 5)
//				j = 20;
//			if (m + j < 0)
//			{
//				if (count < k)
//				{
//					count++;
//					m = 100;
//				}
//				else
//				{
//					printf("Pdddddd is crazy.\n");
//					//cout << "Pdddddd is crazy." << endl;
//					flag = 1;
//					break;
//				}
//			}
//			m += j;
//			if (m > 100)
//			{
//				m = 100;
//			}
//		}
//		if (flag)
//			continue;
//		else
//			if (m < 0)
//				printf("Pdddddd is crazy.\n");
//		//cout << "Pdddddd is crazy." << endl;
//			else
//				printf("%d\n", count);
//				//cout << count << endl;
//	}
//	return 0;
//}