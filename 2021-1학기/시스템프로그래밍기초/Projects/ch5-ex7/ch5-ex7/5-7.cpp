#include <stdio.h>

int main()
{
	double height, weight, average;
	printf("Ű:");
	scanf("%lf",&height);
	printf("ü��:");
	scanf("%lf",&weight);

	average=(height-100)*0.9;
	if(weight>average+5)
		printf("����� ��ü���Դϴ�.\n");
	else if(weight<average-5)
		printf("����� ��ü���Դϴ�.\n");
	else
		printf("����� ǥ�� ü���Դϴ�.\n");
	return 0;
}