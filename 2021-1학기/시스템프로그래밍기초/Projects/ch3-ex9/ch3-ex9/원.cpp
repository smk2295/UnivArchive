#include <stdio.h>

int main()
{
	double rad, pi=3.141592, circ, area, vol;

	printf("반지름(cm)을 입력하세요.");
	scanf("%lf",&rad);

	circ = 2*rad*pi;
	area = rad*rad*pi;
	vol = (4.0/3.0)*rad*rad*rad*pi;

	printf("둘레=%7.2lfcm\n",circ);
	printf("면적=%7.2lfcm^2\n",area);
	printf("부피=%7.2lfcm^3\n",vol);

	return 0;
}