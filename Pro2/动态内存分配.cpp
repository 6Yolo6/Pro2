//#include <iostream>
//#include <malloc.h>
//
//using namespace std;
//
//int main000()
//{
//	int** q = (int**)malloc(sizeof(int) * 4);
//	if (!q)
//		return 0;
//	for (int j = 0; j < 4; j++)
//	{
//		q[j] = new int[5];
//		memset(q[j], 0, sizeof(int) * 5);
//	}
//	**q = 10;
//	for (int i = 0; i < 4; i++)
//	{
//		cout << *q[i] << "\t" << q[0][i];
//		cout << endl;
//	}
//	for (int k = 0; k < 4; k++)
//	{
//		delete[] q[k];
//		cout << q[k] << "\t";
//		q[k] = nullptr;
//		cout << q[k] << endl;
//	}
//	free(q);
//	q = nullptr;
//	return 0;
//}