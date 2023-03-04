//#include<iostream>
//#include<string>
//#include<vector>
//#include<deque>
//
//#define left -1
//#define right 1
//
//using namespace std;
//
//int getBigNum(deque<int>& que, int l, int r) {
//	if (l >= r)return left;
//	if (que[l] > que[r])return left;
//	if (que[l] < que[r])return right;
//	if (que[l] == que[r])return getBigNum(que, l + 1, r - 1);
//}
//
//int main() {
//	string s;
//	cin >> s;
//	deque<int> q;
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] >= '0' && s[i] <= '9')q.push_back(s[i] - '0');
//	}
//	if (q.empty()) {
//		cout << 0 << endl;
//		return 0;
//	}
//	while (!q.empty()) {
//		if (getBigNum(q, 0, q.size() - 1) == left) {
//			cout << q.front();
//			q.pop_front();
//		}
//		else {
//			cout << q.back();
//			q.pop_back();
//		}
//	}
//	return 0;
//}
#include <stdio.h>
#include <string.h>

int main1513()
{
	int i, j, k, t, n, count = 0, num1[105] = { '\0' };
	char ch[105] = { '\0' };
	gets(ch);
	n = strlen(ch);
	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
			count++;
	}
	if (n == count)
		printf("%d\n", 0);
	else
	{
		for (i = 0, j = 0; ch[i] != '\0'; i++)
		{
			if (ch[i] >= '1' && ch[i] <= '9')
			{
				num1[j] = ch[i] - 48;
				j++;
			}
		}
		for (j = 0; num1[j] != '\0'; j++)
		{
			for (k = j + 1; num1[k] != '\0'; k++)
			{
				if (num1[j] <= num1[k])
				{
					t = num1[j];
					num1[j] = num1[k];
					num1[k] = t;
				}
			}
		}
		for (j = 0; num1[j] != '\0'; j++)
			printf("%d", num1[j]);
	}
	return 0;
}