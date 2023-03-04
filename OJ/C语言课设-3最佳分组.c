#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>
#include <Windows.h>
int a3[105][45] = { 0 }, a4[105][45] = { 0 };
void gotoxy3(int x, int y)
{
	COORD p;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	p.X = x; p.Y = y;
	SetConsoleCursorPosition(handle, p);
}

void color3(short x) 
{
	if (x >= 0 && x <= 15)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);	
}

int main3()
{	
	srand((unsigned)time(NULL));
	int N, K, i, j, k = 0, p = 0, m, n, a, b, t = 0, count = 0, c[11] = { 0 }, cnt[11] = { 0 }, num[1005] = { 0 };
	printf("请输入点数和组数:");
	scanf("%d%d", &N, &K);
	for (i = 0; i < N; i++)
	{
		num[i] = rand() % K + 1;
		cnt[num[i]]++;
	}
	for (k = 0, n = 0; count <= K; count++, n++)
	{
		if (t == K)
			break;
		i = rand() % K + 1;
		for (p = 0; c[p] != 0; p++)
		{
			while (i == c[p])
			{
				i = rand() % K + 1;
				count--;
			}
		}
		c[k++] = i;
		color3(rand() % 16);
		for (j = 0; j < cnt[i]; j++)
		{
			t++;
			a = i * 7;
			b = i * 3 + 2;
			m = rand() % a + (a - i);
			n = rand() % b + (b - i);
			gotoxy3(m, n - 3);
			printf("%d", i);
		}
	}
	gotoxy3(50,70);
	return 0;
}