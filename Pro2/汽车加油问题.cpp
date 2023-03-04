//#include <cstdio>
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main()
//{
//	ifstream fread("D:\\算法实验\\5\\OILING CAR\\TEST\\OIL10.IN");
//	if (fread.fail()) {
//		cout << "打开文件失败" << endl;
//		exit(0);
//	}
//	int i, N, K, oil, n = 0, count = 0;
//	//scanf("%d%d", &N, &K);
//	fread >> N >> K;
//	cout << N << " " << K << endl;
//	n = N;
//	for (i = 0; i <= K; i++)
//	{
//		//scanf("%d", &oil);
//		fread >> oil;
//		//cout << oil << " ";
//		if (oil > N)
//		{
//			printf("No Solution");
//			return 0;
//		}
//		n -= oil;
//		if (n == 0)
//		{
//			count++;
//			n = N;
//		}
//		else if (n < 0)
//		{
//			count++;
//			n = N - oil;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//
//
