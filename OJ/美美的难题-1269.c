#include<stdio.h>
#include <string.h>

int main1269()
{
	int n1, n2, n3, n4;
	char ch1[1000], ch2[1000], ch3[1000], ch4[1000];
	gets(ch1); gets(ch2); gets(ch3); gets(ch4);
	n1 = strlen(ch1); n2 = strlen(ch2);
	n3 = strlen(ch3); n4 = strlen(ch4);
	if (n1 > n2 && n1 > n3 && n1 > n4)
		printf("A\n");
	if (n2 > n1 && n2 > n3 && n2 > n4)
		printf("B\n");
	if (n3 > n1 && n3 > n2 && n3 > n4)
		printf("C\n");
	if (n4 > n1 && n4 > n2 && n4 > n3)
		printf("D\n");
	return 0;
}