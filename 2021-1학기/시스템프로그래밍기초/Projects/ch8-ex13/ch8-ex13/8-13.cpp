#include <stdio.h>

void binary(int n);

int main()
{
	int n;
	
	printf("2진수로 표시할 정수는? ");
	scanf("%d", &n);

	binary(n);

	return 0;
}

void binary(int n)
{
	if (n > 1)
	{
		binary(n / 2);
		printf("%d", n % 2);
	}
	else
		printf("%d", n % 2);
}