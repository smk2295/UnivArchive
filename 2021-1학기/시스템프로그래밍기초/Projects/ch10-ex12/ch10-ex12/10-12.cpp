#include <stdio.h>

void compute_time(int *s, int *m);

int main()
{
	int min, sec;

	printf("초를 입력하세요 : ");
	scanf("%d", &sec);

	printf("%d초는 ", sec); 

	compute_time(&sec, &min);
	printf("%d분 %d초 입니다\n", min, sec);

	return 0;
}

void compute_time(int *s, int *m)
{
	*m = *s / 60;
	*s = *s % 60;;
}