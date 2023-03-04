//#include <iostream>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int main1340() {
//	map<int, int> count;
//	int n, num, flag, *a = new int[20005];
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		count[a[i]]++;
//	}
//	sort(a, a + n, greater<int>());
//	while (1) {
//		flag = 0;
//		sort(a, a + n, greater<int>());
//		num = a[0];
//		while (num != 0 && count[num] == 1)
//			num /= 2;
//		if (num == 0) {
//			flag = 1;
//			break;
//		}
//		a[0] = num;
//		count[a[0]]++;
//		if (flag)
//			break;
//	}
//	sort(a, a + n, greater<int>());
//	cout << a[0];
//	delete[] a;
//
//	//map<int, int> count;
//	//int n, num;
//	//priority_queue<int> q;
//	//cin >> n;
//	//for (int i = 0; i < n; i++) {
//	//	cin >> num;
//	//	q.push(num);
//	//	count[num]++;
//	//}
//	//while (1) {
//	//	num = q.top();
//	//	while (num != 0 && count[num] == 1)
//	//		num /= 2;
//	//	if (num == 0)
//	//		break;
//	//	q.pop();
//	//	q.push(num);
//	//	count[num]++;
//	//}
//	//cout << q.top();
//	return 0;
//}