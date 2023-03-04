#include <stdio.h>

int fish(int year, int month, int day)
{
	int year_ = 1990, month_ = 1, day_ = 1, Year = 0, leap = 0, sum = 0;
	for (Year = year_; Year < year; Year++)
		leap += ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0)) ? 1 : 0;
	sum += (year - year_) * 365 + leap;
	for (; month_ < month; month_++)
	{
		switch (month_)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				sum += 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				sum += 30;
				break;
			case 2:
				sum += ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 29 : 28;
		}
	}
	sum += day;
	return (sum % 5 == 0 || sum % 5 == 4) ? 0 : 1;
}
int main1440()
{
	int year, month, day;
	scanf("%4d-%2d-%2d", &year, &month, &day);
	if (fish(year, month, day))
		printf("He is working");
	else
		printf("He is having a rest");
	return 0;
}