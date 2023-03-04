#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<time.h>
int map[100][100], map1[100][100];
int max_x, max_y;
int pre[10000];
void build();
int IsHaveNeighbor(int X_index, int Y_index);
void Creat(int X_index, int Y_index);
void print();
int I, J;

struct node
{
	int x, y;//横纵坐标
}que[36000], start, end;
int xx[] = { -1, 1, 0, 0 };//横坐标的变化，上下左右四个方向
int yy[] = { 0, 0, -1, 1 };//纵坐标
void show(int a)
{
	int b = pre[a];//指向前一个点
	if (b == 0)
	{
		//printf("(0, 0)\n");
		//printf("(%d, %d)\n", que[a].x, que[a].y);
		map[que[a].x][que[a].y] = 1;
		return;
	}
	else
		show(b);
	//printf("(%d, %d)\n", que[a].x, que[a].y);
	//printf("bfs\n");
	map[que[a].x][que[a].y] = 1;
}
void bfs(int a, int b)
{
	int front = 0, rear = 0;
	end.x = a;
	end.y = b;
	map1[a][b] = 0;
	pre[0] = -1;
	que[rear++] = end;
	while (front < rear)
	{
		start = que[front];
		//printf("%d\n",q.x);
		if (start.x == max_x - 2 && start.y == max_y - 2)//走到终点
		{
			show(front);
			printf("bfs算法\n");
			printf("⊙是起点，☆是终点，◇是路径\n");
			return;
		}
		for (int i = 0; i < 4; i++)
		{
			end.x = start.x + xx[i];
			end.y = start.y + yy[i];
			if (map[end.x][end.y] == 5 && map1[end.x][end.y] == 5)
			{
				pre[rear] = front;
				//rear = rear + 1;
				que[rear++] = end;
				map1[end.x][end.y] = 0;
			}
		}
		front++;

	}
	return;
}

void build()
{
	int i, j;
	i = rand() % max_x;
	j = rand() % max_y;
	if (i % 2 == 0)
		i = i + 1;
	if (i == max_x)
		i = i - 2;
	if (j % 2 == 0)
		j = j + 1;
	if (j == max_y)
		j = j - 2;
	//map[i][j] = 3;
	I = i;
	J = j;
	Creat(i, j);
	//printf("%d,%d", i, j);
}
int IsHaveNeighbor(int X_index, int Y_index)
{
	int i, j, flag = 0;
	if ((X_index >= 3 && map[X_index - 2][Y_index] == 1) || (X_index < max_x - 3 && map[X_index + 2][Y_index] == 1) || (Y_index >= 3 && map[X_index][Y_index - 2] == 1) || (Y_index < max_y - 3 && map[X_index][Y_index + 2] == 1))
		return 1;
	else
		return 0;
}
void Creat(int X_index, int Y_index)
{
	int rand_position, x, y, flag = 0;
	x = X_index;
	y = Y_index;
	//如果四个方向都没有了，返回上一步，否则，继续
	while (1)
	{
		flag = 0;
		flag = IsHaveNeighbor(X_index, Y_index);
		if (flag == 0)
		{
			return;
		}
		else
		{
			map[X_index][Y_index] = 5;
			x = X_index;
			y = Y_index;
			while (1)
			{
				rand_position = rand() % 4;
				if (rand_position == 0 && X_index >= 3 && map[X_index - 2][Y_index] == 1)//上
				{
					X_index = X_index - 2;
				}
				else if (rand_position == 1 && X_index < max_x - 3 && map[X_index + 2][Y_index] == 1)//下
				{
					X_index = X_index + 2;
				}
				else if (rand_position == 2 && Y_index >= 3 && map[X_index][Y_index - 2] == 1)//左
				{
					Y_index -= 2;
				}
				else if (rand_position == 3 && Y_index < max_y - 3 && map[X_index][Y_index + 2] == 1)//右
				{
					Y_index += 2;
				}
				else continue;
				map[(x + X_index) / 2][(y + Y_index) / 2] = 5;
				map[X_index][Y_index] = 5;
				Creat(X_index, Y_index);
				break;
			}
		}
	}

}

void print()
{
	int i, j;
	map[max_x - 2][max_y - 2] = 4;
	map[I][J] = 3;
	for (i = 0; i < max_x; i++)
	{
		for (j = 0; j < max_y; j++)
		{
			if (map[i][j] == 3) //3是起点
				printf("⊙");
			if (map[i][j] == 0)// 0是墙
				printf("■");
			if (map[i][j] == 5) //5是通路
				printf("  ");
			if (map[i][j] == 4)//4是终点
				printf("☆");
			if (map[i][j] == 1)
				printf("◇");
		}
		printf("\n");
	}

}

int main4214()
{
	int i, j, k;
	printf("请输入迷宫的行数和列数\n");
	scanf("%d%d", &max_x, &max_y);
	if (max_x % 2 == 0)
		max_x += 1;
	if (max_y % 2 == 0)
		max_y += 1;
	srand((unsigned)time(NULL));
	system("mode con cols=220 lines=100");
	system("color 0A");
	for (i = 0; i < max_x; i++)
	{
		for (j = 0; j < max_y; j++)
		{
			map1[i][j] = 5;
			if (i % 2 != 0 && j % 2 != 0)
			{
				map[i][j] = 1;
			}
			else map[i][j] = 0;
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	build();
	printf("请选择起点模式");
	printf("\n1. 随机起点  2.（1，1）为起点\n");
	scanf("%d", &k);
	if (k == 1)
		bfs(I, J);
	else if (k == 2)
	{
		bfs(1, 1);
		I = 1;
		J = 1;
	}
	print();
	return 0;
}



