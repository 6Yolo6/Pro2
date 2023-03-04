#include <stdio.h>
#include <time.h>
#include <Windows.h>

void color7(short x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}
int main7()
{
	srand((unsigned)time(NULL));
	int r, y, g, n, m, k, t, flag = 0, time = 0;
	r = rand() % 31 + 10;
	color7(7);
	printf("随机生成用例中...\n\n");
	Sleep(600);
	color7(12);
	printf("\t\t红灯为%d秒\t", r);
	y = rand() % 4 + 2;
	color7(14);
	printf("黄灯为%d秒\t", y);
	g = rand() % 31 + 10;
	color7(10);
	printf("绿灯为%d秒\n", g);
	n = rand() % 10 + 1;
	Sleep(500);
	color7(7);
	printf("\n\t\t\t\t   %d\n", n);
	while (n--)
	{
		Sleep(500);
		k = rand() % 3 + 1;
		printf("\t\t\t\t   %d ", k);
		if (k == 0)
		{
			t = rand() % 20 + 1;
			printf("%d\n", t);
			if (flag)
			{
				if (m < t)
				{
					time += m + y + r;
				}
				else
				{
					time += t;
				}
			}
			else
			{
				time += t;
			}
			flag = 0;
		}
		else if (k == 1)
		{
			t = rand() % (r + 1);
			printf("%d\n", t);
			time += t;
		}
		else if (k == 2)
		{
			t = rand() % (y + 1);
			printf("%d\n", t);
			time += t + r;
		}
		else if (k == 3)
		{
			t = rand() % (g + 1);
			printf("%d\n", t);
			m = t;
			flag = 1;
		}
	}
	Sleep(1000);
	color7(11);
	printf("\t\t\t%c需要%d秒才能到学校，太慢啦！\n\t\t\t\tV2只要几秒钟^_^", 1, time);
	color7(10);
	return 0;
}