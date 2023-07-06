#include <stdio.h>

int main()
{
	double height, weight, average;
	printf("키:");
	scanf("%lf",&height);
	printf("체중:");
	scanf("%lf",&weight);

	average=(height-100)*0.9;
	if(weight>average+5)
		printf("당신은 과체중입니다.\n");
	else if(weight<average-5)
		printf("당신은 저체중입니다.\n");
	else
		printf("당신은 표준 체중입니다.\n");
	return 0;
}