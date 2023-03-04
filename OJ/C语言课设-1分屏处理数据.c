#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

void gotoxy1(int x, int y)
{
	COORD p;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	p.X = x; p.Y = y;
	SetConsoleCursorPosition(handle, p);
}
int main1()
{
	srand((unsigned)time(NULL));
	int num = 0, i, j = 0, k = 0, m, flag = 1, temp = 0, n[1000] = { 0 }, key = 0, count = 1, max = 0, min = 0, ave = 0;
	char ch[100] = { 0 }, ch2[100] = { 0 };
	for (i = 0; i < 1000; i++)
		n[i] = rand() % 999 + 1;
	while (1)
	{
			system("cls");
			printf("\n\t\t\t\t     共1000个随机数");
			printf("\n\n");
			temp = (count - 1) * 10;
			for (i = temp; i <= temp + 99; i++)
			{
				if (temp == i)
				{
					max = n[i];
					min = n[i];
				}
				else
				{
					max = max > n[i] ? max : n[i];
					min = min < n[i] ? min : n[i];
				}
				if (i % 10 == 0)
					printf("\n\t\t\t");
				ave += n[i];
				printf("%-4d", n[i]);
			}
			printf("\n\n\n\t\tmax = %d\t\t\min = %d\t\tave = %.1lf\n\n", max, min, (double)ave / 100);
			ave = 0;
			printf("press any key to continue...");
			printf("\t\t\t\t页码:%2d", count);
			printf("\t\t跳转到:\n");
			printf("press ESC to exit...");
			gotoxy1(79, 18);
		j = 0;
		k = 0;
		while (ch[j] = getch())
		{
			if (ch[j] == 27)
				return 0;
			if (ch[j] == 13)
			{
				for (m = 0; ch2[m] != '\0'; m++)
					num = num * 10 + ch2[m] - 48;
				count = num * flag;
				flag = 1;
				if (count >= 10)
					count = 10;
				if (count < 1)
					count = 1;
				num = 0;
				break;
			}
			else if (ch[j] >= '0' && ch[j] <= '9')
			{
				ch2[k++] = ch[j];
				printf("%c", ch[j]);
				j++;
			}
			else if (ch[j] == '-')
			{
				printf("-");
				flag = -1;
				j++;
			}
			else if (ch[j] == 77)
			{
				count++;
				if (count >= 10)
					count = 10;
				j++;
				break;
			}
			else if (ch[j] == 75)
			{
				count--;
				if (count <= 0)
					count = 1;
				j++;
				break;
			}
		}
		for (j = 0; ch[j] != '\0'; j++)
		{
			ch[j] = 0;
			ch2[j] = 0;
		}
	}
	return 0;
}