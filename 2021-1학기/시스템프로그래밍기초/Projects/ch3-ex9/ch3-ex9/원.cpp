#include <stdio.h>

int main()
{
	double rad, pi=3.141592, circ, area, vol;

	printf("������(cm)�� �Է��ϼ���.");
	scanf("%lf",&rad);

	circ = 2*rad*pi;
	area = rad*rad*pi;
	vol = (4.0/3.0)*rad*rad*rad*pi;

	printf("�ѷ�=%7.2lfcm\n",circ);
	printf("����=%7.2lfcm^2\n",area);
	printf("����=%7.2lfcm^3\n",vol);

	return 0;
}