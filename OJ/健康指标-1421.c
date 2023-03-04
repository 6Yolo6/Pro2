#include <stdio.h>

int main1421()
{
	double weight, height, BMI;
	scanf("%lf%lf", &weight, &height);
	BMI = weight / (height * height);
	if (BMI < 18.5)
		printf("thin\n");
	else if (BMI < 24)
		printf("health\n");
	else if (BMI < 28)
		printf("heavy\n");
	else
		printf("fat\n");
	return 0;
}