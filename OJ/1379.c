//#include <stdio.h>
//
//int main1379()
//{
//	int T;
//	double ax, ay, bx, by, px, py, xp, yp;
//	scanf("%d", &T);
//	while (T--)
//	{
//		scanf("%lf%lf%lf%lf%lf%lf", &ax, &ay, &bx, &by, &px, &py);
//		if (ax == bx)
//		{
//			xp = ax;
//			yp = py;
//		}
//		else if (ay == by)
//		{
//			xp = px;
//			yp = ay;
//		}
//		else
//		{
//			xp = ((py - by) * 1.0 + ((ax - bx) / (ay - by) * px * 1.0) + ((ay - by) / (ax - bx) * bx * 1.0) / (1.0 * (ax - bx) / (ay - by) + (ay - by) / (ax - bx)));
//			yp = by * 1.0 + ((ay - by) / (ax - bx) * (xp - bx) * 1.0);
//		}
//		printf("%.2lf %.2lf", xp, yp);
//	}
//	return 0;
//}
