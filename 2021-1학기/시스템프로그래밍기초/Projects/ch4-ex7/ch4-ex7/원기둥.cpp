#include <stdio.h>

int main()
{
	double r,h,pi=3.141592;
	printf("������� �ظ��� ������, ���̸� �Է��ϼ���(cm����):");
	scanf("%lf,%lf",&r,&h);

	printf("����� ������� ���Ǵ� %.1lfcm^3�Դϴ�.\n",pi*r*r*h);

	return 0;
}