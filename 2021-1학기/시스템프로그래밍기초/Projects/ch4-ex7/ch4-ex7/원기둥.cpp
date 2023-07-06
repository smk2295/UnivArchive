#include <stdio.h>

int main()
{
	double r,h,pi=3.141592;
	printf("원기둥의 밑면의 반지름, 높이를 입력하세요(cm단위):");
	scanf("%lf,%lf",&r,&h);

	printf("계산한 원기둥의 부피는 %.1lfcm^3입니다.\n",pi*r*r*h);

	return 0;
}