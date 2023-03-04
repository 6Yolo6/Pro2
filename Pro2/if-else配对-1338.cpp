//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//
//int main1338()
//{
//	int N;
//	string str;
//	stack<int> stk;
//	int count = 0;
//	int maxCount = 0;
//	cin >> N;
//	while (N--) 
//	{
//		cin >> str;
//		if (str == "if")
//		{
//			stk.push(1);
//		}
//		else {
//			if (!stk.empty())
//			{
//				stk.pop();
//				if (!stk.empty()) 
//				{
//					count++;
//				}
//				else 
//				{
//					maxCount = max(maxCount, count);
//					count = 0;
//				}
//			}
//			else 
//			{
//				stk.push(1);
//				break;
//			}
//		}
//	}
//	if (!stk.empty())
//		cout << "NO";
//	else 
//		cout << maxCount;
//	return 0;
//}
//
