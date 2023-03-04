//#include <iostream>
//#include <queue>
//#include <cstdio>
//
//using namespace std;
//
//struct Node {
//	int head;
//	int cnt;
//};
//int N, M, L, visited[1005] = { 0 }, ci[1005], di[1005];
//
//int bfs()
//{
//	Node node;
//	queue<Node> q;
//	node.head = N;
//	node.cnt = 0;
//	q.push(node);
//	visited[node.head] = 1;
//	Node cur, next;
//	while (!q.empty())
//	{
//		cur = q.front(); 
//		q.pop();
//		for (int i = 0; i < M; i++)
//		{
//			if (cur.head >= ci[i] && !visited[cur.head - ci[i]])
//			{
//				next.head = cur.head - ci[i];
//				visited[next.head] = 1;
//				next.cnt = cur.cnt + 1;
//				if (next.head == 0)
//					return next.cnt;
//				next.head = min(next.head + di[i], L);
//				q.push(next);
//			}
//		}
//	}
//	return -1;
//}
//
//int main1060() {
//	scanf("%d%d%d", &N, &M, &L);
//	for (int i = 0; i < M; i++) {
//		scanf("%d%d", &ci[i], &di[i]);
//	}
//	printf("%d\n", bfs());
//	return 0;
//}
//
