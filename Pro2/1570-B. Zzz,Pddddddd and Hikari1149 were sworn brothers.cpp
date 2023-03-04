//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int read() {
//	char ch;
//	int result;
//	while (!(((ch = getchar()) >= '0') && (ch <= '9')));
//	result = ch - '0';
//	while (((ch = getchar()) >= '0') && (ch <= '9'))
//		result = 10 * result + ch - '0';
//	return result;
//}
//
//struct Edge
//{
//	int u;
//	int v;
//};
//
//struct Query
//{
//	char mode;
//
//	int i;
//	int u, v;
//};
//
//class MF_set
//{
//public:
//	vector<size_t> set;
//public:
//	MF_set(size_t n)
//	{
//		for (size_t i = 0; i < n; ++i)
//		{
//			set.push_back(i);
//		}
//	}
//	void merge(size_t a, size_t b) {
//		set[find(set[a])] = find(b);
//	}
//	size_t find(size_t i) {
//		return set[i] == i ? i : set[i] = find(set[i]);
//	}
//};
//
//bool vis[100005];
//Edge edges[100005];
//Query queries[100005];
//
//int main()
//{
//	int n, m, q;
//	n = read();
//	m = read();
//	q = read();
//	//cin >> n >> m >> q;
//	MF_set set(n + 1);
//	for (int i = 1; i <= m; ++i)
//	{
//		edges[i].u = read();
//		edges[i].v = read();
//		//cin >> edges[i].u >> edges[i].v;
//	}
//	for (int i = 1; i <= q; ++i)
//	{
//		//queries[i].mode = read();
//		cin >> queries[i].mode;
//		if (queries[i].mode == 'Z')
//		{
//			queries[i].u = read();
//			queries[i].v = read();
//			//cin >> queries[i].u >> queries[i].v;
//		}
//		else
//		{
//			//cin >> queries[i].i;
//			queries[i].i = read();
//			vis[queries[i].i] = true;
//		}
//	}
//	for (int i = 1; i <= m; ++i)
//		if (not vis[i])
//			set.merge(edges[i].u, edges[i].v);
//	string ans;
//	int idx = 0;
//	for (int i = q; i >= 1; --i)
//	{
//		if (queries[i].mode == 'P')
//			set.merge(edges[queries[i].i].u, edges[queries[i].i].v);
//		else
//		{
//			if (set.find(queries[i].u) == set.find(queries[i].v))
//				vis[idx++] = true;
//			else
//				vis[idx++] = false;
//		}
//	}
//	for (int i = idx - 1; i >= 0; --i)
//		cout << (vis[i] ? "Yes" : "No") << endl;
//	return 0;
//}