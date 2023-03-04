//#include <conio.h>
//#include <stdio.h>
//#include <graphics.h> // 引用 EasyX 图形库
//#include <Windows.h>
//#include <time.h>
//#include <io.h>
//#pragma comment( lib, "MSIMG32.LIB") // 引用该库才能使用 AlphaBlend 函数
//
//#define UPDATE 1000 //更新
//#define NUM 6 //每行金币数量
//int start = GetTickCount();
//int flag1 = 0, flag2 = 0, flag3 = 0, x1 = 100, y1 = 565;
//int coin_x[20] = { 0 }, coin_y1[20] = { 0 }, coin_y2[20] = { 0 }, coin_y3[20] = { 0 }; //金币位置
//int coin_score = 0; //金币得分
//// 1.定义 IMAGE 对象
//IMAGE img[100];
//void move(); // 人物移动
////透明输出图片
//void transparentimage(IMAGE* dstimg, int x, int y, IMAGE* srcimg)
//{
//	HDC dstDC = GetImageHDC(dstimg);
//	HDC srcDC = GetImageHDC(srcimg);
//	int w = srcimg->getwidth();
//	int h = srcimg->getheight();
//	// 结构体的第三个成员表示额外的透明度，0 表示全透明，255 表示不透明。
//	BLENDFUNCTION bf = { AC_SRC_OVER, 0, 255, AC_SRC_ALPHA };
//	// 使用 Windows GDI 函数实现半透明位图
//	AlphaBlend(dstDC, x, y, w, h, srcDC, 0, 0, w, h, bf);
//}
////背景
//void background()
//{
//	int j, k, x, y;
//	BeginBatchDraw(); //1.开启批量绘图模式
//	putimage(30, 35, &img[10]); //头像
//	putimage(130, 80, &img[28]); //小金币
//	x = 50;
//	y = 565;
//	for (j = 0; j < 6; j++) //地板-左
//	{
//		transparentimage(NULL, x, y, &img[3]);
//		//Sleep(250);
//		y += 10;
//	}
//	y = 555;
//	for (j = 0; j < 6; j++) //地板
//	{
//		x = 113;
//		y += 10;
//		for (k = 0; k < 6; k++)
//		{
//			transparentimage(NULL, x, y, &img[4]);
//			//Sleep(250);
//			x += 126;
//		}
//	}
//	y = 565;
//	for (j = 0; j < 6; j++) //地板-右
//	{
//		transparentimage(NULL, x, y, &img[5]);
//		//Sleep(250);
//		y += 10;
//	}
//	x = 50;
//	y = 130;
//	transparentimage(NULL, x, y, &img[0]); //墙-左
//	x = 100;
//	for (k = 0; k < 3; k++) //墙
//	{
//		transparentimage(NULL, x, y, &img[1]);
//		//Sleep(250);
//		x += 230;
//	}
//	transparentimage(NULL, x, y, &img[2]); //墙-右
//}
////金币
//void coins()
//{
//	int i;
//	for (static int j = 0; j < NUM; j++)
//	{
//		coin_y1[j] = 220;
//		coin_y2[j] = 220;
//		coin_y3[j] = 220;
//	}
//	for (i = 0; i < NUM; i++)
//	{
//		coin_x[i] = rand() % 690 + 125;
//		coin_y1[i] += 1;
//		transparentimage(NULL, coin_x[i], coin_y1[i], &img[27]);
//		if (coin_y1[i] >= 685)
//			coin_y1[i] = 220;
//	}
//	for (i = 0; i < NUM; i++)
//	{
//		coin_x[i] = rand() % 690 + 125;
//		coin_y2[i] += 7;
//		transparentimage(NULL, coin_x[i], coin_y2[i], &img[27]);
//		if (coin_y2[i] >= 685)
//			coin_y2[i] = 220;
//	}
//	for (i = 0; i < NUM; i++)
//	{
//		coin_x[i] = rand() % 690 + 125;
//		coin_y3[i] += 15;
//		transparentimage(NULL, coin_x[i], coin_y3[i], &img[27]);
//		if (coin_y3[i] >= 685)
//			coin_y3[i] = 220;
//	}
//	FlushBatchDraw();
//	system("cls");
//	background();
//}
////人物待机
//void ready()
//{
//	int end = GetTickCount();
//	if (flag1 == 0)
//	{
//		if (!flag3)
//			transparentimage(NULL, x1, y1 - 15, &img[6]);
//		else
//			transparentimage(NULL, x1, y1 - 15, &img[23]);
//		FlushBatchDraw();
//		flag1 = 1;
//	}
//	if (end - start >= UPDATE * 2)
//	{
//		if (flag1 == 1)
//		{
//			if (!flag3)
//				transparentimage(NULL, x1, y1 - 15, &img[7]);
//			else
//				transparentimage(NULL, x1, y1 - 15, &img[24]);
//			flag1 = 2;
//		}
//		else if (flag1 == 2)
//		{
//			if (!flag3)
//				transparentimage(NULL, x1, y1 - 15, &img[8]);
//			else
//				transparentimage(NULL, x1, y1 - 15, &img[25]);
//			flag1 = 3;
//		}
//		else if (flag1 == 3)
//		{
//			if (!flag3)
//				transparentimage(NULL, x1, y1 - 15, &img[9]);
//			else
//				transparentimage(NULL, x1, y1 - 15, &img[26]);
//			flag1 = 0;
//		}
//		FlushBatchDraw();
//	}
//}
////人物移动
//void move()
//{
//	static int t = 0;
//	int end = GetTickCount();
//	if (_kbhit())
//	{
//		if (GetAsyncKeyState(0x44) & 0x8000 || GetAsyncKeyState(0x41) & 0x8000 || GetAsyncKeyState(VK_SPACE) & 0x8000)
//		{
//			if (GetAsyncKeyState(0x44) & 0x8000) // 'd'
//			{
//				flag3 = 0;
//				if (end - start >= UPDATE * 2)
//				{
//					x1 += 30;
//					if (flag2 == 0)
//					{
//						transparentimage(NULL, x1, y1, &img[11]);
//						flag2 = 1;
//					}
//					else if (flag2 == 1)
//					{
//						transparentimage(NULL, x1, y1, &img[12]);
//						flag2 = 2;
//					}
//					else if (flag2 == 2)
//					{
//						transparentimage(NULL, x1, y1, &img[13]);
//						flag2 = 0;
//					}
//					FlushBatchDraw();
//					system("cls");
//					background();
//				}
//				if (GetAsyncKeyState(VK_SPACE) & 0x8000) // '空格'
//				{
//					int x2 = x1;
//					int y2 = y1 - 25;
//					transparentimage(NULL, x2, y2, &img[14]);
//					FlushBatchDraw();
//					system("cls");
//					background();
//
//					for (; y2 >= 450; x2 += 7, y2 -= 15)
//					{
//						transparentimage(NULL, x2, y2, &img[15]);
//						FlushBatchDraw();
//						system("cls");
//						background();
//					}
//					for (; y2 <= 535; x2 += 7, y2 += 15)
//					{
//						transparentimage(NULL, x2, y2, &img[16]);
//						FlushBatchDraw();
//						system("cls");
//						background();
//					}
//					x1 = x2;
//				}
//			}
//			if (GetAsyncKeyState(0x41) & 0x8000) // 'a'
//			{
//				flag3 = 1;
//				if (end - start >= UPDATE * 2)
//				{
//					x1 -= 30;
//					if (x1 <= 75)
//						x1 = 75;
//					if (flag2 == 0)
//					{
//						transparentimage(NULL, x1, y1, &img[17]);
//						flag2 = 1;
//					}
//					else if (flag2 == 1)
//					{
//						transparentimage(NULL, x1, y1, &img[18]);
//						flag2 = 2;
//					}
//					else if (flag2 == 2)
//					{
//						transparentimage(NULL, x1, y1, &img[19]);
//						flag2 = 0;
//					}
//					FlushBatchDraw();
//					system("cls");
//					background();
//				}
//				if (GetAsyncKeyState(VK_SPACE) & 0x8000) // '空格'
//				{
//					int x2 = x1;
//					int y2 = y1 - 25;
//					transparentimage(NULL, x2, y2, &img[20]);
//					FlushBatchDraw();
//					system("cls");
//					background();
//					for (; x2 >= 75 && y2 >= 450; x2 -= 7, y2 -= 15)
//					{
//						transparentimage(NULL, x2, y2, &img[21]);
//						FlushBatchDraw();
//						system("cls");
//						background();
//					}
//					for (; x2 >= 75 && y2 <= 540; x2 -= 7, y2 += 15)
//					{
//						transparentimage(NULL, x2, y2, &img[22]);
//						FlushBatchDraw();
//						system("cls");
//						background();
//					}
//					x1 = x2;
//				}
//			}
//			if (GetAsyncKeyState(VK_SPACE) & 0x8000) // '空格'
//			{
//				int y2 = y1 - 25;
//				if (end - start >= UPDATE - 200)
//				{
//					if (!flag3)
//						transparentimage(NULL, x1, y2, &img[14]);
//					else
//						transparentimage(NULL, x1, y2, &img[20]);
//					FlushBatchDraw();
//					system("cls");
//					background();
//					for (; y2 >= 450; y2 -= 15)
//					{
//						if (!flag3)
//							transparentimage(NULL, x1, y2, &img[15]);
//						else
//							transparentimage(NULL, x1, y2, &img[21]);
//						FlushBatchDraw();
//						system("cls");
//						background();
//					}
//					for (; y2 <= 535; y2 += 15)
//					{
//						if (!flag3)
//							transparentimage(NULL, x1, y2, &img[16]);
//						else
//							transparentimage(NULL, x1, y2, &img[22]);
//						FlushBatchDraw();
//						system("cls");
//						background();
//					}
//				}
//				//if (GetAsyncKeyState(VK_SPACE) & 0x8000) // '空格'
//				//{
//				//	if (!flag3)
//				//		transparentimage(NULL, x1, y2, &img[14]);
//				//	else
//				//		transparentimage(NULL, x1, y2, &img[20]);
//				//	FlushBatchDraw();
//				//	system("cls");
//				//	background();
//				//	for (; y2 >= 300; y2 -= 15)
//				//	{
//				//		if (!flag3)
//				//			transparentimage(NULL, x1, y2, &img[15]);
//				//		else
//				//			transparentimage(NULL, x1, y2, &img[21]);
//				//		FlushBatchDraw();
//				//		system("cls");
//				//		background();
//				//	}
//				//	for (; y2 <= 540; y2 += 15)
//				//	{
//				//		if (!flag3)
//				//			transparentimage(NULL, x1, y2, &img[16]);
//				//		else
//				//			transparentimage(NULL, x1, y2, &img[22]);
//				//		FlushBatchDraw();
//				//		system("cls");
//				//		background();
//				//	}
//				//}
//			}
//		}
//		else
//		{
//			ready();
//		}
//	}
//	else
//	{
//		ready();
//	}
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	wchar_t res[30][40] = { _T("imgs-1\\1.PNG"),_T("imgs-1\\2.PNG"),_T("imgs-1\\3.PNG"),_T("imgs-1\\4.PNG"),
//							_T("imgs-1\\5.PNG"),_T("imgs-1\\6.PNG"),_T("imgs-1\\鸣人1.png"),_T("imgs-1\\鸣人2.png"),
//							_T("imgs-1\\鸣人3.png"),_T("imgs-1\\鸣人4.png"),_T("imgs-1\\QQ截图20210120174847.png"),
//							_T("imgs-1\\鸣人跑动 (1).png"),_T("imgs-1\\鸣人跑动 (2).png"),_T("imgs-1\\鸣人跑动 (3).png"),
//							_T("imgs-1\\鸣人跳跃 (1).png"),_T("imgs-1\\鸣人跳跃 (2).png"),_T("imgs-1\\鸣人跳跃 (3).png"),
//							_T("imgs-1\\鸣人跑动 (4).png"),_T("imgs-1\\鸣人跑动 (5).png"),_T("imgs-1\\鸣人跑动 (6).png"),
//							_T("imgs-1\\鸣人跳跃 (4).png"),_T("imgs-1\\鸣人跳跃 (5).png"),_T("imgs-1\\鸣人跳跃 (6).png"),
//							_T("imgs-1\\鸣人5.png"),_T("imgs-1\\鸣人6.png"),_T("imgs-1\\鸣人7.png"),_T("imgs-1\\鸣人8.png"),
//							_T("imgs-1\\金币.png"),_T("imgs-1\\金币（1）.png") };
//	initgraph(1000, 750);
//	for (int i = 0; i < 29; i++)
//	{
//		loadimage(&img[i], res[i], 0, 0);
//		// 3.读取图片到 img 对象中，图片可以是 png 格式，也可以是 jpg 格式
//		// 第 3、4 个参数为设置图片长、宽;若想加载原图大小,可设为 0，也可用 loadimage(&img,_T("imgs-1\\lby-head.png"));
//	}
//	background();
//	while (1)
//	{
//
//		move();
//		FlushBatchDraw();
//	}
//	EndBatchDraw(); //结束批量绘图
//	closegraph(); // 关闭图形界面
//	return 0;
//}