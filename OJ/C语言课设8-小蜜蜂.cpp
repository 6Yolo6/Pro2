#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <MMSystem.h>
#pragma comment(lib,"Winmm.lib")

#define BULLET 15   //子弹数量
#define ENEMY 8   //敌人数量
int color(int c);
void haha();                //搞怪
void mode();                //选择模式

int high, width;	//显示游戏界面
int position_x, position_y;  //飞机位置
int bullets_x[BULLET + 1] = { 0 };
int bullets_y[BULLET + 1]; //子弹位置,同一屏幕最多可存在BULLET个子弹{1~BULLET else0} 
int enemy_x[ENEMY + 1] = { 0 };
int enemy_y[ENEMY + 1]; //目标位置,同一屏幕最多可存在ENEMY个目标{1~ENEMY else0}； 
int enemy_speed, enemy_speed_num;
int bullet_x1, bullet_y1, bullet_x2, bullet_y2, bullet_x3, bullet_y3;  //子弹位置
int score;  //得分
int hp1;   //飞机血量
int i, j, p, k, m;
int speed = 0;   //敌人速度
int NUM = 10, vt;
int flag = 0;

int color(int c)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);        //更改文字颜色
    return 0;
}
void gotoxy8(int x, int y) //将光标调整到(x,y)的位置
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle, pos);
}

