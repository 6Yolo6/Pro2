//#include <iostream>
//#include <queue>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//struct Graph {
//	int* v{ nullptr }; //顶点
//	int** edge{ nullptr }; //邻接矩阵
//	int n{ 0 }; //顶点数
//	int e{ 0 }; //边数
//};
//
//#define MAX 32767
//int visitBFS[10005] = { 0 };
//
//void create_graph(Graph *G, char ch) {
//	int n, e;
//	cin >> n >> e;
//	G->n = n;
//	G->e = e;
//	G->v = new int[n]();
//	G->edge = new int* [n];
//	for (int i = 0; i < n; i++) {
//		G->edge[i] = new int[n];
//		for (int j = 0; j < n; j++)
//			G->edge[i][j] = MAX;
//	}
//	//for (int i = 0; i < G->n; i++) {
//	//	for (int j = 0; j < G->n; j++) {
//	//		if (i != j)
//	//			G->edge[i][j] = MAX;
//	//	}
//	//}
//	for (int i = 0; i < G->n; i++)
//		G->v[i] = i;
//	int start, end, value;
//	for (int j = 0; j < G->e; j++) {
//		//cin >> start >> end;
//		//G->edge[start][end] = 1;
//		//if (ch == 'U')
//		//	G->edge[end][start] = 1;
//		cin >> start >> end >> value;
//		G->edge[start][end] = value;
//		if (ch == 'U')
//			G->edge[end][start] = value;
//	}
//}
//
////打印邻接矩阵
//void print_graph(Graph G) {
//	cout << " ";
//	for (int i = 0; i < G.n; i++) {
//		cout << " " << G.v[i];
//	}
//	for (int i = 0; i < G.n; i++) {
//		cout << endl << G.v[i];
//		for (int j = 0; j < G.n; j++) {
//			if (G.edge[i][j] == MAX)
//				cout << " 0";
//			else
//				cout << " " << G.edge[i][j];
//		}
//	}
//	cout << endl;
//}
//
//struct Node {
//	Node* prev{ nullptr };
//	Node* next{ nullptr };
//	int value{ 0 };
//	Node(int value) {
//		this->value = value;
//	}
//};
//
////广度优先遍历
//void BFS(Graph G, int u) {
//	queue<int> q;
//	cout << u << " ";
//	visitBFS[u] = 1;
//	q.push(u);
//	while (!q.empty()) {
//		int m = q.front();
//		q.pop();
//		for (int i = 0; i < G.n; i++) {
//			if (G.edge[m][i] > 0 && visitBFS[i] == 0) {
//				visitBFS[i] = 1;
//				q.push(i);
//				cout << i << " ";
//			}
//		}
//	}
//}
//
////广度优先最短路径
//int BFS(Graph G, int u, int v) {
//	Node* head = nullptr;
//	Node* rear = nullptr;
//	visitBFS[u] = 1;
//	Node* temp = new Node(u);
//	temp->prev = nullptr;
//	temp->next = nullptr;
//	head = rear = temp;
//	int cnt = -1;
//	while (head) {
//		int m = head->value;
//		for (int i = 0; i < G.n; i++) {
//			if (G.edge[m][i] > 0 && visitBFS[i] == 0) {
//				Node* temp0 = new Node(i);
//				temp0->prev = head;
//				temp0->next = nullptr;
//				rear->next = temp0;
//				rear = temp0;
//				visitBFS[i] = 1;
//				if (rear->value == v) {
//					Node* p = rear;
//					string str = "";
//					int num = 0;
//					stack<int> s;
//					while (p) {
//						s.push(p->value);
//						//cout << p->value << " ";
//						str = str + " " + to_string(p->value);
//						p = p->prev;
//						cnt++;
//					}
//					int t;
//					while (!s.empty()) {
//						t = s.top();
//						s.pop();
//						if (s.empty())
//							break;
//						num += G.edge[t][s.top()];
//					}
//					reverse(str.begin(), str.end());
//					cout << str << endl;//路径
//					cout << num << endl;//长度
//					return cnt - 1;
//				}
//			}
//		}
//		head = head->next;
//	}
//	return cnt;
//}
//
////深度优先遍历
//void DFS(Graph G, int v) {
//	//cout << v << " ";
//	visitBFS[v] = 1;
//	for (int i = 0; i < G.n; i++) {
//		if (G.edge[v][i] > 0 && visitBFS[i] == 0) {
//			DFS(G, i);
//		}
//	}
//}
//
////Dijkstra单源最短路径
//void Dijkstra(Graph G, int start, int end) {
//	int* dis = new int[G.n];
//	int* path = new int[G.n];
//	bool* visit = new bool[G.n];
//	//初始化
//	for (int i = 0; i < G.n; i++) {
//		if (G.edge[start][i] != 0 && i != start) {
//			dis[i] = G.edge[start][i];
//			path[i] = start;
//		}
//		else {
//			dis[i] = MAX;
//			path[i] = -1;
//		}
//		visit[i] = false;
//		path[start] = start;
//		dis[start] = 0;
//	}
//	visit[start] = true;
//	//剩余顶点
//	for (int i = 0; i < G.n - 1; i++) {
//		int min = MAX, u;
//		for (int j = 0; j < G.n; j++) {
//			if (visit[j] == false && dis[j] < min) {
//				min = dis[j];
//				u = j;
//			}
//		}
//		visit[u] = true;
//		//更新
//		for (int k = 0; k < G.n; k++) {
//			if (visit[k] == false && G.edge[u][k] != 0 && G.edge[u][k] + min < dis[k]) {
//				dis[k] = G.edge[u][k] + min;
//				path[k] = u;
//			}
//		}
//	}
//	//路径
//	stack<int> s;
//	//for (int i = 0; i < G.n; i++) {
//	//	if (i != start) {
//	//		int p = i;
//	//		while (p != start) {
//	//			s.push(p);
//	//			p = path[p];
//	//		}
//	//		s.push(p);
//	//		while (!s.empty()) {
//	//			cout << s.top() << " ";
//	//			s.pop();
//	//		}
//	//		cout << endl << dis[i] << endl;
//	//	}
//	//}
//	cout << dis[end];
//	delete[] dis;
//	delete[] path;
//	delete[] visit;
//	dis = nullptr;
//	path = nullptr;
//	visit = nullptr;
//}
//
////Prime最小生成树
//void prime(Graph G, int start) {
//	int index = start;
//	int i, j, k = 0;
//	int* dis = new int[G.n]();
//	int* path = new int[G.n]();
//	bool* visit = new bool[G.n]();
//	int** min_edge = new int* [G.n];
//	for (int i = 0; i < G.n; i++)
//		min_edge[i] = new int[G.n]();
//	visit[start] = true;
//	path[k++] = G.v[start];
//	for (i = 0; i < G.n; i++)
//		dis[i] = G.edge[start][i];
//	dis[start] = 0;
//	for (i = 1; i < G.n; i++) {
//		int min = MAX;
//		for (j = 0; j < G.n; j++) {
//			if (!visit[j] && (dis[j] < min)) {
//				min = dis[j];
//				index = j;
//			}
//		}
//		visit[index] = true;
//		path[k] = G.v[index];
//		//最小生成树邻接矩阵
//		for (int m = 0; m < G.n; m++) {
//			if (G.edge[index][m] == dis[index]) {
//				min_edge[m][index] = dis[index];
//				min_edge[index][m] = dis[index];
//			}
//		}
//		k++;
//		dis[index] = 0;
//		//更新距离
//		for (j = 0; j < G.n; j++) {
//			if (!visit[j] && (dis[j] > G.edge[index][j]))
//				dis[j] = G.edge[index][j];
//		}
//	}
//	for (i = 0; i < k; i++)
//		cout << path[i] << " ";
//	cout << endl;
//	for (i = 0; i < G.n; i++) {
//		for (j = 0; j < G.n; j++) {
//			cout << min_edge[i][j] << " ";
//		}
//		cout << endl;
//	}
//	delete[] dis;
//	delete[] path;
//	delete[] visit;
//	dis = nullptr;
//	path = nullptr;
//	visit = nullptr;
//}
//
//struct Edge {
//	int start;
//	int end;
//	int value;
//};
//
//struct Assist {
//	int value; //顶点数据
//	int sign; //顶点标记
//};
//
//int cmp(const void* e1, const void* e2) {
//	return ((Edge*)e1)->value - ((Edge*)e2)->value;
//}
//
//int locate(Assist* assist, int n, int p) {
//	for (int i = 0; i < n; i++) {
//		if (assist[i].value == p) {
//			return i;
//		}
//	}
//	return -1;
//}
//
////Kruskal最小生成树
//void kruskal() {
//	int n, e;
//	cin >> n >> e;
//	Edge* edge = new Edge[e];
//	Edge* min_edge = new Edge[e];
//	Assist* assist = new Assist[n];
//	for (int i = 0; i < n; i++) {
//		assist[i].value = i;
//		assist[i].sign = i;
//	}
//	for (int j = 0; j < e; j++) 
//		cin >> edge[j].start >> edge[j].end >> edge[j].value;
//	qsort(edge, e, sizeof(edge[0]), cmp);
//	int num = 0;
//	for (int i = 0; i < e; i++) {
//		int start = locate(assist, n, edge[i].start);
//		int end = locate(assist, n, edge[i].end);
//		if (start != -1 && end != -1 && assist[start].sign != assist[end].sign) {
//			min_edge[num] = edge[i];
//			num++;
//			//更改顶点标记
//			for (int j = 0; j < n; j++)
//				if (assist[j].sign == assist[end].sign)
//					assist[j].sign = assist[start].sign;
//			//最小生成树
//			if (num == n - 1)
//				break;
//		}
//	}
//	for (int i = 0; i < n - 1; i++)
//		cout << min_edge[i].start << " " << min_edge[i].end << endl;
//	cout << endl;
//}
//
////几笔画
//int count_draw(Graph G) {
//	int count = 0;
//	for (int i = 0; i < G.n; i++) {
//		for (int j = 0; j < G.n; j++) {
//			if (G.edge[i][j] == 1) //计算度
//				G.v[i]++;
//		}
//		if (G.v[i] % 2 == 1) //奇度点
//			count++;
//	}
//	if (count == 0)
//		count = 2;
//	return count / 2;
//}
//
////图的连通分量
//int connect (Graph G) {
//	int count = 0;
//	for (int i = 0; i < G.n; i++) {
//		if (visitBFS[i] == 0) {
//			DFS(G, i);
//			count++;
//		}
//	}
//	return count;
//}
//
//int main21325450() {
//	//Graph G;
//	//char ch;
//	//cin >> ch;
//	//create_graph(&G, ch);
//	//print_graph(G);
//	//cout << connect(G) << endl;
//
//	//int n;
//	//cin >> n;
//	//G.n = n;
//	//G.v = new int[n]();
//	//G.edge = new int* [n];
//	//for (int i = 0; i < n; i++)
//	//	G.edge[i] = new int[n]();
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < n; j++) {
//	//		cin >> G.edge[i][j];
//	//	}
//	//}
//	//cout << count_draw(G) << endl;
//	
//
//
//	//int v;
//	//cin >> v;
//	//BFS(G, v);
//	//DFS(G, v);
//	//int start, end;
//	//cin >> start >> end;
//	//cout << BFS(G, start, end);
//	//Dijkstra(G, start, end);
//	//prime(G, 0);
//	kruskal();
//
//	//for (int i = 0; i < G.n; i++) {
//	//	delete[] G.edge[i];
//	//	G.edge[i] = nullptr;
//	//}
//	//delete[] G.edge;
//	//delete[] G.v;
//	//G.edge = nullptr;
//	//G.v = nullptr;
//	return 0;
//}
//
////图的连通分量
////int pre[12500];
////
////
////int root(int x)
////{
////	while (x != pre[x])
////	{
////		x = pre[x];
////	}
////	return x;
////}
////
////void Merge(int a, int b)
////{
////	if (root(a) != root(b))
////	{
////		pre[root(a)] = root(b);
////	}
////	return;
////}
////
////int main()
////{
////	int n, m;
////	cin >> n >> m;
////	int i;
////	for (i = 0; i < n; i++)
////		pre[i] = i;
////	int a, b;
////	for (i = 0; i < m; i++)
////	{
////		cin >> a >> b;
////		Merge(a, b);
////	}
////	int sum = 0;
////	for (i = 0; i < n; i++)
////	{
////		if (pre[i] == i)
////			sum++;
////	}
////	cout << sum << endl;
////	return 0;
////}
