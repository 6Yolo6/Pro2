//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//int n = 0;
//int num[105];       
//int visit[105];  
//
//int check(int m) {//ËØÊı
//	int i, n;
//	n = (int)sqrt(m);
//	for (i = 2; i <= n; i++)
//		if (m % i == 0) 
//			return 0;
//	return 1;
//}
//
//void dfs(int step) {
//	if (step == n && check(num[0] + num[n - 1])){ //³ö¿Ú 
//		for (int i = 0; i < n; i++)
//			cout << num[i] << ' ';
//		cout << endl;
//		return;
//	}
//	else {
//		for (int i = 2; i <= n; i++) {
//			if (visit[i] == 0 && check(i + num[step - 1])) {   
//				num[step] = i;
//				visit[i] = 1;
//				dfs(step + 1);
//				visit[i] = 0;
//			}
//		}
//	}
//
//}
//int main() {
//	cin >> n;
//	num[0] = 1;  
//	visit[1] = 1; 
//	dfs(1);	 
//	return 0;
//}