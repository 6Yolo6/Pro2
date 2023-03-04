//#include <iostream>
//#include <math.h>
//using namespace::std;
//int a;
//double Xp, Yp;
//const double Precision = 1E-6;
//inline double d(double x)
//{return sqrt((Xp - x) * (Xp - x) + (Yp - a * x * x) * (Yp - a * x * x));}
//int main11(int argc, const char* argv[])
//{
//	int b, c, t;
//	int X0, Y0;
//	cin >> t;
//	while (t--)
//	{
//		cin >> a >> b >> c >> X0 >> Y0;
//		double D;
//		if (a == 0)
//			D = fabs(1. * (b * X0 - Y0 + c) / sqrt(b * b + 1));
//		else 
//		{
//			double Xc = -1. * b / (2 * a);
//			double Yc = c - 1. * b * b / (4 * a);
//			Xp = X0 - Xc;
//			Yp = Y0 - Yc;
//			double x1, x2;
//			if (a < 0) 
//			{
//				a = -a;
//				Yp = -Yp;
//			}
//			if (Xp < 0)
//				Xp = -Xp;
//			if (Yp < 0) 
//			{
//				x1 = 0.;
//				x2 = Xp;
//			}
//			else 
//			{
//				x1 = Xp;
//				x2 = sqrt(Yp / a);
//				if (x1 > x2)swap(x1, x2);
//			}
//			double lmx, rmx, lm, rm;
//			while (fabs(d(x2) - d(x1)) > Precision)
//			{
//				lmx = x1 + 1. / 3 * (x2 - x1);
//				lm = d(lmx);
//				rmx = x1 + 2. / 3 * (x2 - x1);
//				rm = d(rmx);
//				if (lm < rm)
//					x2 = rmx;
//				else 
//					x1 = lmx;
//			}
//			D = d((x1 + x2) / 2);
//		}
//		printf("%.3lf\n", D);
//	}
//	return 0;
//}