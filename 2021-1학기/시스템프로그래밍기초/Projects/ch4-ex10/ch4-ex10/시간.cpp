#include <stdio.h>

int main()
{
	int sec;
	printf("초(sec)입력:");
	scanf("%d",&sec);

	printf(">>입력한 %d초는 %d시간 %d분 %d초입니다.\n",sec,sec/3600,sec%3600/60,sec%60);

	return 0;
}