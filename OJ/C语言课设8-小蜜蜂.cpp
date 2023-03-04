#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <MMSystem.h>
#pragma comment(lib,"Winmm.lib")

#define BULLET 15   //�ӵ�����
#define ENEMY 8   //��������
int color(int c);
void haha();                //���
void mode();                //ѡ��ģʽ

int high, width;	//��ʾ��Ϸ����
int position_x, position_y;  //�ɻ�λ��
int bullets_x[BULLET + 1] = { 0 };
int bullets_y[BULLET + 1]; //�ӵ�λ��,ͬһ��Ļ���ɴ���BULLET���ӵ�{1~BULLET else0} 
int enemy_x[ENEMY + 1] = { 0 };
int enemy_y[ENEMY + 1]; //Ŀ��λ��,ͬһ��Ļ���ɴ���ENEMY��Ŀ��{1~ENEMY else0}�� 
int enemy_speed, enemy_speed_num;
int bullet_x1, bullet_y1, bullet_x2, bullet_y2, bullet_x3, bullet_y3;  //�ӵ�λ��
int score;  //�÷�
int hp1;   //�ɻ�Ѫ��
int i, j, p, k, m;
int speed = 0;   //�����ٶ�
int NUM = 10, vt;
int flag = 0;

int color(int c)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);        //����������ɫ
    return 0;
}
void gotoxy8(int x, int y) //����������(x,y)��λ��
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle, pos);
}

void HideCursor()  //���ع����ʾ
{
    CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

void startup()//���ݳ�ʼ��
{
    position_x = high / 2; 
    position_y = width / 2; 
    bullet_x1 = -1;
    bullet_y1 = position_y;
    bullet_x2 = -1;
    bullet_y2 = position_y;
    bullet_x3 = -1;
    bullet_y3 = position_y;
    high = 38, width = 78;//�����С 
    position_x = high / 2, position_y = width / 2;//�ɻ���ʼλ�� 
    for (i = 1; i <= ENEMY; i++) 
    {
        enemy_y[i] = rand() % width + 1;//4��Ŀ��λ�����ȡ 
    }
    enemy_speed = 12;//Ŀ�������ʼ�ٶ�,����Խ��Խ��
        //��ֵ��level��֮����ٶȱ仯��֮��ĵȼ��仯�����й� 
    enemy_speed_num = 1;//Ŀ�������ٶ�֮ѭ��������ֵ(ѭ��������) 
    score = 0;
    hp1 = 5;
    speed = 0;
}

void show()//��ʾ����
{
    char ch = 0;
    int x, y;
    gotoxy8(0, 0);
    for (i = 0; i < high; i++) //��
    {
        for (j = 0; j < width; j++) //��
        {
            for (m = 0; m < ENEMY; m++)
            {
                if (i == enemy_x[m] && j == enemy_y[m])//�������
                    printf("��");
            }
            if (i == position_x && j == position_y)//����ɻ�
            {
                printf("��");
            }
            else if (i == bullet_x1 && j == bullet_y1)//����ӵ�
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
            else if (j == width - 1 || i == high - 1 || j == 0 || i == 0)				//��ӡ�߽� 
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
            //��Ϸ���� 
            system("cls");
            gotoxy8(43, 15);
            printf("����ˣ���ˣ�V2����ǿ����^_^\n");
            printf("����س�������Ϸ\nESC�˳���Ϸ\n");
            while (ch = getch())
            {
                if (ch == '\r')
                    mode();
                else if (ch == 27)
                    exit(0);
                else
                    printf("����س���!\n");
            }
        }
    }
}

void bulletMove()   //�����ӵ�
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
        if ((bullet_x3 == enemy_x[i] - 1 && bullet_y3 == enemy_y[i] - 1) || (bullet_x3 == enemy_x[i] && bullet_y3 == enemy_y[i] - 1) || (bullet_x1 == enemy_x[i] && bullet_y1 == enemy_y[i]) || (bullet_x2 == enemy_x[i] && (bullet_y2 == enemy_y[i] + 1 || bullet_y2 == enemy_y[i] - 1 || bullet_y2 == enemy_y[i])) || (bullet_x3 == enemy_x[i] && bullet_y3 == enemy_y[i])) //���ел�
        {
            score++;
            enemy_x[i] = -1;   //�����µķɻ�
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
        //���Ƶл������ٶ�
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
        if (bullet_x1 == enemy_x[i] && bullet_y1 == enemy_y[i]) //���ел�
        {
            score++;
            enemy_x[i] = -1;   //�����µķɻ�
            enemy_y[i] = rand() % width;
            bullet_x1 = -1;
        }
        //���Ƶл������ٶ�
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
    printf("��Ϸ�÷֣�%d ", score);
    gotoxy8(100, 10);
    printf("�ɻ�Ѫ����%d ", hp1);
    gotoxy8(100, 12);
    printf("��W A S D ���Ʒɻ����ƶ�");
    gotoxy8(100, 14);
    printf("�ո����ӵ�");
    gotoxy8(100, 16);
    printf("j��k�����ӵ�");
    gotoxy8(100, 18);
    color(12);
    printf("ɧ�꣬��ȥս���ɣ�");
    gotoxy8(50, 20);
    color(14);
}
void appearance()
{
    color(11);
    gotoxy8(40, 12);
    printf("��ӭ����С�۷� ��ѡ��ģʽ\n\n");
    gotoxy8(45, 14);
    printf("  1.����ģʽ    \n");
    gotoxy8(45, 15);
    printf("  2.����ģʽ    \n");
    gotoxy8(45, 16);
    printf("  3.˫��ģʽ\n");
    gotoxy8(45, 20);
    scanf("%d", &p);
    /*PlaySound(TEXT("D://δ������.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);*/
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
    printf("������������666\n");
    gotoxy8(45, 14);
    scanf("%d", &k);
    system("cls");
    if (k == 666)
    {
        gotoxy8(45, 16);
        color(12);
        printf("��");
        color(13);
        printf("��");
        color(14);
        gotoxy8(45, 18);
        printf("����س�������Ϸ\n");
        gotoxy8(45, 19);
        while (ch = getch())
        {
            if (ch == '\r')
                mode();
            else if (ch == 27)
                exit(0);
            else
                printf("������س���!\n");
        }
    }
}
int main8()
{
    mode();
    return 0;
}