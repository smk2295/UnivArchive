#include <stdio.h>

void compute_time(int *s, int *m);

int main()
{
	int min, sec;

	printf("�ʸ� �Է��ϼ��� : ");
	scanf("%d", &sec);

	printf("%d�ʴ� ", sec); 

	compute_time(&sec, &min);
	printf("%d�� %d�� �Դϴ�\n", min, sec);

	return 0;
}

void compute_time(int *s, int *m)
{
	*m = *s / 60;
	*s = *s % 60;;
}