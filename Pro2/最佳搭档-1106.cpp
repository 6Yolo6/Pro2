//#include <iostream>
//using namespace std;
//
//int s[12][12] = { 0 }, m[12] = { 0 }, n, max1;
//void partner(int k, int max_)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		if (!m[i])
//		{
//			max_ += s[k][i];
//			if (max_ > max1)
//				max1 = max_;
//			m[i] = 1;
//			if (k != n)
//				partner(k + 1, max_);
//			m[i] = 0;
//			max_ -= s[k][i];
//		}
//	}
//}
//
//int main1106()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> s[i][j];
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			int k;
//			cin >> k;
//			s[j][i] *= k;
//		}
//	}
//	partner(1, 0);
//	cout << max1 << endl;
//	return 0;
//}