#include <stdio.h>

int main()
{
	int sec;
	printf("��(sec)�Է�:");
	scanf("%d",&sec);

	printf(">>�Է��� %d�ʴ� %d�ð� %d�� %d���Դϴ�.\n",sec,sec/3600,sec%3600/60,sec%60);

	return 0;
}