void HideCursor()  //隐藏光标显示
{
    CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

void startup()//数据初始化
{
    position_x = high / 2; 
    position_y = width / 2; 
    bullet_x1 = -1;
    bullet_y1 = position_y;
    bullet_x2 = -1;
    bullet_y2 = position_y;
    bullet_x3 = -1;
    bullet_y3 = position_y;
    high = 38, width = 78;//界面大小 
    position_x = high / 2, position_y = width / 2;//飞机初始位置 
    for (i = 1; i <= ENEMY; i++) 
    {
        enemy_y[i] = rand() % width + 1;//4个目标位置随机取 
    }
    enemy_speed = 12;//目标下落初始速度,数字越大越慢
        //此值与level、之后的速度变化、之后的等级变化代码有关 
    enemy_speed_num = 1;//目标下落速度之循环变量初值(循环计数的) 
    score = 0;
    hp1 = 5;
    speed = 0;
}

void show()//显示画面
{
    char ch = 0;
    int x, y;
    gotoxy8(0, 0);
    for (i = 0; i < high; i++) //行
    {
        for (j = 0; j < width; j++) //列
        {
            for (m = 0; m < ENEMY; m++)
            {
                if (i == enemy_x[m] && j == enemy_y[m])//输出敌人
                    printf("Ψ");
            }
            if (i == position_x && j == position_y)//输出飞机
            {
                printf("Ж");
            }
            else if (i == bullet_x1 && j == bullet_y1)//输出子弹
            {
                printf("|");
            }
            else if (i == bullet_x2 && j == bullet_y2 - 1)
            {
                printf("|||");
            }
            else if (i == bullet_x3 && j == bullet_y3 + 1)
            {
                printf("||");
            }
            else if (j == width - 1 || i == high - 1 || j == 0 || i == 0)				//打印边界 
                printf("-");
            else
            {
                printf(" ");
            }
            HideCursor();
        }
        if (j == width)
            printf("  \n");
        if (hp1 == 0)
        {
            //游戏结束 
            system("cls");
            gotoxy8(43, 15);
            printf("你挂了，真菜，V2比你强多了^_^\n");
            printf("输入回车继续游戏\nESC退出游戏\n");
            while (ch = getch())
            {
                if (ch == '\r')
                    mode();
                else if (ch == 27)
                    exit(0);
                else
                    printf("输入回车！!\n");
            }
        }
    }
}

void bulletMove()   //开挂子弹
{
    int n;
    for (n = 0; n < ENEMY; n++)
    {
        if (bullet_x1 > enemy_x[n])
            bullet_x1--;
        else if (bullet_x1 < enemy_x[n])
            bullet_x1++;
        if (bullet_y1 > enemy_y[n])
            bullet_y1--;
        else if (bullet_y1 < enemy_y[n])
            bullet_y1++;
        if (bullet_x1 > enemy_x[n])
            bullet_x1--;
        else if (bullet_x2 < enemy_x[n])
            bullet_x2++;
        if (bullet_y2 > enemy_y[n])
            bullet_y2--;
        else if (bullet_y2 < enemy_y[n])
            bullet_y2++;
        if (bullet_x3 > enemy_x[n])
            bullet_x3--;
        else if (bullet_x3 < enemy_x[n])
            bullet_x3++;
        if (bullet_y3 > enemy_y[n])
            bullet_y3--;
        else if (bullet_y3 < enemy_y[n])
            bullet_y3++;
    }
}

void data()
{
    int i;
    if (bullet_x1 > -1)
    {
        bullet_x1 -= rand() % 3 + 1;
        bullet_y1 += rand() % 6 - 2;
    }
    if (bullet_x2 > -1)
    {
        bullet_x2 -= rand() % 3 + 1;
        bullet_y2 += rand() % 6 - 2;
    }
    if (bullet_x3 > -1)
    {
        bullet_x3 -= rand() % 3 + 1;
        bullet_y3 += rand() % 6 - 2;
    }
    for (i = 0; i < ENEMY; i++)
    {
        if ((bullet_x3 == enemy_x[i] - 1 && bullet_y3 == enemy_y[i] - 1) || (bullet_x3 == enemy_x[i] && bullet_y3 == enemy_y[i] - 1) || (bullet_x1 == enemy_x[i] && bullet_y1 == enemy_y[i]) || (bullet_x2 == enemy_x[i] && (bullet_y2 == enemy_y[i] + 1 || bullet_y2 == enemy_y[i] - 1 || bullet_y2 == enemy_y[i])) || (bullet_x3 == enemy_x[i] && bullet_y3 == enemy_y[i])) //命中敌机
        {
            score++;
            enemy_x[i] = -1;   //生成新的飞机
            enemy_y[i] = rand() % width;
            bullet_x1 = -1;
            bullet_x2 = -1;
            bullet_x3 = -1;
        }
        if ((position_x == enemy_x[i]) && (position_y == enemy_y[i]))
        {
            hp1--;
            enemy_x[i] = -1;
            enemy_x[i] = rand() % high;
            enemy_y[i] = rand() % width;
        }
        //控制敌机下落速度
        NUM = rand() % 10 + 1;
        if (score >= 5)
        {
            speed++;
        }
        if (score >= 10)
        {
            speed++;
        }
        if (speed < NUM)
        {
            speed++;
        }
        else
        {
            enemy_x[i]++;
            enemy_y[i] -= rand() % 4 - 2;
            speed = 0;
        }
        if (enemy_x[i] > high)
        {
            enemy_x[i] = -1;
            enemy_y[i] = rand() % width;
        }
    }
}

void date_2()
{
    int i;
    for (i = 0; i < ENEMY; i++)
    {
        if ((bullet_x1 > -1) && (bullet_y1 > -1))
            bulletMove();
        if (bullet_x1 == enemy_x[i] && bullet_y1 == enemy_y[i]) //命中敌机
        {
            score++;
            enemy_x[i] = -1;   //生成新的飞机
            enemy_y[i] = rand() % width;
            bullet_x1 = -1;
        }
        //控制敌机下落速度
        NUM = rand() % 10 + 1;
        if (speed < NUM)
        {
            speed++;
        }
        else
        {
            enemy_x[i]++;
            speed = 0;
        }
        if (enemy_x[i] > high)
        {
            enemy_x[i] = -1;
            enemy_y[i] = rand() % width;
        }
    }

}
void move8()
{
    char input;
    if (_kbhit())
    {
        input = getch();
        if (input == 'w' && position_x > 1)
            position_x--;
        if (input == 's' && position_x < high - 1)
            position_x++;
        if (input == 'a' && position_y > 1)
            position_y--;
        if (input == 'd' && position_y < width - 1)
            position_y++;
        if (input == ' ')
        {
            bullet_x1 = position_x - 1;
            bullet_y1 = position_y;
        }
        if (input == 'j')
        {
            bullet_x2 = position_x - 1;
            bullet_y2 = position_y;
        }
        if (input == 'k')
        {
            bullet_x3 = position_x - 1;
            bullet_y3 = position_y + 1;
        }
    }
}
void game_tip()
{
    gotoxy8(100, 8);
    color(14);
    printf("游戏得分：%d ", score);
    gotoxy8(100, 10);
    printf("飞机血量：%d ", hp1);
    gotoxy8(100, 12);
    printf("用W A S D 控制飞机的移动");
    gotoxy8(100, 14);
    printf("空格发射子弹");
    gotoxy8(100, 16);
    printf("j、k额外子弹");
    gotoxy8(100, 18);
    color(12);
    printf("骚年，快去战斗吧！");
    gotoxy8(50, 20);
    color(14);
}
void appearance()
{
    color(11);
    gotoxy8(40, 12);
    printf("欢迎来到小蜜蜂 请选择模式\n\n");
    gotoxy8(45, 14);
    printf("  1.单人模式    \n");
    gotoxy8(45, 15);
    printf("  2.开挂模式    \n");
    gotoxy8(45, 16);
    printf("  3.双人模式\n");
    gotoxy8(45, 20);
    scanf("%d", &p);
    /*PlaySound(TEXT("D://未来初音.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);*/
}

void mode()
{
    system("cls");
    appearance();
    if (p == 1)
    {
        gotoxy8(0, 0);
        system("cls");
        startup();
        HideCursor();
        srand((unsigned)time(NULL));
        while (1)
        {
            gotoxy8(0, 0);
            game_tip();
            show();
            move8();
            data();
        }
        system("pause");
    }
    else if (p == 2)
    {
        system("cls");
        startup();
        HideCursor();
        srand((unsigned)time(NULL));
        while (1)
        {
            game_tip();
            show();
            move8();
            date_2();
        }
        system("pause");
    }
    else
        haha();
}
void haha()
{
    char ch;
    system("cls");
    gotoxy8(45, 12);
    printf("还想玩请输入666\n");
    gotoxy8(45, 14);
    scanf("%d", &k);
    system("cls");
    if (k == 666)
    {
        gotoxy8(45, 16);
        color(12);
        printf("哈");
        color(13);
        printf("哈");
        color(14);
        gotoxy8(45, 18);
        printf("输入回车继续游戏\n");
        gotoxy8(45, 19);
        while (ch = getch())
        {
            if (ch == '\r')
                mode();
            else if (ch == 27)
                exit(0);
            else
                printf("请输入回车！!\n");
        }
    }
}
int main8()
{
    mode();
    return 0;
}