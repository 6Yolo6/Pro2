#include <stdio.h>

int main1005()
{
	int character = 0, blank = 0, digit = 0, other = 0;
	char ch;
	for(;(ch = getchar()) != ';';)
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			character++;
		else if (ch == ' ')
			blank++;
		else if (ch >= '0' && ch <= '9')
			digit++;
		else
			other++;
	}
	printf("character=%d,blank=%d,digit=%d,other=%d;", character, blank, digit, other);
	return 0;
}